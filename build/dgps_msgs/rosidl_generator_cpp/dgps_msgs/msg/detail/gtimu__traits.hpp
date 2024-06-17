// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dgps_msgs:msg/Gtimu.idl
// generated code does not contain a copyright notice

#ifndef DGPS_MSGS__MSG__DETAIL__GTIMU__TRAITS_HPP_
#define DGPS_MSGS__MSG__DETAIL__GTIMU__TRAITS_HPP_

#include "dgps_msgs/msg/detail/gtimu__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dgps_msgs::msg::Gtimu>()
{
  return "dgps_msgs::msg::Gtimu";
}

template<>
inline const char * name<dgps_msgs::msg::Gtimu>()
{
  return "dgps_msgs/msg/Gtimu";
}

template<>
struct has_fixed_size<dgps_msgs::msg::Gtimu>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dgps_msgs::msg::Gtimu>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dgps_msgs::msg::Gtimu>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DGPS_MSGS__MSG__DETAIL__GTIMU__TRAITS_HPP_
