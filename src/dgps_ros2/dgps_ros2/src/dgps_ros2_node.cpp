#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/nav_sat_fix.hpp>
#include <sensor_msgs/msg/nav_sat_status.hpp>
#include <thread>
#include <string>
#include "dgps_ros2/ntrip.h"
#include <boost/array.hpp>
#include <rclcpp_components/register_node_macro.hpp>
#include "dgps_msgs/msg/gnvtg.hpp"
#include "dgps_msgs/msg/gpfpd.hpp"
#include "dgps_msgs/msg/gtimu.hpp"
#include <regex>

#include <std_msgs/msg/string.hpp>

using namespace std;

// #define STATUS_NO_FIX -1
// #define STATUS_FIX 0
// #define STATUS_GBAS_FIX 2
// #define SERVICE_GPS 1
// #define COVARIANCE_TYPE_DIAGONAL_KNOWN  2

using namespace std::chrono_literals;


namespace dgps_ros2_ns {

class DGpsRos2 : public rclcpp::Node
{
public:
    explicit DGpsRos2(const rclcpp::NodeOptions & options)
      : rclcpp::Node("dgps_ros2_node", options)
    {
        RCLCPP_WARN(get_logger(), "dgps_ros2_node start...");
        
        serverName = this->declare_parameter("server", "rtk.ntrip.qxwz.com");
        serverPort = this->declare_parameter("port", "8002");
        userName = this->declare_parameter("username", "qxwnlp001");
        password = this->declare_parameter("password", "e194992");
        serialPort = this->declare_parameter("port_name", "/dev/gps");
        topic = this->declare_parameter("topic", "dgps");
        frame_id = this->declare_parameter("frame_id", "gps");

        args.server = serverName.c_str();
        args.port = serverPort.c_str();
        args.user = userName.c_str();
        args.password = password.c_str();
        // args.nmea = "$GNGGA,034458.00,2810.79928,N,11256.54467,E,2,12,0.64,36.0,M,-12.7,M,1.0,0773*7D";
        args.nmea = "$GPGGA,074745.00,2810.7222,N,11256.4403,E,1,11,63.4,54.76,M,-16.80,M,,*46";
        args.data = "RTCM32_GGB";
        args.bitrate = 0;
        args.proxyhost = 0;
        args.proxyport = "2101";
        args.mode = NTRIP1;
        args.initudp = 0;
        args.udpport = 0;
        args.protocol = SPAPROTOCOL_NONE;
        args.parity = SPAPARITY_NONE;
        args.stopbits = SPASTOPBITS_1;
        args.databits = SPADATABITS_8;
        args.baud = SPABAUD_115200;
        // args.baud = SPABAUD_460800;
        if( serialPort.empty())
            args.serdevice = 0;//"/dev/ttyUSB0";  
        else
            args.serdevice = serialPort.c_str();
        args.serlogfile = 0;
        args.stop = false;
        
        // RCLCPP_ERROR(get_logger(), "Username= %s",args.user); 
        // RCLCPP_ERROR(get_logger(), "password= %s",args.password); 
        // RCLCPP_ERROR(get_logger(), "port= %s",args.port); 
        // RCLCPP_ERROR(get_logger(), "dev= %s",args.serdevice);

        pub = this->create_publisher<sensor_msgs::msg::NavSatFix>(topic, 10);

        pub_gpfpd = this->create_publisher<dgps_msgs::msg::Gpfpd>("/dgps_gpfpd", 10);
        pub_gtimu = this->create_publisher<dgps_msgs::msg::Gtimu>("/dgps_gtimu", 10);
        pub_gnvtg = this->create_publisher<dgps_msgs::msg::Gnvtg>("/dgps_gnvtg", 10);

        ntrip_thread = std::make_shared<std::thread>(ntrip_client,&args);

        timer_ = this->create_wall_timer(20ms, std::bind(&DGpsRos2::timer_callback, this));

        rclcpp::QoS qos(0);
        qos.reliable();
        // rclcpp::Publisher<std_msgs::msg::String>::SharedPtr pub_status; 
        pub_status = this->create_publisher<std_msgs::msg::String>("/Dev_status", 100);

        usleep(100*1000);
        std_msgs::msg::String mstr;
        mstr.data = "dgps_ros2";
        pub_status->publish(mstr);

    }

    ~DGpsRos2()
    {
        args.stop = true;
        RCLCPP_ERROR(get_logger(), "Waiting to Quit");
        ntrip_thread->join();
        std_msgs::msg::String mstr;
        mstr.data = "dgps_ros2_node 关闭成功!";
        pub_status->publish(mstr);
    }

    void timer_callback()
    {
        sensor_msgs::msg::NavSatFix sat;
        dgps_msgs::msg::Gpfpd gpfpd;
        dgps_msgs::msg::Gtimu gtimu;
	    dgps_msgs::msg::Gnvtg gnvtg;

        int ret = getGpsMsg(sat, gpfpd, gtimu, gnvtg);

        if(ret > 0)
        {
            switch (ret)
            {
            case 1:
                pub->publish(sat);
                break;
            case 2:
                pub_gpfpd->publish(gpfpd);
                break;
            case 3: 
                pub_gtimu->publish(gtimu);
                break;
            case 4:
                pub_gnvtg->publish(gnvtg);
                break;
	    default:
                break;
            }
        }
    }

