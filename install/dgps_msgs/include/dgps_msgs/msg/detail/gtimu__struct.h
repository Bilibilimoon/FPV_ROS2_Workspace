// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dgps_msgs:msg/Gtimu.idl
// generated code does not contain a copyright notice

#ifndef DGPS_MSGS__MSG__DETAIL__GTIMU__STRUCT_H_
#define DGPS_MSGS__MSG__DETAIL__GTIMU__STRUCT_H_

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
// Member 'gtimu'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Gtimu in the package dgps_msgs.
typedef struct dgps_msgs__msg__Gtimu
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String gtimu;
  double gyro_x;
  double gyro_y;
  double gyro_z;
  double acc_x;
  double acc_y;
  double acc_z;
  double tpr;
} dgps_msgs__msg__Gtimu;

// Struct for a sequence of dgps_msgs__msg__Gtimu.
typedef struct dgps_msgs__msg__Gtimu__Sequence
{
  dgps_msgs__msg__Gtimu * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dgps_msgs__msg__Gtimu__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DGPS_MSGS__MSG__DETAIL__GTIMU__STRUCT_H_
