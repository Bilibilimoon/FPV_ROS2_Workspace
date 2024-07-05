// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fpv_msgs:msg/TempMsg.idl
// generated code does not contain a copyright notice

#ifndef FPV_MSGS__MSG__DETAIL__TEMP_MSG__STRUCT_H_
#define FPV_MSGS__MSG__DETAIL__TEMP_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/TempMsg in the package fpv_msgs.
typedef struct fpv_msgs__msg__TempMsg
{
  double left_up_w;
  double left_up_j;
  double right_up_w;
  double right_up_j;
  double left_down_w;
  double left_down_j;
  double right_down_w;
  double right_down_j;
  double x_min;
  double y_min;
  double x_max;
  double y_max;
  double output_w;
  double output_j;
} fpv_msgs__msg__TempMsg;

// Struct for a sequence of fpv_msgs__msg__TempMsg.
typedef struct fpv_msgs__msg__TempMsg__Sequence
{
  fpv_msgs__msg__TempMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fpv_msgs__msg__TempMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FPV_MSGS__MSG__DETAIL__TEMP_MSG__STRUCT_H_
