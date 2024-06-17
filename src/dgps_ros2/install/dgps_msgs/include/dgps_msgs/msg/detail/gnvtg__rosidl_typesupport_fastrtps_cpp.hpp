// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from dgps_msgs:msg/Gnvtg.idl
// generated code does not contain a copyright notice

#ifndef DGPS_MSGS__MSG__DETAIL__GNVTG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define DGPS_MSGS__MSG__DETAIL__GNVTG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "dgps_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "dgps_msgs/msg/detail/gnvtg__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace dgps_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dgps_msgs
cdr_serialize(
  const dgps_msgs::msg::Gnvtg & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dgps_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  dgps_msgs::msg::Gnvtg & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dgps_msgs
get_serialized_size(
  const dgps_msgs::msg::Gnvtg & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dgps_msgs
max_serialized_size_Gnvtg(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace dgps_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dgps_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dgps_msgs, msg, Gnvtg)();

#ifdef __cplusplus
}
#endif

#endif  // DGPS_MSGS__MSG__DETAIL__GNVTG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
