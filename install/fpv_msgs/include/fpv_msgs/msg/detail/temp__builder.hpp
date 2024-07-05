// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fpv_msgs:msg/Temp.idl
// generated code does not contain a copyright notice

#ifndef FPV_MSGS__MSG__DETAIL__TEMP__BUILDER_HPP_
#define FPV_MSGS__MSG__DETAIL__TEMP__BUILDER_HPP_

#include "fpv_msgs/msg/detail/temp__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace fpv_msgs
{

namespace msg
{

namespace builder
{

class Init_Temp_output_j
{
public:
  explicit Init_Temp_output_j(::fpv_msgs::msg::Temp & msg)
  : msg_(msg)
  {}
  ::fpv_msgs::msg::Temp output_j(::fpv_msgs::msg::Temp::_output_j_type arg)
  {
    msg_.output_j = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fpv_msgs::msg::Temp msg_;
};

class Init_Temp_output_w
{
public:
  explicit Init_Temp_output_w(::fpv_msgs::msg::Temp & msg)
  : msg_(msg)
  {}
  Init_Temp_output_j output_w(::fpv_msgs::msg::Temp::_output_w_type arg)
  {
    msg_.output_w = std::move(arg);
    return Init_Temp_output_j(msg_);
  }

private:
  ::fpv_msgs::msg::Temp msg_;
};

class Init_Temp_y_max
{
public:
  explicit Init_Temp_y_max(::fpv_msgs::msg::Temp & msg)
  : msg_(msg)
  {}
  Init_Temp_output_w y_max(::fpv_msgs::msg::Temp::_y_max_type arg)
  {
    msg_.y_max = std::move(arg);
    return Init_Temp_output_w(msg_);
  }

private:
  ::fpv_msgs::msg::Temp msg_;
};

class Init_Temp_x_max
{
public:
  explicit Init_Temp_x_max(::fpv_msgs::msg::Temp & msg)
  : msg_(msg)
  {}
  Init_Temp_y_max x_max(::fpv_msgs::msg::Temp::_x_max_type arg)
  {
    msg_.x_max = std::move(arg);
    return Init_Temp_y_max(msg_);
  }

private:
  ::fpv_msgs::msg::Temp msg_;
};

class Init_Temp_y_min
{
public:
  explicit Init_Temp_y_min(::fpv_msgs::msg::Temp & msg)
  : msg_(msg)
  {}
  Init_Temp_x_max y_min(::fpv_msgs::msg::Temp::_y_min_type arg)
  {
    msg_.y_min = std::move(arg);
    return Init_Temp_x_max(msg_);
  }

private:
  ::fpv_msgs::msg::Temp msg_;
};

class Init_Temp_x_min
{
public:
  explicit Init_Temp_x_min(::fpv_msgs::msg::Temp & msg)
  : msg_(msg)
  {}
  Init_Temp_y_min x_min(::fpv_msgs::msg::Temp::_x_min_type arg)
  {
    msg_.x_min = std::move(arg);
    return Init_Temp_y_min(msg_);
  }

private:
  ::fpv_msgs::msg::Temp msg_;
};

class Init_Temp_right_down_j
{
public:
  explicit Init_Temp_right_down_j(::fpv_msgs::msg::Temp & msg)
  : msg_(msg)
  {}
  Init_Temp_x_min right_down_j(::fpv_msgs::msg::Temp::_right_down_j_type arg)
  {
    msg_.right_down_j = std::move(arg);
    return Init_Temp_x_min(msg_);
  }

private:
  ::fpv_msgs::msg::Temp msg_;
};

class Init_Temp_right_down_w
{
public:
  explicit Init_Temp_right_down_w(::fpv_msgs::msg::Temp & msg)
  : msg_(msg)
  {}
  Init_Temp_right_down_j right_down_w(::fpv_msgs::msg::Temp::_right_down_w_type arg)
  {
    msg_.right_down_w = std::move(arg);
    return Init_Temp_right_down_j(msg_);
  }

private:
  ::fpv_msgs::msg::Temp msg_;
};

class Init_Temp_left_down_j
{
public:
  explicit Init_Temp_left_down_j(::fpv_msgs::msg::Temp & msg)
  : msg_(msg)
  {}
  Init_Temp_right_down_w left_down_j(::fpv_msgs::msg::Temp::_left_down_j_type arg)
  {
    msg_.left_down_j = std::move(arg);
    return Init_Temp_right_down_w(msg_);
  }

private:
  ::fpv_msgs::msg::Temp msg_;
};

class Init_Temp_left_down_w
{
public:
  explicit Init_Temp_left_down_w(::fpv_msgs::msg::Temp & msg)
  : msg_(msg)
  {}
  Init_Temp_left_down_j left_down_w(::fpv_msgs::msg::Temp::_left_down_w_type arg)
  {
    msg_.left_down_w = std::move(arg);
    return Init_Temp_left_down_j(msg_);
  }

private:
  ::fpv_msgs::msg::Temp msg_;
};

class Init_Temp_right_up_j
{
public:
  explicit Init_Temp_right_up_j(::fpv_msgs::msg::Temp & msg)
  : msg_(msg)
  {}
  Init_Temp_left_down_w right_up_j(::fpv_msgs::msg::Temp::_right_up_j_type arg)
  {
    msg_.right_up_j = std::move(arg);
    return Init_Temp_left_down_w(msg_);
  }

private:
  ::fpv_msgs::msg::Temp msg_;
};

class Init_Temp_right_up_w
{
public:
  explicit Init_Temp_right_up_w(::fpv_msgs::msg::Temp & msg)
  : msg_(msg)
  {}
  Init_Temp_right_up_j right_up_w(::fpv_msgs::msg::Temp::_right_up_w_type arg)
  {
    msg_.right_up_w = std::move(arg);
    return Init_Temp_right_up_j(msg_);
  }

private:
  ::fpv_msgs::msg::Temp msg_;
};

class Init_Temp_left_up_j
{
public:
  explicit Init_Temp_left_up_j(::fpv_msgs::msg::Temp & msg)
  : msg_(msg)
  {}
  Init_Temp_right_up_w left_up_j(::fpv_msgs::msg::Temp::_left_up_j_type arg)
  {
    msg_.left_up_j = std::move(arg);
    return Init_Temp_right_up_w(msg_);
  }

private:
  ::fpv_msgs::msg::Temp msg_;
};

class Init_Temp_left_up_w
{
public:
  Init_Temp_left_up_w()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Temp_left_up_j left_up_w(::fpv_msgs::msg::Temp::_left_up_w_type arg)
  {
    msg_.left_up_w = std::move(arg);
    return Init_Temp_left_up_j(msg_);
  }

private:
  ::fpv_msgs::msg::Temp msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fpv_msgs::msg::Temp>()
{
  return fpv_msgs::msg::builder::Init_Temp_left_up_w();
}

}  // namespace fpv_msgs

#endif  // FPV_MSGS__MSG__DETAIL__TEMP__BUILDER_HPP_
