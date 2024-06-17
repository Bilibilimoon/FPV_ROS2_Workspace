// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dgps_msgs:msg/Gnvtg.idl
// generated code does not contain a copyright notice

#ifndef DGPS_MSGS__MSG__DETAIL__GNVTG__STRUCT_H_
#define DGPS_MSGS__MSG__DETAIL__GNVTG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'gnvtg'
// Member 'status'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Gnvtg in the package dgps_msgs.
typedef struct dgps_msgs__msg__Gnvtg
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String gnvtg;
  double heading1;
  double heading2;
  double speed1;
  double speed2;
  rosidl_runtime_c__String status;
} dgps_msgs__msg__Gnvtg;

// Struct for a sequence of dgps_msgs__msg__Gnvtg.
typedef struct dgps_msgs__msg__Gnvtg__Sequence
{
  dgps_msgs__msg__Gnvtg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dgps_msgs__msg__Gnvtg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DGPS_MSGS__MSG__DETAIL__GNVTG__STRUCT_H_