    void nmeaToFix(smatch m, sensor_msgs::msg::NavSatFix &sat)
    {
        sat.header.frame_id="gps";
        sat.header.stamp = this->now();
        
        int8_t status = sensor_msgs::msg::NavSatFix::_status_type::STATUS_NO_FIX;
        uint16_t service = sensor_msgs::msg::NavSatFix::_status_type::SERVICE_GPS;
        double epe_quality = 1000000;
        uint8_t covariance_type = sensor_msgs::msg::NavSatFix::COVARIANCE_TYPE_UNKNOWN;

        if(m[2] != "") {
            // cout<<"Lat:"<<m[2]<<"  Longi:"<<m[4]<<endl;

            if(m[6] == "-1" || m[6] == "0") {   //Invalid
                status = -1;
                epe_quality = 1000000;
                covariance_type = sensor_msgs::msg::NavSatFix::COVARIANCE_TYPE_UNKNOWN;
            }
            else if(m[6] == "1") {  //SPS
                status = 1;
                epe_quality = 4.0;
                covariance_type = sensor_msgs::msg::NavSatFix::COVARIANCE_TYPE_APPROXIMATED;
            }
            else if(m[6] == "2") {  //DGPS
                status = 2;
                epe_quality = 0.1;
                covariance_type = sensor_msgs::msg::NavSatFix::COVARIANCE_TYPE_APPROXIMATED;
            }
            else if(m[6] == "4") {  //RTK Fix
                status = 4;
                epe_quality = 0.02;
                covariance_type = sensor_msgs::msg::NavSatFix::COVARIANCE_TYPE_APPROXIMATED;
            }
            else if(m[6] == "5") {  //RTK Float
                status = 5;
                epe_quality = 4.0;
                covariance_type = sensor_msgs::msg::NavSatFix::COVARIANCE_TYPE_APPROXIMATED;
            }
            else if(m[6] == "9") {  //WAAS
                status = 9;
                epe_quality = 3.0;
                covariance_type = sensor_msgs::msg::NavSatFix::COVARIANCE_TYPE_APPROXIMATED;
            }
            else {
                status = stoi(m[6]);
                epe_quality = 1000000;
                covariance_type = sensor_msgs::msg::NavSatFix::COVARIANCE_TYPE_UNKNOWN;
            }

            sat.status.status = status;
            sat.status.service = service;
            sat.position_covariance_type = covariance_type;

            sat.latitude = NMEA2float(m[2]);
            if(m[3] == "S") sat.latitude = -sat.latitude;

            if(m[4] != "") sat.longitude = NMEA2float(m[4]);
            if(m[5] == "W") sat.longitude = -sat.longitude;

            if(m[9] != "") sat.altitude = std::stod(m[9]);

            std::copy(covariance.begin(), covariance.end(),sat.position_covariance.begin());
            if(m[8] != "") {
                double hdop = std::stod(m[8]);
                sat.position_covariance[0]  = pow((hdop * epe_quality), 2);
                sat.position_covariance[4]  = pow((hdop * epe_quality), 2);
                sat.position_covariance[8]  = pow((2 * hdop * epe_quality * 2), 2);
            } 
        } 
    }


