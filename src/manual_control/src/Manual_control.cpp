//这个节点用来通过电脑键盘手动给出无人机期望的速度信息

#include "Manual_control.hpp"

int main(int argc, char **argv)
{
    //避免中文输出的乱码问题：
    setlocale(LC_ALL,"");

    // 初始化ROS节点
    rclcpp::init(argc, argv);

    // 创建名为node的智能指针对象
    auto node = rclcpp::Node::make_shared("ManualControl");
    auto manual_control_publisher = node->create_publisher<fpv_msgs::msg::MoonlyFpv>("/manual_control", 10);
    auto msg_pub_timer = node->create_wall_timer(std::chrono::milliseconds(10), msg_pub);
    auto model_pub_timer = node->create_wall_timer(std::chrono::milliseconds(10), control_model_pub);
    auto boat_speed_timer = node->create_wall_timer(std::chrono::milliseconds(10), boat_speed_pub);


    system("clear"); 
    std::this_thread::sleep_for(std::chrono::milliseconds(250));   //延迟250ms

    rclcpp::Rate rate(20); //终端打印频率：Hz

    // 创建一个线程，用于获取键盘输入
    std::thread getkey_thread(getkey_thread_func);

    rclcpp::spin(node);

    // 等待获取键盘输入的线程结束
    getkey_thread.join();

    // 清理ROS资源
    rclcpp::shutdown();

    system("clear"); 
    std::cout << "\n\n         键盘操控程序已关闭!\n\n" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(300));   //延迟0.3s
    return 0;
}