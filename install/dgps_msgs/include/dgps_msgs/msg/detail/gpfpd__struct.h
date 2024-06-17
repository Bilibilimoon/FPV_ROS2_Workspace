// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dgps_msgs:msg/Gpfpd.idl
// generated code does not contain a copyright notice

#ifndef DGPS_MSGS__MSG__DETAIL__GPFPD__STRUCT_H_
#define DGPS_MSGS__MSG__DETAIL__GPFPD__STRUCT_H_

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
// Member 'gpfpd'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Gpfpd in the package dgps_msgs.
typedef struct dgps_msgs__msg__Gpfpd
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String gpfpd;
  double heading;
  double pitch;
  double roll;
  double lattitude;
  double longitude;
  double altitude;
  double velocity_east;
  double velocity_north;
  double velocity_up;
  double baseline;
  uint8_t nsv1;
  uint8_t nsv2;
  uint8_t status;
} dgps_msgs__msg__Gpfpd;

// Struct for a sequence of dgps_msgs__msg__Gpfpd.
typedef struct dgps_msgs__msg__Gpfpd__Sequence
{
  dgps_msgs__msg__Gpfpd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dgps_msgs__msg__Gpfpd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DGPS_MSGS__MSG__DETAIL__GPFPD__STRUCT_H_
