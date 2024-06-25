//此节点把收到的期望速度信息转换成左右螺旋桨的具体PWM值进行输出

#include "trans.hpp"
const char* Readme = R"(
________________________________________________________
|                                                      |
|                  PWM速度转换节点启动                 |
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
    auto speed_subscriber = node->create_subscription<fpv_msgs::msg::MoonlyFpv>("/boat_speed", 10, speed_get_Callback);   //创建订阅：speed

    system("clear"); 
    printf("%s\n",Readme);  //输出提示消息

    //消息发布
    rclcpp::WallRate loop_rate(200); // Hz
    auto publisher = node->create_publisher<fpv_msgs::msg::MoonlyFpv>("/pwm_out", 10);    //创建发布者：pwm到/pwm_out话题
    auto pwm_msg = std::make_shared<fpv_msgs::msg::MoonlyFpv>();
    while(rclcpp::ok())
    {
        pwm_trans();
        
        pwm_msg->set__pwm_left(pwm.left);
        pwm_msg->set__pwm_right(pwm.right);

        publisher->publish(*pwm_msg);

        rclcpp::spin_some(node);
        loop_rate.sleep();
    }

    rclcpp::shutdown();
    system("clear"); 
    std::cout << "\n\n         PWM速度转换节点已关闭!\n\n" << std::endl;
    return 0;
}