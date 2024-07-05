// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from temp_msgs:msg/TempMsg.idl
// generated code does not contain a copyright notice

#ifndef TEMP_MSGS__MSG__DETAIL__TEMP_MSG__BUILDER_HPP_
#define TEMP_MSGS__MSG__DETAIL__TEMP_MSG__BUILDER_HPP_

#include "temp_msgs/msg/detail/temp_msg__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace temp_msgs
{

namespace msg
{

namespace builder
{

class Init_TempMsg_output_j
{
public:
  explicit Init_TempMsg_output_j(::temp_msgs::msg::TempMsg & msg)
  : msg_(msg)
  {}
  ::temp_msgs::msg::TempMsg output_j(::temp_msgs::msg::TempMsg::_output_j_type arg)
  {
    msg_.output_j = std::move(arg);
    return std::move(msg_);
  }

private:
  ::temp_msgs::msg::TempMsg msg_;
};

class Init_TempMsg_output_w
{
public:
  explicit Init_TempMsg_output_w(::temp_msgs::msg::TempMsg & msg)
  : msg_(msg)
  {}
  Init_TempMsg_output_j output_w(::temp_msgs::msg::TempMsg::_output_w_type arg)
  {
    msg_.output_w = std::move(arg);
    return Init_TempMsg_output_j(msg_);
  }

private:
  ::temp_msgs::msg::TempMsg msg_;
};

class Init_TempMsg_y_max
{
public:
  explicit Init_TempMsg_y_max(::temp_msgs::msg::TempMsg & msg)
  : msg_(msg)
  {}
  Init_TempMsg_output_w y_max(::temp_msgs::msg::TempMsg::_y_max_type arg)
  {
    msg_.y_max = std::move(arg);
    return Init_TempMsg_output_w(msg_);
  }

private:
  ::temp_msgs::msg::TempMsg msg_;
};

class Init_TempMsg_x_max
{
public:
  explicit Init_TempMsg_x_max(::temp_msgs::msg::TempMsg & msg)
  : msg_(msg)
  {}
  Init_TempMsg_y_max x_max(::temp_msgs::msg::TempMsg::_x_max_type arg)
  {
    msg_.x_max = std::move(arg);
    return Init_TempMsg_y_max(msg_);
  }

private:
  ::temp_msgs::msg::TempMsg msg_;
};

class Init_TempMsg_y_min
{
public:
  explicit Init_TempMsg_y_min(::temp_msgs::msg::TempMsg & msg)
  : msg_(msg)
  {}
  Init_TempMsg_x_max y_min(::temp_msgs::msg::TempMsg::_y_min_type arg)
  {
    msg_.y_min = std::move(arg);
    return Init_TempMsg_x_max(msg_);
  }

private:
  ::temp_msgs::msg::TempMsg msg_;
};

class Init_TempMsg_x_min
{
public:
  explicit Init_TempMsg_x_min(::temp_msgs::msg::TempMsg & msg)
  : msg_(msg)
  {}
  Init_TempMsg_y_min x_min(::temp_msgs::msg::TempMsg::_x_min_type arg)
  {
    msg_.x_min = std::move(arg);
    return Init_TempMsg_y_min(msg_);
  }

private:
  ::temp_msgs::msg::TempMsg msg_;
};

class Init_TempMsg_right_down_j
{
public:
  explicit Init_TempMsg_right_down_j(::temp_msgs::msg::TempMsg & msg)
  : msg_(msg)
  {}
  Init_TempMsg_x_min right_down_j(::temp_msgs::msg::TempMsg::_right_down_j_type arg)
  {
    msg_.right_down_j = std::move(arg);
    return Init_TempMsg_x_min(msg_);
  }

private:
  ::temp_msgs::msg::TempMsg msg_;
};

class Init_TempMsg_right_down_w
{
public:
  explicit Init_TempMsg_right_down_w(::temp_msgs::msg::TempMsg & msg)
  : msg_(msg)
  {}
  Init_TempMsg_right_down_j right_down_w(::temp_msgs::msg::TempMsg::_right_down_w_type arg)
  {
    msg_.right_down_w = std::move(arg);
    return Init_TempMsg_right_down_j(msg_);
  }

private:
  ::temp_msgs::msg::TempMsg msg_;
};

class Init_TempMsg_left_down_j
{
public:
  explicit Init_TempMsg_left_down_j(::temp_msgs::msg::TempMsg & msg)
  : msg_(msg)
  {}
  Init_TempMsg_right_down_w left_down_j(::temp_msgs::msg::TempMsg::_left_down_j_type arg)
  {
    msg_.left_down_j = std::move(arg);
    return Init_TempMsg_right_down_w(msg_);
  }

private:
  ::temp_msgs::msg::TempMsg msg_;
};

class Init_TempMsg_left_down_w
{
public:
  explicit Init_TempMsg_left_down_w(::temp_msgs::msg::TempMsg & msg)
  : msg_(msg)
  {}
  Init_TempMsg_left_down_j left_down_w(::temp_msgs::msg::TempMsg::_left_down_w_type arg)
  {
    msg_.left_down_w = std::move(arg);
    return Init_TempMsg_left_down_j(msg_);
  }

private:
  ::temp_msgs::msg::TempMsg msg_;
};

class Init_TempMsg_right_up_j
{
public:
  explicit Init_TempMsg_right_up_j(::temp_msgs::msg::TempMsg & msg)
  : msg_(msg)
  {}
  Init_TempMsg_left_down_w right_up_j(::temp_msgs::msg::TempMsg::_right_up_j_type arg)
  {
    msg_.right_up_j = std::move(arg);
    return Init_TempMsg_left_down_w(msg_);
  }

private:
  ::temp_msgs::msg::TempMsg msg_;
};

class Init_TempMsg_right_up_w
{
public:
  explicit Init_TempMsg_right_up_w(::temp_msgs::msg::TempMsg & msg)
  : msg_(msg)
  {}
  Init_TempMsg_right_up_j right_up_w(::temp_msgs::msg::TempMsg::_right_up_w_type arg)
  {
    msg_.right_up_w = std::move(arg);
    return Init_TempMsg_right_up_j(msg_);
  }

private:
  ::temp_msgs::msg::TempMsg msg_;
};

class Init_TempMsg_left_up_j
{
public:
  explicit Init_TempMsg_left_up_j(::temp_msgs::msg::TempMsg & msg)
  : msg_(msg)
  {}
  Init_TempMsg_right_up_w left_up_j(::temp_msgs::msg::TempMsg::_left_up_j_type arg)
  {
    msg_.left_up_j = std::move(arg);
    return Init_TempMsg_right_up_w(msg_);
  }

private:
  ::temp_msgs::msg::TempMsg msg_;
};

class Init_TempMsg_left_up_w
{
public:
  Init_TempMsg_left_up_w()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TempMsg_left_up_j left_up_w(::temp_msgs::msg::TempMsg::_left_up_w_type arg)
  {
    msg_.left_up_w = std::move(arg);
    return Init_TempMsg_left_up_j(msg_);
  }

private:
  ::temp_msgs::msg::TempMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::temp_msgs::msg::TempMsg>()
{
  return temp_msgs::msg::builder::Init_TempMsg_left_up_w();
}

}  // namespace temp_msgs

#endif  // TEMP_MSGS__MSG__DETAIL__TEMP_MSG__BUILDER_HPP_
