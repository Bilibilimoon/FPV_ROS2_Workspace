// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from fpv_msgs:msg/TempMsg.idl
// generated code does not contain a copyright notice

#ifndef FPV_MSGS__MSG__DETAIL__TEMP_MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define FPV_MSGS__MSG__DETAIL__TEMP_MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "fpv_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "fpv_msgs/msg/detail/temp_msg__struct.hpp"

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

namespace fpv_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fpv_msgs
cdr_serialize(
  const fpv_msgs::msg::TempMsg & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fpv_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  fpv_msgs::msg::TempMsg & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fpv_msgs
get_serialized_size(
  const fpv_msgs::msg::TempMsg & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fpv_msgs
max_serialized_size_TempMsg(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace fpv_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fpv_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, fpv_msgs, msg, TempMsg)();

#ifdef __cplusplus
}
#endif

#endif  // FPV_MSGS__MSG__DETAIL__TEMP_MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
