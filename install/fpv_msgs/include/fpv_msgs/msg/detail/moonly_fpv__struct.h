// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fpv_msgs:msg/MoonlyFpv.idl
// generated code does not contain a copyright notice

#ifndef FPV_MSGS__MSG__DETAIL__MOONLY_FPV__STRUCT_H_
#define FPV_MSGS__MSG__DETAIL__MOONLY_FPV__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/MoonlyFpv in the package fpv_msgs.
typedef struct fpv_msgs__msg__MoonlyFpv
{
  double boat_linear_speed;
  double boat_angular_speed;
  int32_t pwm_left;
  int32_t pwm_right;
  double aim_gps_lng;
  double aim_gps_lat;
  double fpv_gps_lng;
  double fpv_gps_lat;
  double fpv_gps_hight;
  double fpv_gps_face;
  double manual_fpv_rol;
  double manual_fpv_pit;
  double manual_fpv_yaw;
  double manual_fpv_thr;
  double auto_fpv_rol;
  double auto_fpv_pit;
  double auto_fpv_yaw;
  double auto_fpv_thr;
  int32_t control_model;
  int32_t fpv_model;
} fpv_msgs__msg__MoonlyFpv;

// Struct for a sequence of fpv_msgs__msg__MoonlyFpv.
typedef struct fpv_msgs__msg__MoonlyFpv__Sequence
{
  fpv_msgs__msg__MoonlyFpv * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fpv_msgs__msg__MoonlyFpv__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FPV_MSGS__MSG__DETAIL__MOONLY_FPV__STRUCT_H_
