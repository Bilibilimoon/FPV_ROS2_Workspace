//进行图片的像素坐标到GPS坐标转换
#include "Position_trans.hpp"

int main(int argc, char **argv)
{
    //避免中文输出的乱码问题：
    setlocale(LC_ALL,"");

    // 初始化ROS节点
    rclcpp::init(argc, argv);

    // 创建名为node的智能指针对象
    auto node = rclcpp::Node::make_shared("PositionTrans");
    auto manual_control_publisher = node->create_publisher<fpv_msgs::msg::MoonlyFpv>("/aim_gps", 10);

    auto sub = node->create_subscription<temp_msgs::msg::TempMsg>("/in",10, sub_callback);

    system("clear"); 
    std::this_thread::sleep_for(std::chrono::milliseconds(250));   //延迟250ms

    rclcpp::Rate rate(20); //终端打印频率：Hz

    rclcpp::spin(node);

    // 清理ROS资源
    rclcpp::shutdown();

    system("clear"); 
    std::cout << "\n\n         坐标转换节点已关闭!\n\n" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(300));   //延迟0.3s
    return 0;
}