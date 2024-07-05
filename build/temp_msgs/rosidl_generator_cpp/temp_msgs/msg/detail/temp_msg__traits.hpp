// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from temp_msgs:msg/TempMsg.idl
// generated code does not contain a copyright notice

#ifndef TEMP_MSGS__MSG__DETAIL__TEMP_MSG__TRAITS_HPP_
#define TEMP_MSGS__MSG__DETAIL__TEMP_MSG__TRAITS_HPP_

#include "temp_msgs/msg/detail/temp_msg__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<temp_msgs::msg::TempMsg>()
{
  return "temp_msgs::msg::TempMsg";
}

template<>
inline const char * name<temp_msgs::msg::TempMsg>()
{
  return "temp_msgs/msg/TempMsg";
}

template<>
struct has_fixed_size<temp_msgs::msg::TempMsg>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<temp_msgs::msg::TempMsg>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<temp_msgs::msg::TempMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TEMP_MSGS__MSG__DETAIL__TEMP_MSG__TRAITS_HPP_
