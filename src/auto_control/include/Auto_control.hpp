#include <iostream>
#include <std_msgs/msg/string.hpp>
#include "rclcpp/rclcpp.hpp"
#include <chrono>
#include <thread>
#include <cmath>

#include "fpv_msgs/msg/moonly_fpv.hpp"  //我自定义的FPV消息

//期望动作输出
double rol; //横滚角
double pit; //俯仰角
double yaw; //偏航角
double thr; //油门

//目标位置
double aim_gps_lng; //目标经度
double aim_gps_lat; //目标纬度

//飞机实时信息
double fpv_gps_lng;     //飞机当前经度
double fpv_gps_lat;     //飞机当前纬度
double fpv_gps_hight;   //飞机当前海拔
double fpv_gps_face;    //飞机当前水平朝向角(360°制)

//订阅无人机实时信息
void fpv_gps_subscriber_Callback(const fpv_msgs::msg::MoonlyFpv::SharedPtr msg)
{
    fpv_gps_face = msg->fpv_gps_face;
    fpv_gps_hight = msg->fpv_gps_hight;
    fpv_gps_lat = msg->fpv_gps_lat;
    fpv_gps_lng = msg->fpv_gps_lng;
}

//订阅目标GPS位置信息
void aim_gps_subscriber_Callback(const fpv_msgs::msg::MoonlyFpv::SharedPtr msg)
{
    aim_gps_lat = msg->aim_gps_lat;
    aim_gps_lng = msg->aim_gps_lng;
}

//循环发布期望动作
void act_pub()
{
    
}

