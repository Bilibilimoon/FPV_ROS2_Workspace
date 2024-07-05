// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from temp_msgs:msg/TempMsg.idl
// generated code does not contain a copyright notice

#ifndef TEMP_MSGS__MSG__DETAIL__TEMP_MSG__STRUCT_H_
#define TEMP_MSGS__MSG__DETAIL__TEMP_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/TempMsg in the package temp_msgs.
typedef struct temp_msgs__msg__TempMsg
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
} temp_msgs__msg__TempMsg;

// Struct for a sequence of temp_msgs__msg__TempMsg.
typedef struct temp_msgs__msg__TempMsg__Sequence
{
  temp_msgs__msg__TempMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} temp_msgs__msg__TempMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TEMP_MSGS__MSG__DETAIL__TEMP_MSG__STRUCT_H_
