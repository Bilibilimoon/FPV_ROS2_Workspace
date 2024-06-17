// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fpv_msgs:msg/MoonlyFpv.idl
// generated code does not contain a copyright notice

#ifndef FPV_MSGS__MSG__DETAIL__MOONLY_FPV__BUILDER_HPP_
#define FPV_MSGS__MSG__DETAIL__MOONLY_FPV__BUILDER_HPP_

#include "fpv_msgs/msg/detail/moonly_fpv__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace fpv_msgs
{

namespace msg
{

namespace builder
{

class Init_MoonlyFpv_fpv_model
{
public:
  explicit Init_MoonlyFpv_fpv_model(::fpv_msgs::msg::MoonlyFpv & msg)
  : msg_(msg)
  {}
  ::fpv_msgs::msg::MoonlyFpv fpv_model(::fpv_msgs::msg::MoonlyFpv::_fpv_model_type arg)
  {
    msg_.fpv_model = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fpv_msgs::msg::MoonlyFpv msg_;
};

class Init_MoonlyFpv_control_model
{
public:
  explicit Init_MoonlyFpv_control_model(::fpv_msgs::msg::MoonlyFpv & msg)
  : msg_(msg)
  {}
  Init_MoonlyFpv_fpv_model control_model(::fpv_msgs::msg::MoonlyFpv::_control_model_type arg)
  {
    msg_.control_model = std::move(arg);
    return Init_MoonlyFpv_fpv_model(msg_);
  }

private:
  ::fpv_msgs::msg::MoonlyFpv msg_;
};

class Init_MoonlyFpv_auto_fpv_thr
{
public:
  explicit Init_MoonlyFpv_auto_fpv_thr(::fpv_msgs::msg::MoonlyFpv & msg)
  : msg_(msg)
  {}
  Init_MoonlyFpv_control_model auto_fpv_thr(::fpv_msgs::msg::MoonlyFpv::_auto_fpv_thr_type arg)
  {
    msg_.auto_fpv_thr = std::move(arg);
    return Init_MoonlyFpv_control_model(msg_);
  }

private:
  ::fpv_msgs::msg::MoonlyFpv msg_;
};

class Init_MoonlyFpv_auto_fpv_yaw
{
public:
  explicit Init_MoonlyFpv_auto_fpv_yaw(::fpv_msgs::msg::MoonlyFpv & msg)
  : msg_(msg)
  {}
  Init_MoonlyFpv_auto_fpv_thr auto_fpv_yaw(::fpv_msgs::msg::MoonlyFpv::_auto_fpv_yaw_type arg)
  {
    msg_.auto_fpv_yaw = std::move(arg);
    return Init_MoonlyFpv_auto_fpv_thr(msg_);
  }

private:
  ::fpv_msgs::msg::MoonlyFpv msg_;
};

class Init_MoonlyFpv_auto_fpv_pit
{
public:
  explicit Init_MoonlyFpv_auto_fpv_pit(::fpv_msgs::msg::MoonlyFpv & msg)
  : msg_(msg)
  {}
  Init_MoonlyFpv_auto_fpv_yaw auto_fpv_pit(::fpv_msgs::msg::MoonlyFpv::_auto_fpv_pit_type arg)
  {
    msg_.auto_fpv_pit = std::move(arg);
    return Init_MoonlyFpv_auto_fpv_yaw(msg_);
  }

private:
  ::fpv_msgs::msg::MoonlyFpv msg_;
};

class Init_MoonlyFpv_auto_fpv_rol
{
public:
  explicit Init_MoonlyFpv_auto_fpv_rol(::fpv_msgs::msg::MoonlyFpv & msg)
  : msg_(msg)
  {}
  Init_MoonlyFpv_auto_fpv_pit auto_fpv_rol(::fpv_msgs::msg::MoonlyFpv::_auto_fpv_rol_type arg)
  {
    msg_.auto_fpv_rol = std::move(arg);
    return Init_MoonlyFpv_auto_fpv_pit(msg_);
  }

private:
  ::fpv_msgs::msg::MoonlyFpv msg_;
};

class Init_MoonlyFpv_manual_fpv_thr
{
public:
  explicit Init_MoonlyFpv_manual_fpv_thr(::fpv_msgs::msg::MoonlyFpv & msg)
  : msg_(msg)
  {}
  Init_MoonlyFpv_auto_fpv_rol manual_fpv_thr(::fpv_msgs::msg::MoonlyFpv::_manual_fpv_thr_type arg)
  {
    msg_.manual_fpv_thr = std::move(arg);
    return Init_MoonlyFpv_auto_fpv_rol(msg_);
  }

private:
  ::fpv_msgs::msg::MoonlyFpv msg_;
};

class Init_MoonlyFpv_manual_fpv_yaw
{
public:
  explicit Init_MoonlyFpv_manual_fpv_yaw(::fpv_msgs::msg::MoonlyFpv & msg)
  : msg_(msg)
  {}
  Init_MoonlyFpv_manual_fpv_thr manual_fpv_yaw(::fpv_msgs::msg::MoonlyFpv::_manual_fpv_yaw_type arg)
  {
    msg_.manual_fpv_yaw = std::move(arg);
    return Init_MoonlyFpv_manual_fpv_thr(msg_);
  }

private:
  ::fpv_msgs::msg::MoonlyFpv msg_;
};

class Init_MoonlyFpv_manual_fpv_pit
{
public:
  explicit Init_MoonlyFpv_manual_fpv_pit(::fpv_msgs::msg::MoonlyFpv & msg)
  : msg_(msg)
  {}
  Init_MoonlyFpv_manual_fpv_yaw manual_fpv_pit(::fpv_msgs::msg::MoonlyFpv::_manual_fpv_pit_type arg)
  {
    msg_.manual_fpv_pit = std::move(arg);
    return Init_MoonlyFpv_manual_fpv_yaw(msg_);
  }

private:
  ::fpv_msgs::msg::MoonlyFpv msg_;
};

class Init_MoonlyFpv_manual_fpv_rol
{
public:
  explicit Init_MoonlyFpv_manual_fpv_rol(::fpv_msgs::msg::MoonlyFpv & msg)
  : msg_(msg)
  {}
  Init_MoonlyFpv_manual_fpv_pit manual_fpv_rol(::fpv_msgs::msg::MoonlyFpv::_manual_fpv_rol_type arg)
  {
    msg_.manual_fpv_rol = std::move(arg);
    return Init_MoonlyFpv_manual_fpv_pit(msg_);
  }

private:
  ::fpv_msgs::msg::MoonlyFpv msg_;
};

class Init_MoonlyFpv_fpv_gps_face
{
public:
  explicit Init_MoonlyFpv_fpv_gps_face(::fpv_msgs::msg::MoonlyFpv & msg)
  : msg_(msg)
  {}
  Init_MoonlyFpv_manual_fpv_rol fpv_gps_face(::fpv_msgs::msg::MoonlyFpv::_fpv_gps_face_type arg)
  {
    msg_.fpv_gps_face = std::move(arg);
    return Init_MoonlyFpv_manual_fpv_rol(msg_);
  }

private:
  ::fpv_msgs::msg::MoonlyFpv msg_;
};

class Init_MoonlyFpv_fpv_gps_hight
{
public:
  explicit Init_MoonlyFpv_fpv_gps_hight(::fpv_msgs::msg::MoonlyFpv & msg)
  : msg_(msg)
  {}
  Init_MoonlyFpv_fpv_gps_face fpv_gps_hight(::fpv_msgs::msg::MoonlyFpv::_fpv_gps_hight_type arg)
  {
    msg_.fpv_gps_hight = std::move(arg);
    return Init_MoonlyFpv_fpv_gps_face(msg_);
  }

private:
  ::fpv_msgs::msg::MoonlyFpv msg_;
};

class Init_MoonlyFpv_fpv_gps_lat
{
public:
  explicit Init_MoonlyFpv_fpv_gps_lat(::fpv_msgs::msg::MoonlyFpv & msg)
  : msg_(msg)
  {}
  Init_MoonlyFpv_fpv_gps_hight fpv_gps_lat(::fpv_msgs::msg::MoonlyFpv::_fpv_gps_lat_type arg)
  {
    msg_.fpv_gps_lat = std::move(arg);
    return Init_MoonlyFpv_fpv_gps_hight(msg_);
  }

private:
  ::fpv_msgs::msg::MoonlyFpv msg_;
};

class Init_MoonlyFpv_fpv_gps_lng
{
public:
  explicit Init_MoonlyFpv_fpv_gps_lng(::fpv_msgs::msg::MoonlyFpv & msg)
  : msg_(msg)
  {}
  Init_MoonlyFpv_fpv_gps_lat fpv_gps_lng(::fpv_msgs::msg::MoonlyFpv::_fpv_gps_lng_type arg)
  {
    msg_.fpv_gps_lng = std::move(arg);
    return Init_MoonlyFpv_fpv_gps_lat(msg_);
  }

private:
  ::fpv_msgs::msg::MoonlyFpv msg_;
};

class Init_MoonlyFpv_aim_gps_lat
{
public:
  explicit Init_MoonlyFpv_aim_gps_lat(::fpv_msgs::msg::MoonlyFpv & msg)
  : msg_(msg)
  {}
  Init_MoonlyFpv_fpv_gps_lng aim_gps_lat(::fpv_msgs::msg::MoonlyFpv::_aim_gps_lat_type arg)
  {
    msg_.aim_gps_lat = std::move(arg);
    return Init_MoonlyFpv_fpv_gps_lng(msg_);
  }

private:
  ::fpv_msgs::msg::MoonlyFpv msg_;
};

class Init_MoonlyFpv_aim_gps_lng
{
public:
  explicit Init_MoonlyFpv_aim_gps_lng(::fpv_msgs::msg::MoonlyFpv & msg)
  : msg_(msg)
  {}
  Init_MoonlyFpv_aim_gps_lat aim_gps_lng(::fpv_msgs::msg::MoonlyFpv::_aim_gps_lng_type arg)
  {
    msg_.aim_gps_lng = std::move(arg);
    return Init_MoonlyFpv_aim_gps_lat(msg_);
  }

private:
  ::fpv_msgs::msg::MoonlyFpv msg_;
};

class Init_MoonlyFpv_pwm_right
{
public:
  explicit Init_MoonlyFpv_pwm_right(::fpv_msgs::msg::MoonlyFpv & msg)
  : msg_(msg)
  {}
  Init_MoonlyFpv_aim_gps_lng pwm_right(::fpv_msgs::msg::MoonlyFpv::_pwm_right_type arg)
  {
    msg_.pwm_right = std::move(arg);
    return Init_MoonlyFpv_aim_gps_lng(msg_);
  }

private:
  ::fpv_msgs::msg::MoonlyFpv msg_;
};

class Init_MoonlyFpv_pwm_left
{
public:
  explicit Init_MoonlyFpv_pwm_left(::fpv_msgs::msg::MoonlyFpv & msg)
  : msg_(msg)
  {}
  Init_MoonlyFpv_pwm_right pwm_left(::fpv_msgs::msg::MoonlyFpv::_pwm_left_type arg)
  {
    msg_.pwm_left = std::move(arg);
    return Init_MoonlyFpv_pwm_right(msg_);
  }

private:
  ::fpv_msgs::msg::MoonlyFpv msg_;
};

class Init_MoonlyFpv_boat_angular_speed
{
public:
  explicit Init_MoonlyFpv_boat_angular_speed(::fpv_msgs::msg::MoonlyFpv & msg)
  : msg_(msg)
  {}
  Init_MoonlyFpv_pwm_left boat_angular_speed(::fpv_msgs::msg::MoonlyFpv::_boat_angular_speed_type arg)
  {
    msg_.boat_angular_speed = std::move(arg);
    return Init_MoonlyFpv_pwm_left(msg_);
  }

private:
  ::fpv_msgs::msg::MoonlyFpv msg_;
};

class Init_MoonlyFpv_boat_linear_speed
{
public:
  Init_MoonlyFpv_boat_linear_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoonlyFpv_boat_angular_speed boat_linear_speed(::fpv_msgs::msg::MoonlyFpv::_boat_linear_speed_type arg)
  {
    msg_.boat_linear_speed = std::move(arg);
    return Init_MoonlyFpv_boat_angular_speed(msg_);
  }

private:
  ::fpv_msgs::msg::MoonlyFpv msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fpv_msgs::msg::MoonlyFpv>()
{
  return fpv_msgs::msg::builder::Init_MoonlyFpv_boat_linear_speed();
}

}  // namespace fpv_msgs

#endif  // FPV_MSGS__MSG__DETAIL__MOONLY_FPV__BUILDER_HPP_
