// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dgps_msgs:msg/Gpfpd.idl
// generated code does not contain a copyright notice

#ifndef DGPS_MSGS__MSG__DETAIL__GPFPD__BUILDER_HPP_
#define DGPS_MSGS__MSG__DETAIL__GPFPD__BUILDER_HPP_

#include "dgps_msgs/msg/detail/gpfpd__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace dgps_msgs
{

namespace msg
{

namespace builder
{

class Init_Gpfpd_status
{
public:
  explicit Init_Gpfpd_status(::dgps_msgs::msg::Gpfpd & msg)
  : msg_(msg)
  {}
  ::dgps_msgs::msg::Gpfpd status(::dgps_msgs::msg::Gpfpd::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dgps_msgs::msg::Gpfpd msg_;
};

class Init_Gpfpd_nsv2
{
public:
  explicit Init_Gpfpd_nsv2(::dgps_msgs::msg::Gpfpd & msg)
  : msg_(msg)
  {}
  Init_Gpfpd_status nsv2(::dgps_msgs::msg::Gpfpd::_nsv2_type arg)
  {
    msg_.nsv2 = std::move(arg);
    return Init_Gpfpd_status(msg_);
  }

private:
  ::dgps_msgs::msg::Gpfpd msg_;
};

class Init_Gpfpd_nsv1
{
public:
  explicit Init_Gpfpd_nsv1(::dgps_msgs::msg::Gpfpd & msg)
  : msg_(msg)
  {}
  Init_Gpfpd_nsv2 nsv1(::dgps_msgs::msg::Gpfpd::_nsv1_type arg)
  {
    msg_.nsv1 = std::move(arg);
    return Init_Gpfpd_nsv2(msg_);
  }

private:
  ::dgps_msgs::msg::Gpfpd msg_;
};

class Init_Gpfpd_baseline
{
public:
  explicit Init_Gpfpd_baseline(::dgps_msgs::msg::Gpfpd & msg)
  : msg_(msg)
  {}
  Init_Gpfpd_nsv1 baseline(::dgps_msgs::msg::Gpfpd::_baseline_type arg)
  {
    msg_.baseline = std::move(arg);
    return Init_Gpfpd_nsv1(msg_);
  }

private:
  ::dgps_msgs::msg::Gpfpd msg_;
};

class Init_Gpfpd_velocity_up
{
public:
  explicit Init_Gpfpd_velocity_up(::dgps_msgs::msg::Gpfpd & msg)
  : msg_(msg)
  {}
  Init_Gpfpd_baseline velocity_up(::dgps_msgs::msg::Gpfpd::_velocity_up_type arg)
  {
    msg_.velocity_up = std::move(arg);
    return Init_Gpfpd_baseline(msg_);
  }

private:
  ::dgps_msgs::msg::Gpfpd msg_;
};

class Init_Gpfpd_velocity_north
{
public:
  explicit Init_Gpfpd_velocity_north(::dgps_msgs::msg::Gpfpd & msg)
  : msg_(msg)
  {}
  Init_Gpfpd_velocity_up velocity_north(::dgps_msgs::msg::Gpfpd::_velocity_north_type arg)
  {
    msg_.velocity_north = std::move(arg);
    return Init_Gpfpd_velocity_up(msg_);
  }

private:
  ::dgps_msgs::msg::Gpfpd msg_;
};

class Init_Gpfpd_velocity_east
{
public:
  explicit Init_Gpfpd_velocity_east(::dgps_msgs::msg::Gpfpd & msg)
  : msg_(msg)
  {}
  Init_Gpfpd_velocity_north velocity_east(::dgps_msgs::msg::Gpfpd::_velocity_east_type arg)
  {
    msg_.velocity_east = std::move(arg);
    return Init_Gpfpd_velocity_north(msg_);
  }

private:
  ::dgps_msgs::msg::Gpfpd msg_;
};

class Init_Gpfpd_altitude
{
public:
  explicit Init_Gpfpd_altitude(::dgps_msgs::msg::Gpfpd & msg)
  : msg_(msg)
  {}
  Init_Gpfpd_velocity_east altitude(::dgps_msgs::msg::Gpfpd::_altitude_type arg)
  {
    msg_.altitude = std::move(arg);
    return Init_Gpfpd_velocity_east(msg_);
  }

private:
  ::dgps_msgs::msg::Gpfpd msg_;
};

class Init_Gpfpd_longitude
{
public:
  explicit Init_Gpfpd_longitude(::dgps_msgs::msg::Gpfpd & msg)
  : msg_(msg)
  {}
  Init_Gpfpd_altitude longitude(::dgps_msgs::msg::Gpfpd::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_Gpfpd_altitude(msg_);
  }

private:
  ::dgps_msgs::msg::Gpfpd msg_;
};

class Init_Gpfpd_lattitude
{
public:
  explicit Init_Gpfpd_lattitude(::dgps_msgs::msg::Gpfpd & msg)
  : msg_(msg)
  {}
  Init_Gpfpd_longitude lattitude(::dgps_msgs::msg::Gpfpd::_lattitude_type arg)
  {
    msg_.lattitude = std::move(arg);
    return Init_Gpfpd_longitude(msg_);
  }

private:
  ::dgps_msgs::msg::Gpfpd msg_;
};

class Init_Gpfpd_roll
{
public:
  explicit Init_Gpfpd_roll(::dgps_msgs::msg::Gpfpd & msg)
  : msg_(msg)
  {}
  Init_Gpfpd_lattitude roll(::dgps_msgs::msg::Gpfpd::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_Gpfpd_lattitude(msg_);
  }

private:
  ::dgps_msgs::msg::Gpfpd msg_;
};

class Init_Gpfpd_pitch
{
public:
  explicit Init_Gpfpd_pitch(::dgps_msgs::msg::Gpfpd & msg)
  : msg_(msg)
  {}
  Init_Gpfpd_roll pitch(::dgps_msgs::msg::Gpfpd::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_Gpfpd_roll(msg_);
  }

private:
  ::dgps_msgs::msg::Gpfpd msg_;
};

class Init_Gpfpd_heading
{
public:
  explicit Init_Gpfpd_heading(::dgps_msgs::msg::Gpfpd & msg)
  : msg_(msg)
  {}
  Init_Gpfpd_pitch heading(::dgps_msgs::msg::Gpfpd::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_Gpfpd_pitch(msg_);
  }

private:
  ::dgps_msgs::msg::Gpfpd msg_;
};

class Init_Gpfpd_gpfpd
{
public:
  explicit Init_Gpfpd_gpfpd(::dgps_msgs::msg::Gpfpd & msg)
  : msg_(msg)
  {}
  Init_Gpfpd_heading gpfpd(::dgps_msgs::msg::Gpfpd::_gpfpd_type arg)
  {
    msg_.gpfpd = std::move(arg);
    return Init_Gpfpd_heading(msg_);
  }

private:
  ::dgps_msgs::msg::Gpfpd msg_;
};

class Init_Gpfpd_header
{
public:
  Init_Gpfpd_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Gpfpd_gpfpd header(::dgps_msgs::msg::Gpfpd::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Gpfpd_gpfpd(msg_);
  }

private:
  ::dgps_msgs::msg::Gpfpd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dgps_msgs::msg::Gpfpd>()
{
  return dgps_msgs::msg::builder::Init_Gpfpd_header();
}

}  // namespace dgps_msgs

#endif  // DGPS_MSGS__MSG__DETAIL__GPFPD__BUILDER_HPP_
