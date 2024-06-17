#include <iostream>
#include <std_msgs/msg/string.hpp>
#include "rclcpp/rclcpp.hpp"
#include <chrono>
#include <thread>
#include <cmath>
#include <cstdlib>  //清屏用的头文件
#include <stdio.h>
#include <unistd.h>
#include <termios.h>
#include <linux/input.h>

#include "fpv_msgs/msg/moonly_fpv.hpp"  //我自定义的FPV消息


//用于非阻塞式键盘输入的函数
int key = 0;  //存当前按下的按键的值
int getch(void)
{
    int ch;

    //定义两个termios结构体变量oldt和newt
    struct termios old_one;
    struct termios new_one;

    //调用tcgetattr函数来获取终端的设置，并将其保存在oldt变量中
    //通过将newt变量赋值为oldt的副本，将终端的旧设置复制到新设置中
    tcgetattr(STDIN_FILENO, &old_one);
    new_one = old_one;

    //对newt结构体中的一些标志位进行修改，以实现非阻塞的键盘输入
    new_one.c_lflag &= ~(ICANON | ECHO);    // 禁用终端的规范模式和回显
    new_one.c_iflag |= IGNBRK;              // 忽略输入的 BREAK 字符
    new_one.c_iflag &= ~(INLCR | ICRNL | IXON | IXOFF);     // 禁止输入的回车换行转换和软件流控制
    new_one.c_lflag &= ~(ICANON | ECHO | ECHOK | ECHOE | ECHONL | ISIG | IEXTEN);// 禁用终端的规范模式、回显和信号处理
    new_one.c_cc[VMIN] = 1;         // 设置终端读取的最小字符数为 1
    new_one.c_cc[VTIME] = 0;        // 设置终端读取的超时时间为 0
    tcsetattr(fileno(stdin), TCSANOW, &new_one);// 设置新的终端设置

    ch = getchar(); //获取当前字符

    // 恢复旧的设置
    tcsetattr(STDIN_FILENO, TCSANOW, &old_one);

    return ch;
}

//根据获取的按键值对输出速度信息进行修改
int control_model = -1;  //操控模式切换：自动1/手动-1
int stop_control = 1;   //手刹：开启1/关闭-1
double rol = 0.0; //横滚角
double pit = 0.0; //俯仰角
double yaw = 0.0; //偏航角
double thr = 0.0; //油门
double linear = 0.0; //前进速度
double angular = 0.0; //转向速度
void print_info();
void getkey_thread_func()   // 获取键盘触发的线程函数
{
    while(rclcpp::ok())
        {
            print_info();   //终端消息打印
            // printf("Now key:%d\n",key);     //测试按键用的

            key = -1;
            key = getch();

            if(key == 109)  //切换操控模式:M
            {
                control_model = -control_model;
                linear = 0;
                angular = 0;
                rol = 0.0;
                pit = 0.0;
                yaw = 0.0;
                thr = 0.0;
                stop_control = 1;
            }
            else if(key == 119 && control_model == -1 && thr+0.1 < 5.0)  //油门控制：W
            {
                thr+= 0.1;
            }
            else if(key == 115 && control_model == -1 && thr-0.1 > -5.0)  //油门控制：S
            {
                thr-= 0.1;
            }
            else if(key == 97 && control_model == -1 && yaw-0.1 > -5.0)  //偏航控制：A
            {
                yaw-= 0.1;
            }
            else if(key == 100 && control_model == -1 && yaw+0.1 < 5.0)  //偏航控制：D
            {
                yaw+= 0.1;
            }
            else if(key == 105 && control_model == -1 && pit+0.1 < 5.0)  //俯仰控制：I
            {
                pit+= 0.1;
            }
            else if(key == 107 && control_model == -1 && pit-0.1 > -5.0)  //俯仰控制：K
            {
                pit-= 0.1;
            }
            else if(key == 106 && control_model == -1 && rol+0.1 < 5.0)  //横滚控制：J
            {
                rol+= 0.1;
            }
            else if(key == 108 && control_model == -1 && rol-0.1 > -5.0)  //横滚控制：L
            {
                rol-= 0.1;
            }
            else if(key == 9)    //手刹（Tap）
            {
                if(control_model == 1)
                    continue;
                stop_control = -stop_control;
                linear = 0;
                angular = 0;
                rol = 0.0;
                pit = 0.0;
                yaw = 0.0;
                thr = 0.0;
            }
            else if(key == 3)   // Ctrl + C 退出程序(强制停止)
            {
                linear = 0;
                angular = 0;
                rol = 0.0;
                pit = 0.0;
                yaw = 0.0;
                thr = 0.0;
                break;
            }
            else if(key == 27 && stop_control == -1)   //进入方向键判断
            {
                key = getch();  //跳过方向键的第二个字符
                key = getch();
                if(key == 65 && linear+0.1 < 5.0)       //UP
                {
                    linear+= 0.1;
                }
                else if(key == 66 && linear-0.1 > -5.0)  //DOWN
                {
                    linear-= 0.1;
                }
                else if(key == 67 && angular+0.1 < 5.0)  //RIGHT
                {
                    angular+= 0.1;
                }
                else if(key == 68 && angular-0.1 > -5.0)  //LEFT
                {
                    angular-= 0.1;
                }
                if(stop_control == 1)   //手刹没松开
                {
                    linear = 0.0;
                    angular = 0.0;
                    rol = 0.0;
                    pit = 0.0;
                    yaw = 0.0;
                    thr = 0.0;
                }
            }
        }
}