    int getGpsMsg(sensor_msgs::msg::NavSatFix &sat, dgps_msgs::msg::Gpfpd &gpfpd, dgps_msgs::msg::Gtimu &gtimu, dgps_msgs::msg::Gnvtg &gnvtg)
    {
        string candidate = getNmea();

        smatch m;
        // $GPGGA,093310.80,2810.7292,N,11256.4415,E,1,13,52.7,61.31,M,-16.80,M,,*49
        regex e1("\\$.*?GGA,(.*?),(.*?),(.*?),(.*?),(.*?),(.*?),(.*?),(.*?),(.*?),");
        // $GPFPD,2168,370484.000,353.425,0.452,0.079,28.17868576,112.94064199,36.06,0.018,-0.023,-0.041,0.974,11,10,04*4E
        regex e2("\\$GPFPD,(.*?),(.*?),(.*?),(.*?),(.*?),(.*?),(.*?),(.*?),(.*?),(.*?),(.*?),(.*?),(.*?),(.*?),(.*?)\\*");
        // $GTIMU,2168,370484.000,-0.0993,0.2741,-0.0604,-0.0012,0.0078,0.9957,41.0*48
        regex e3("\\$GTIMU,(.*?),(.*?),(.*?),(.*?),(.*?),(.*?),(.*?),(.*?),(.*?)\\*");

        // string candidate = "$GPFPD,2168,370484.000,353.425,0.452,0.079,28.17868576,112.94064199,36.06,0.018,-0.023,-0.041,0.974,11,10,04*4E";
        // string candidate = "$GTIMU,2168,370484.000,-0.0993,0.2741,-0.0604,-0.0012,0.0078,0.9957,41.0*48";

        // $GNVTG,0.00,T,0.00,M,0.00,N,0.000,K,A*3D
        regex e4("\\$GPVTG,(.*?),(.*?),(.*?),(.*?),(.*?),(.*?),(.*?),(.*?),(.*?)\\*");

        // regex e5("\\$GNGGA,(.*?),(.*?),.*?,(.*?),.*?,(.*?),.*?,(.*?),(.*?),");
        // regex e6("\\$BDGGA,(.*?),(.*?),.*?,(.*?),.*?,(.*?),.*?,(.*?),(.*?),");

        try{
            if(candidate.length() > 0) {
                cout<<candidate<<endl;

                if( std::regex_search (candidate, m, e1))
                {
                    //cout<<candidate<<endl;
                    //cout<<"Lat:"<<m[2]<<"Longi:"<<m[3]<<endl;
        
                    nmeaToFix(m, sat);
        
                    return 1;
                }
                else if(std::regex_search (candidate, m, e2))
                {
                    gpfpd.header.frame_id="gpfpd";
                    gpfpd.header.stamp = this->now();
                    
                    gpfpd.gpfpd = candidate;
        
                    if(m[3] != "") gpfpd.heading = std::stod(m[3]);
                    if(m[4] != "") gpfpd.pitch = std::stod(m[4]);
                    if(m[5] != "") gpfpd.roll = std::stod(m[5]);
                    if(m[6] != "") gpfpd.lattitude = std::stod(m[6]);
                    if(m[7] != "") gpfpd.longitude = std::stod(m[7]);
                    if(m[8] != "") gpfpd.altitude = std::stod(m[8]);
                    if(m[9] != "") gpfpd.velocity_east = std::stod(m[9]);
                    if(m[10] != "") gpfpd.velocity_north = std::stod(m[10]);
                    if(m[11] != "") gpfpd.velocity_up = std::stod(m[11]);
                    if(m[12] != "") gpfpd.baseline = std::stod(m[12]);
                    if(m[13] != "") gpfpd.nsv1 = std::stod(m[13]);
                    if(m[14] != "") gpfpd.nsv2 = std::stod(m[14]);
                    string sts = m[15];
                    if(m[15] != "") gpfpd.status = std::strtol(sts.c_str(), NULL, 16);
                    
                    return 2;
                }
                else if(std::regex_search (candidate, m, e3))
                {
                    gtimu.header.frame_id="gtimu";
                    gtimu.header.stamp = this->now();
                    
                    gtimu.gtimu = candidate;
                    if(m[3] != "") gtimu.gyro_x = std::stod(m[3]);
                    if(m[4] != "") gtimu.gyro_y = std::stod(m[4]);
                    if(m[5] != "") gtimu.gyro_z = std::stod(m[5]);
                    if(m[6] != "") gtimu.acc_x = std::stod(m[6]);
                    if(m[7] != "") gtimu.acc_y = std::stod(m[7]);
                    if(m[8] != "") gtimu.acc_z = std::stod(m[8]);
                    if(m[9] != "") gtimu.tpr = std::stod(m[9]);
                    
                    return 3;
                }else if(std::regex_search (candidate, m, e4))
                {
                    // std::stod(m[1]);
                    gnvtg.header.frame_id="GPVTG";
                    gnvtg.header.stamp = this->now();
                    
                    gnvtg.gnvtg = candidate;
                    if(m[1] != "") gnvtg.heading1 = std::stod(m[1]);
                    if(m[3] != "") gnvtg.heading2 = std::stod(m[3]);
                    if(m[5] != "") gnvtg.speed1 = std::stod(m[5]);
                    if(m[7] != "") gnvtg.speed2 = std::stod(m[7]);
                    string sts = m[8];
                    gnvtg.status = sts;
        
                    return 4;
                }
            }
        }
        catch(const std::exception& e)
            {
            std::cerr << e.what() << '\n';
        }
        
        // cout<<"getGpsMsg error"<<endl;
        return 0;
        
    }

private:
    double NMEA2float(std::string s)
    {
        double d = std::stod(s)/100.0;
        d = floor(d) + (d - floor(d))*10/6;
        return d;
    }

    boost::array<double,9> covariance={1,0,0,
                        0,1,0,
                        0,0,1 };

private:
    std::string topic;
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<sensor_msgs::msg::NavSatFix>::SharedPtr pub; 

    rclcpp::Publisher<dgps_msgs::msg::Gpfpd>::SharedPtr pub_gpfpd; 
    rclcpp::Publisher<dgps_msgs::msg::Gtimu>::SharedPtr pub_gtimu; 
    rclcpp::Publisher<dgps_msgs::msg::Gnvtg>::SharedPtr pub_gnvtg; 
    
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr pub_status; 

    std::shared_ptr<std::thread> ntrip_thread;

    struct Args args;
    std::string serverName,userName,password,serverPort,serialPort,frame_id;

};

}

RCLCPP_COMPONENTS_REGISTER_NODE(dgps_ros2_ns::DGpsRos2)
