#include <iostream>
#include <std_msgs/msg/string.hpp>
#include "rclcpp/rclcpp.hpp"
#include <chrono>
#include <thread>
#include <cmath>
#include <stdio.h>
#include <pthread.h>

#include "fpv_msgs/msg/moonly_fpv.hpp"  //我自定义的FPV消息

//期望动作输出(发布)
double rol; //横滚角
double pit; //俯仰角
double yaw; //偏航角
double thr; //油门
double linear;  //船的期望线速度
double angular; //船的期望角速度
//操控模式切换：自动1/手动-1    （接收）
int control_model = -1;
//自动模式下两栖切换：飞机1/船-1
int fpv_model = 1;

//目标位置（接收）
double aim_gps_lng; //目标经度
double aim_gps_lat; //目标纬度

//飞机实时信息（接收）
double fpv_gps_lng;     //飞机当前经度
double fpv_gps_lat;     //飞机当前纬度
double fpv_gps_hight;   //飞机当前海拔
double fpv_gps_face;    //飞机当前水平朝向角(360°制)

//飞机初始位置信息
double start_hight; //初始海拔
double start_lng;   //初始经度
double start_lat;   //初始纬度

//手动给定水面距初始海拔的落差
double fall = 4;               // <————————————————————————————————————————这个值要在代码这里手动给好！！！

//订阅无人机实时信息(从此节点启动就一直订阅)
void fpv_gps_subscriber_Callback(const fpv_msgs::msg::MoonlyFpv::SharedPtr msg)
{
    fpv_gps_face = msg->fpv_gps_face;
    fpv_gps_hight = msg->fpv_gps_hight;
    fpv_gps_lat = msg->fpv_gps_lat;
    fpv_gps_lng = msg->fpv_gps_lng;
}

//订阅manual_control的模式切换,并且初始化飞机初始位置信息
int start = 0;
void control_modle_subscriber_Callback(const fpv_msgs::msg::MoonlyFpv::SharedPtr msg)
{
    if(msg->control_model == 1 && start == 0) //从手动模式切换到自动模式
    {
        control_model = 1;
        start = 1;
        //记录飞机初始位置信息
        start_hight = fpv_gps_hight;
        start_lat = fpv_gps_lat;
        start_lng = fpv_gps_lng;
        fpv_model = 1;
    }
    else if(control_model == 1 && msg->control_model == -1)
    {
        control_model = -1;
        start = 0;
        fpv_model = 1;
        start_hight = 0;
        start_lat = 0;
        start_lng = 0;
    }
}

//订阅目标GPS位置信息
void aim_gps_subscriber_Callback(const fpv_msgs::msg::MoonlyFpv::SharedPtr msg)
{
    aim_gps_lat = msg->aim_gps_lat;
    aim_gps_lng = msg->aim_gps_lng;
}

/*——————————————————————————————————————————————以下是逻辑控制部分——————————————————————————————————————————————*/
int take_off_flag = 0;  //起飞是否成功（达到预期高度）的标志位：成功1/失败0
int land_flag = 0;  //是否成功降落到了水面：成功1/失败0/需要开始降落-1
void *take_off(void *arg);
void *land(void *arg);
void *auto_fpv_control(void *arg);
void *auto_boat_control(void *arg);
//用于调整这些标志位来调用对应的函数执行动作
void model_choose()
{
    //使用了pthread库来创建了四个线程，分别执行起飞、降落、自动FPV控制和自动船控制的函数
    pthread_t takeoff_thread, land_thread, fpv_thread, boat_thread;

    pthread_create(&takeoff_thread, NULL, take_off, NULL);
    pthread_create(&land_thread, NULL, land, NULL);
    pthread_create(&fpv_thread, NULL, auto_fpv_control, NULL);
    pthread_create(&boat_thread, NULL, auto_boat_control, NULL);

    double edge = 5;  //默认5m范围内就算到达预期降落范围
    while(1)
    {
        if(control_model == -1)     //当前为键盘手动操控模式
        {
            take_off_flag = 0;
            land_flag = 0;
            continue;
        }
        if((fpv_gps_lng - aim_gps_lng)*97176.56 <= edge && (fpv_gps_lng - aim_gps_lng)*97176.56 >= -edge && (fpv_gps_lat - aim_gps_lat)*111000 <= edge && (fpv_gps_lat - aim_gps_lat)*111000 >= -edge)    //比较当前船和驶向点位的距离
        {
            land_flag = -1;    //飞行到达预期范围内了，开始降落
        }    
    }

    pthread_join(takeoff_thread, NULL);
    pthread_join(land_thread, NULL);
    pthread_join(fpv_thread, NULL);
    pthread_join(boat_thread, NULL);
}

