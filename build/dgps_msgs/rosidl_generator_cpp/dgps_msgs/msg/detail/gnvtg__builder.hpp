// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dgps_msgs:msg/Gnvtg.idl
// generated code does not contain a copyright notice

#ifndef DGPS_MSGS__MSG__DETAIL__GNVTG__BUILDER_HPP_
#define DGPS_MSGS__MSG__DETAIL__GNVTG__BUILDER_HPP_

#include "dgps_msgs/msg/detail/gnvtg__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace dgps_msgs
{

namespace msg
{

namespace builder
{

class Init_Gnvtg_status
{
public:
  explicit Init_Gnvtg_status(::dgps_msgs::msg::Gnvtg & msg)
  : msg_(msg)
  {}
  ::dgps_msgs::msg::Gnvtg status(::dgps_msgs::msg::Gnvtg::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dgps_msgs::msg::Gnvtg msg_;
};

class Init_Gnvtg_speed2
{
public:
  explicit Init_Gnvtg_speed2(::dgps_msgs::msg::Gnvtg & msg)
  : msg_(msg)
  {}
  Init_Gnvtg_status speed2(::dgps_msgs::msg::Gnvtg::_speed2_type arg)
  {
    msg_.speed2 = std::move(arg);
    return Init_Gnvtg_status(msg_);
  }

private:
  ::dgps_msgs::msg::Gnvtg msg_;
};

class Init_Gnvtg_speed1
{
public:
  explicit Init_Gnvtg_speed1(::dgps_msgs::msg::Gnvtg & msg)
  : msg_(msg)
  {}
  Init_Gnvtg_speed2 speed1(::dgps_msgs::msg::Gnvtg::_speed1_type arg)
  {
    msg_.speed1 = std::move(arg);
    return Init_Gnvtg_speed2(msg_);
  }

private:
  ::dgps_msgs::msg::Gnvtg msg_;
};

class Init_Gnvtg_heading2
{
public:
  explicit Init_Gnvtg_heading2(::dgps_msgs::msg::Gnvtg & msg)
  : msg_(msg)
  {}
  Init_Gnvtg_speed1 heading2(::dgps_msgs::msg::Gnvtg::_heading2_type arg)
  {
    msg_.heading2 = std::move(arg);
    return Init_Gnvtg_speed1(msg_);
  }

private:
  ::dgps_msgs::msg::Gnvtg msg_;
};

class Init_Gnvtg_heading1
{
public:
  explicit Init_Gnvtg_heading1(::dgps_msgs::msg::Gnvtg & msg)
  : msg_(msg)
  {}
  Init_Gnvtg_heading2 heading1(::dgps_msgs::msg::Gnvtg::_heading1_type arg)
  {
    msg_.heading1 = std::move(arg);
    return Init_Gnvtg_heading2(msg_);
  }

private:
  ::dgps_msgs::msg::Gnvtg msg_;
};

class Init_Gnvtg_gnvtg
{
public:
  explicit Init_Gnvtg_gnvtg(::dgps_msgs::msg::Gnvtg & msg)
  : msg_(msg)
  {}
  Init_Gnvtg_heading1 gnvtg(::dgps_msgs::msg::Gnvtg::_gnvtg_type arg)
  {
    msg_.gnvtg = std::move(arg);
    return Init_Gnvtg_heading1(msg_);
  }

private:
  ::dgps_msgs::msg::Gnvtg msg_;
};

class Init_Gnvtg_header
{
public:
  Init_Gnvtg_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Gnvtg_gnvtg header(::dgps_msgs::msg::Gnvtg::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Gnvtg_gnvtg(msg_);
  }

private:
  ::dgps_msgs::msg::Gnvtg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dgps_msgs::msg::Gnvtg>()
{
  return dgps_msgs::msg::builder::Init_Gnvtg_header();
}

}  // namespace dgps_msgs

#endif  // DGPS_MSGS__MSG__DETAIL__GNVTG__BUILDER_HPP_
