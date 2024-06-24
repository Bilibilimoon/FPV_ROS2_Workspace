//这个节点接收目标GPS为止信息和当前GPS位置信息，以及朝向角信息，输出期望速度信息控制飞机移动到目标点

#include "Auto_control.hpp"

const char* Readme = R"(
________________________________________________________
|                                                      |
|                  自动控制节点启动               |
|______________________________________________________|

                     正在等待速度输入...
)";
int main(int argc, char **argv)
{
    //避免中文输出的乱码问题：
    setlocale(LC_ALL,"");

    //初始化ROS节点
    rclcpp::init(argc, argv);

    //创建名为node的智能指针对象
    auto node = rclcpp::Node::make_shared("Pwm_trans"); //创建节点

    //创建订阅器接收无人机GPS位置信息
    auto fpv_gps_subscriber = node->create_subscription<fpv_msgs::msg::MoonlyFpv>("/fpv_info", 10, fpv_gps_subscriber_Callback);
    //订阅manual_control的模式切换
    auto modle_subscriber = node->create_subscription<fpv_msgs::msg::MoonlyFpv>("/manual_control", 10, modle_subscriber_Callback);
    //订阅目标GPS位置信息
    auto aim_gps_subscriber = node->create_subscription<fpv_msgs::msg::MoonlyFpv>("/aim_gps", 10, aim_gps_subscriber_Callback);
    //发布FPV的期望动作
    auto act_pub_timer = node->create_wall_timer(std::chrono::milliseconds(50), act_pub);

    //使用线程来选择当前的自动操控逻辑模式
    std::thread getkey_thread(model_choose);

    printf("\033[2J\033[1;1H");  //清屏
    printf("%s\n",Readme);  //输出提示消息

    std::this_thread::sleep_for(std::chrono::milliseconds(1000));   //延迟1s

    rclcpp::spin(node);
    rclcpp::shutdown();
    system("clear"); 
    std::cout << "\n\n         自动控制节点已关闭!\n\n" << std::endl;
    return 0;
}