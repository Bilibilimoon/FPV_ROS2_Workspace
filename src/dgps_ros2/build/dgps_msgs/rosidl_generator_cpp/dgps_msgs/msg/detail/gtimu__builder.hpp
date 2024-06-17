// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dgps_msgs:msg/Gtimu.idl
// generated code does not contain a copyright notice

#ifndef DGPS_MSGS__MSG__DETAIL__GTIMU__BUILDER_HPP_
#define DGPS_MSGS__MSG__DETAIL__GTIMU__BUILDER_HPP_

#include "dgps_msgs/msg/detail/gtimu__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace dgps_msgs
{

namespace msg
{

namespace builder
{

class Init_Gtimu_tpr
{
public:
  explicit Init_Gtimu_tpr(::dgps_msgs::msg::Gtimu & msg)
  : msg_(msg)
  {}
  ::dgps_msgs::msg::Gtimu tpr(::dgps_msgs::msg::Gtimu::_tpr_type arg)
  {
    msg_.tpr = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dgps_msgs::msg::Gtimu msg_;
};

class Init_Gtimu_acc_z
{
public:
  explicit Init_Gtimu_acc_z(::dgps_msgs::msg::Gtimu & msg)
  : msg_(msg)
  {}
  Init_Gtimu_tpr acc_z(::dgps_msgs::msg::Gtimu::_acc_z_type arg)
  {
    msg_.acc_z = std::move(arg);
    return Init_Gtimu_tpr(msg_);
  }

private:
  ::dgps_msgs::msg::Gtimu msg_;
};

class Init_Gtimu_acc_y
{
public:
  explicit Init_Gtimu_acc_y(::dgps_msgs::msg::Gtimu & msg)
  : msg_(msg)
  {}
  Init_Gtimu_acc_z acc_y(::dgps_msgs::msg::Gtimu::_acc_y_type arg)
  {
    msg_.acc_y = std::move(arg);
    return Init_Gtimu_acc_z(msg_);
  }

private:
  ::dgps_msgs::msg::Gtimu msg_;
};

class Init_Gtimu_acc_x
{
public:
  explicit Init_Gtimu_acc_x(::dgps_msgs::msg::Gtimu & msg)
  : msg_(msg)
  {}
  Init_Gtimu_acc_y acc_x(::dgps_msgs::msg::Gtimu::_acc_x_type arg)
  {
    msg_.acc_x = std::move(arg);
    return Init_Gtimu_acc_y(msg_);
  }

private:
  ::dgps_msgs::msg::Gtimu msg_;
};

class Init_Gtimu_gyro_z
{
public:
  explicit Init_Gtimu_gyro_z(::dgps_msgs::msg::Gtimu & msg)
  : msg_(msg)
  {}
  Init_Gtimu_acc_x gyro_z(::dgps_msgs::msg::Gtimu::_gyro_z_type arg)
  {
    msg_.gyro_z = std::move(arg);
    return Init_Gtimu_acc_x(msg_);
  }

private:
  ::dgps_msgs::msg::Gtimu msg_;
};

class Init_Gtimu_gyro_y
{
public:
  explicit Init_Gtimu_gyro_y(::dgps_msgs::msg::Gtimu & msg)
  : msg_(msg)
  {}
  Init_Gtimu_gyro_z gyro_y(::dgps_msgs::msg::Gtimu::_gyro_y_type arg)
  {
    msg_.gyro_y = std::move(arg);
    return Init_Gtimu_gyro_z(msg_);
  }

private:
  ::dgps_msgs::msg::Gtimu msg_;
};

class Init_Gtimu_gyro_x
{
public:
  explicit Init_Gtimu_gyro_x(::dgps_msgs::msg::Gtimu & msg)
  : msg_(msg)
  {}
  Init_Gtimu_gyro_y gyro_x(::dgps_msgs::msg::Gtimu::_gyro_x_type arg)
  {
    msg_.gyro_x = std::move(arg);
    return Init_Gtimu_gyro_y(msg_);
  }

private:
  ::dgps_msgs::msg::Gtimu msg_;
};

class Init_Gtimu_gtimu
{
public:
  explicit Init_Gtimu_gtimu(::dgps_msgs::msg::Gtimu & msg)
  : msg_(msg)
  {}
  Init_Gtimu_gyro_x gtimu(::dgps_msgs::msg::Gtimu::_gtimu_type arg)
  {
    msg_.gtimu = std::move(arg);
    return Init_Gtimu_gyro_x(msg_);
  }

private:
  ::dgps_msgs::msg::Gtimu msg_;
};

class Init_Gtimu_header
{
public:
  Init_Gtimu_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Gtimu_gtimu header(::dgps_msgs::msg::Gtimu::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Gtimu_gtimu(msg_);
  }

private:
  ::dgps_msgs::msg::Gtimu msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dgps_msgs::msg::Gtimu>()
{
  return dgps_msgs::msg::builder::Init_Gtimu_header();
}

}  // namespace dgps_msgs

#endif  // DGPS_MSGS__MSG__DETAIL__GTIMU__BUILDER_HPP_
