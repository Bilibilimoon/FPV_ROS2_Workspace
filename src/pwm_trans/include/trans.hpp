#include <iostream>
#include <std_msgs/msg/string.hpp>
#include "rclcpp/rclcpp.hpp"
#include <chrono>
#include <thread>
#include <cmath>

#include "fpv_msgs/msg/moonly_fpv.hpp"  //我自定义的FPV消息

int start = 0;

struct Speed    //存输入速度
{
    double linear = 0.0;
    double angular = 0.0;
}speed;

struct Pwm  //存输出的左右螺旋桨PWM值
{
    int left = 0;
    int right = 0;
}pwm;

void speed_get_Callback(const fpv_msgs::msg::MoonlyFpv::SharedPtr speed_msg)
{
    if(start == 0)
    {
        system("clear"); 
        start = 1;
    }

    //获取消息中的速度赋值到全局变量
    speed.linear = speed_msg->boat_linear_speed;
    speed.angular = speed_msg->boat_angular_speed;

    //打印信息
    printf("\r      左螺旋桨PWM:%d    右螺旋桨PWM:%d     ", pwm.left, pwm.right);
}

//速度到PWM的转换
void pwm_trans()
{
    pwm.left = (speed.linear * 2 + (speed.angular + 10 - speed.linear))/3;
    pwm.right = (speed.linear * 2 - (speed.angular + 10 - speed.linear))/3;
}