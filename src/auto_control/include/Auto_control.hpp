#include <iostream>
#include <std_msgs/msg/string.hpp>
#include "rclcpp/rclcpp.hpp"
#include <chrono>
#include <thread>
#include <cmath>

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
double fall = 0;               // <————————————————————————————————————————这个值要在代码这里手动给好！！！

//订阅无人机实时信息(从此节点启动就一直订阅)
void fpv_gps_subscriber_Callback(const fpv_msgs::msg::MoonlyFpv::SharedPtr msg)
{
    fpv_gps_face = msg->fpv_gps_face;
    fpv_gps_hight = msg->fpv_gps_hight;
    fpv_gps_lat = msg->fpv_gps_lat;
    fpv_gps_lng = msg->fpv_gps_lng;
}

//订阅manual_control的模式切换,并且初始化飞机初始位置信息
void modle_subscriber_Callback(const fpv_msgs::msg::MoonlyFpv::SharedPtr msg)
{
    if(control_model == -1 && msg->control_model == 1) //从手动模式切换到自动模式
    {
        control_model = 1;
        //记录飞机初始位置信息
        start_hight = fpv_gps_hight;
        start_lat = fpv_gps_lat;
        start_lng = fpv_gps_lng;
        fpv_model = 1;
    }
    else
    {
        control_model = -1;
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

int take_off_flag = 0;  //起飞是否成功（达到预期高度）的标志位：成功1/失败0
int land_flag = 0;  //是否成功降落到了水面：成功1/失败0

//用于起飞
void take_off()
{
    while(1)
    {
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
}

//用于降落
void land()
{
    while(1)
    {
        if(fpv_gps_face >= start_hight - fall)
        {
            thr = -1;   //减小油门降落
        }
        else
        {
            land_flag = 1;
            take_off_flag = 0;
            break;
        }
    }
}

//用来执行起飞之后自动控制功能，调整输出的油门大小等消息
void auto_fpv_control()
{
    
}

//执行降落之后的水面控制，调整船的期望线速度、角速度输出
void auto_boat_control()
{

}

//循环发布期望动作到话题：/Auto_control
void act_pub()
{
    auto node = rclcpp::Node::make_shared("Auto_control_pub");
    auto Auto_control_publisher = node->create_publisher<fpv_msgs::msg::MoonlyFpv>("/Auto_control", 10);
    auto msg = std::make_shared<fpv_msgs::msg::MoonlyFpv>();
    msg->auto_fpv_rol = rol;
    msg->auto_fpv_pit = pit;
    msg->auto_fpv_thr = thr;
    msg->auto_fpv_yaw = yaw;
    msg->boat_linear_speed = linear;
    msg->boat_angular_speed = angular;
    Auto_control_publisher->publish(*msg);
}

