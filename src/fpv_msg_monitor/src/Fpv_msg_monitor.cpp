//监控打印的消息
#include "rclcpp/rclcpp.hpp"
#include "fpv_msgs/msg/moonly_fpv.hpp"

void manualControlCallback(const fpv_msgs::msg::MoonlyFpv::SharedPtr msg)
{
  
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Received manual control message:");
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Boat Linear Speed: %f", msg->boat_linear_speed);
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Boat Angular Speed: %f", msg->boat_angular_speed);
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "PWM Left: %d", msg->pwm_left);
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "PWM Right: %d", msg->pwm_right);
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Aim GPS Longitude: %f", msg->aim_gps_lng);
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Aim GPS Latitude: %f", msg->aim_gps_lat);
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "FPV GPS Longitude: %f", msg->fpv_gps_lng);
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "FPV GPS Latitude: %f", msg->fpv_gps_lat);
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "FPV GPS Height: %f", msg->fpv_gps_hight);
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "FPV GPS Face: %f", msg->fpv_gps_face);
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Manual FPV Roll: %f", msg->manual_fpv_rol);
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Manual FPV Pitch: %f", msg->manual_fpv_pit);
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Manual FPV Yaw: %f", msg->manual_fpv_yaw);
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Manual FPV Throttle: %f", msg->manual_fpv_thr);
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Auto FPV Roll: %f", msg->auto_fpv_rol);
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Auto FPV Pitch: %f", msg->auto_fpv_pit);
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Auto FPV Yaw: %f", msg->auto_fpv_yaw);
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Auto FPV Throttle: %f", msg->auto_fpv_thr);
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Control Model: %d", msg->control_model);
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "FPV Model: %d", msg->fpv_model);
}

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  auto node = rclcpp::Node::make_shared("manual_control_subscriber");
  auto subscription = node->create_subscription<fpv_msgs::msg::MoonlyFpv>(
    "/auto_control", 10, manualControlCallback);

  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