//用于起飞
void *take_off(void *arg)
{
    while(1)
    {
        if(control_model == -1 || take_off_flag == 1) //不能起飞
            continue;
        if(fpv_gps_hight <= start_hight + 6)   //起飞到比原来海拔高6米
        {
            thr = 1;    //给油起飞
        }
        else
        {
            take_off_flag = 1;
            land_flag = 0;
            break;
        }
    }
    return NULL;
}

//用于降落
void *land(void *arg)
{
    while(1)
    {
        if(control_model == -1 || land_flag != -1 || take_off_flag == 0) //不能降落
            continue;
        if(fpv_gps_hight >= start_hight - fall)
        {
            thr = -1;   //减小油门降落
        }
        else
        {
            land_flag = 1;
            thr = 0;
            break;
        }
    }
    return NULL;
}

//用来执行起飞之后自动控制功能，调整输出的油门大小等消息
void *auto_fpv_control(void *arg)
{
    while(1)
    {
        if(control_model == -1 || land_flag != 0 || take_off_flag == 0)  //当前状态不是起飞成功后和降落成功前
            continue;
        //计算目标与正北夹角（0～360）
        double lat1 = fpv_gps_lat * M_PI / 180; // 将纬度转换为弧度
        double lon1 = fpv_gps_lng * M_PI / 180; // 将经度转换为弧度
        double lat2 = aim_gps_lat * M_PI / 180; // 将纬度转换为弧度
        double lon2 = aim_gps_lng * M_PI / 180; // 将经度转换为弧度

        double dLon = lon2 - lon1;

        double y = sin(dLon) * cos(lat2);
        double x = cos(lat1) * sin(lat2) - sin(lat1) * cos(lat2) * cos(dLon);
        double heading = atan2(y, x);   //期望朝向角

        // 将弧度转换为度数，并确保夹角在0到360度之间
        heading = fmod(heading * 180 / M_PI, 360);
        if (heading < 0) 
        {
            heading += 360;
        }

        //转向的逻辑判断
        if(heading >= fpv_gps_face)
        {
            if(360 - heading + fpv_gps_face <= 30 || heading - fpv_gps_face <= 30)    //前进
            {
                pit = 1.4;  //调整输出的俯仰角
                if(360 - heading + fpv_gps_face <= 7 || heading - fpv_gps_face <= 7)
                {
                    yaw = 0.0; 
                }
                else if(360 - heading + fpv_gps_face <= 10 || heading - fpv_gps_face <= 10)
                {
                    if(heading - fpv_gps_face <= 10)    //直线行驶途中修正航向
                    {
                        yaw = 0.1;
                    }
                    else
                    {
                        yaw = -0.1;
                    }
                }
                else
                {
                    if(heading - fpv_gps_face <= 30)    //直线行驶途中修正航向
                    {
                        yaw = 0.2;
                    }
                    else
                    {
                        yaw = -0.2;
                    }
                }
            }
            else if(heading - fpv_gps_face <=180)  //右转
            {
                yaw = 0.4;
                pit = 0;
            }
            else    //左转
            {
                yaw = -0.4;
                pit = 0;
            }
        }
        else
        {
            if(360 - fpv_gps_face + heading <= 30 || fpv_gps_face - heading <= 30)    //前进
            {
                pit = 1.4;
                if(360 - fpv_gps_face + heading <= 7 || fpv_gps_face - heading <= 7)
                {
                    yaw = 0.0;
                }
                else if(360 - fpv_gps_face + heading <= 10 || fpv_gps_face - heading <= 10)
                {
                    if(fpv_gps_face - heading <= 10)    //直线行驶途中修正航向
                    {
                        yaw = -0.1;
                    }
                    else
                    {
                        yaw = 0.1;
                    }
                }
                else //if(360 - yaw + heading <= 20 || yaw - heading <= 20)
                {
                    if(fpv_gps_face - heading <= 30)    //直线行驶途中修正航向
                    {
                        yaw = -0.2;
                    }
                    else
                    {
                        yaw = 0.2;
                    }
                }
            }
            else if(fpv_gps_face - heading <=180)  //左转
            {
                yaw = -0.4;
                pit = 0;
            }
            else    //右转
            {
                yaw = 0.4;
                pit = 0;
            }
        }
    }
    return NULL;
}

