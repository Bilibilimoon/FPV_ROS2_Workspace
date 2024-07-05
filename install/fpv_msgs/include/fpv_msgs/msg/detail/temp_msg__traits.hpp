// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fpv_msgs:msg/TempMsg.idl
// generated code does not contain a copyright notice

#ifndef FPV_MSGS__MSG__DETAIL__TEMP_MSG__TRAITS_HPP_
#define FPV_MSGS__MSG__DETAIL__TEMP_MSG__TRAITS_HPP_

#include "fpv_msgs/msg/detail/temp_msg__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<fpv_msgs::msg::TempMsg>()
{
  return "fpv_msgs::msg::TempMsg";
}

template<>
inline const char * name<fpv_msgs::msg::TempMsg>()
{
  return "fpv_msgs/msg/TempMsg";
}

template<>
struct has_fixed_size<fpv_msgs::msg::TempMsg>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<fpv_msgs::msg::TempMsg>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<fpv_msgs::msg::TempMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FPV_MSGS__MSG__DETAIL__TEMP_MSG__TRAITS_HPP_