const char* Readme = R"(_____________________________________________________
|                                                   |
|         你现在可以通过键盘来控制无人机了!         |
|___________________________________________________|
|                                                   |
|    飞行控制部分                                   |
|    W,S:   油门(thr)                               |
|    A,D:   偏航(yaw)                               |
|    I,K:   俯仰(pit)                               |
|    J,L:   横滚(rol)                               |
|                                                   |
|    航行控制部分                                   |
|    ↑,↓:   前进速度(linear)                        |
|    ←,→:   转向速度(angular)                       |
|                                                   |
|    Tab:   手刹                                    |
|                                                   |
|    M:     控制模式（手动/自动）                   |
|                                                   |
|    Ctrl + C:    退出程序(连续按2次)               |
|___________________________________________________|
)";
void print_info()   //用于终端打印信息
{
    system("clear");    //清屏
    printf("%s\n",Readme);    //输出说明文件
    if(stop_control == -1 && control_model == -1)
    {
        printf("________________________________________\n");
        printf("|                                      |\n");
        printf("| 油门:%.1f 偏航:%.1f 俯仰:%.1f 横滚:%.1f  |\n", thr, yaw, pit, rol);
        printf("|______________________________________|\n");
        printf("|                                      |\n");
        printf("|      前进速度:%.1f 转向速度:%.1f       |\n", linear, angular);
        printf("|______________________________________|\n");

    }
    else if(stop_control == 1 && control_model == -1)
    {
        printf("    !!!当前手刹未松开!!!    \n");
    }
    else if(control_model == 1)
    {
        stop_control = 1;
        printf("    !!!当前为自动驾驶模式!!!    \n");
    }
}

void msg_pub()  //ROS2消息发布
{
    auto pub_node = rclcpp::Node::make_shared("ManualControl_pub");
    auto manual_control_publisher = pub_node->create_publisher<fpv_msgs::msg::MoonlyFpv>("/manual_control", 10);
    auto msg = std::make_shared<fpv_msgs::msg::MoonlyFpv>();
    //组织要发送的消息
    msg->boat_angular_speed = angular;
    msg->boat_linear_speed = linear;
    msg->manual_fpv_pit = pit;
    msg->manual_fpv_yaw = yaw;
    msg->manual_fpv_rol = rol;
    msg->manual_fpv_thr = thr;

    manual_control_publisher->publish(*msg);
}