//执行降落之后的水面控制，调整船的期望线速度、角速度输出
void *auto_boat_control(void *arg)
{
    while(1)
    {
        if(control_model == -1 || land_flag != 1 || take_off_flag == 0)  //当前状态不是降落成功后
            continue;
        //计算目标与正北夹角（0～360）
        double lat1 = fpv_gps_lat * M_PI / 180; // 将纬度转换为弧度
        double lon1 = fpv_gps_lng * M_PI / 180; // 将经度转换为弧度
        double lat2 = aim_gps_lat * M_PI / 180; // 将纬度转换为弧度
        double lon2 = aim_gps_lng * M_PI / 180; // 将经度转换为弧度

        double dLon = lon2 - lon1;

        double y = sin(dLon) * cos(lat2);
        double x = cos(lat1) * sin(lat2) - sin(lat1) * cos(lat2) * cos(dLon);
        double heading = atan2(y, x);   //期望朝向角

        // 将弧度转换为度数，并确保夹角在0到360度之间
        heading = fmod(heading * 180 / M_PI, 360);
        if (heading < 0) 
        {
            heading += 360;
        }

        //转向的逻辑判断
        if(heading >= fpv_gps_face)
        {
            if(360 - heading + fpv_gps_face <= 30 || heading - fpv_gps_face <= 30)    //前进
            {
                linear = 1.4;  //调整输出的线速度
                if(360 - heading + fpv_gps_face <= 7 || heading - fpv_gps_face <= 7)
                {
                    angular = 0.0; 
                }
                else if(360 - heading + fpv_gps_face <= 10 || heading - fpv_gps_face <= 10)
                {
                    if(heading - fpv_gps_face <= 10)    //直线行驶途中修正航向
                    {
                        angular = 0.1;
                    }
                    else
                    {
                        angular = -0.1;
                    }
                }
                else
                {
                    if(heading - fpv_gps_face <= 30)    //直线行驶途中修正航向
                    {
                        angular = 0.2;
                    }
                    else
                    {
                        angular = -0.2;
                    }
                }
            }
            else if(heading - fpv_gps_face <=180)  //右转
            {
                angular = 0.4;
                linear = 0;
            }
            else    //左转
            {
                angular = -0.4;
                linear = 0;
            }
        }
        else
        {
            if(360 - fpv_gps_face + heading <= 30 || fpv_gps_face - heading <= 30)    //前进
            {
                linear = 1.4;
                if(360 - fpv_gps_face + heading <= 7 || fpv_gps_face - heading <= 7)
                {
                    angular = 0.0;
                }
                else if(360 - fpv_gps_face + heading <= 10 || fpv_gps_face - heading <= 10)
                {
                    if(fpv_gps_face - heading <= 10)    //直线行驶途中修正航向
                    {
                        angular = -0.1;
                    }
                    else
                    {
                        angular = 0.1;
                    }
                }
                else //if(360 - yaw + heading <= 20 || yaw - heading <= 20)
                {
                    if(fpv_gps_face - heading <= 30)    //直线行驶途中修正航向
                    {
                        angular = -0.2;
                    }
                    else
                    {
                        angular = 0.2;
                    }
                }
            }
            else if(fpv_gps_face - heading <=180)  //左转
            {
                angular = -0.4;
                linear = 0;
            }
            else    //右转
            {
                angular = 0.4;
                linear = 0;
            }
        }
    }
    return NULL;
}

//循环发布期望动作到话题：/Auto_control
void act_pub()
{
    auto node = rclcpp::Node::make_shared("AutoControl");
    auto Auto_control_publisher = node->create_publisher<fpv_msgs::msg::MoonlyFpv>("/auto_control", 10);
    auto msg = std::make_shared<fpv_msgs::msg::MoonlyFpv>();

    msg->auto_fpv_rol = rol;
    msg->auto_fpv_pit = pit;
    msg->auto_fpv_thr = thr;
    msg->auto_fpv_yaw = yaw;
    msg->boat_linear_speed = linear;
    msg->boat_angular_speed = angular;

    Auto_control_publisher->publish(*msg);

    // system("clear"); 
    for(int i=0;i<7;i++)    //刷新这几行重新打印
        printf("\033[3A\033[K");
    printf("————飞机————\n当前油门：%.1f      \n当前偏航：%.1f      \n当前俯仰：%.1f      \n当前横滚：%.1f      \n————船————\n当前期望线速度%.1f      \n当前期望角速度:%.1f      \n", thr, yaw, pit, rol, linear, angular);
}