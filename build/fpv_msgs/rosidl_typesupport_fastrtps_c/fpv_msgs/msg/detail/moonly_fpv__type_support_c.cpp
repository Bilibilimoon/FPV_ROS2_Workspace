// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from fpv_msgs:msg/MoonlyFpv.idl
// generated code does not contain a copyright notice
#include "fpv_msgs/msg/detail/moonly_fpv__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "fpv_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "fpv_msgs/msg/detail/moonly_fpv__struct.h"
#include "fpv_msgs/msg/detail/moonly_fpv__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _MoonlyFpv__ros_msg_type = fpv_msgs__msg__MoonlyFpv;

static bool _MoonlyFpv__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MoonlyFpv__ros_msg_type * ros_message = static_cast<const _MoonlyFpv__ros_msg_type *>(untyped_ros_message);
  // Field name: boat_linear_speed
  {
    cdr << ros_message->boat_linear_speed;
  }

  // Field name: boat_angular_speed
  {
    cdr << ros_message->boat_angular_speed;
  }

  // Field name: pwm_left
  {
    cdr << ros_message->pwm_left;
  }

  // Field name: pwm_right
  {
    cdr << ros_message->pwm_right;
  }

  // Field name: aim_gps_lng
  {
    cdr << ros_message->aim_gps_lng;
  }

  // Field name: aim_gps_lat
  {
    cdr << ros_message->aim_gps_lat;
  }

  // Field name: fpv_gps_lng
  {
    cdr << ros_message->fpv_gps_lng;
  }

  // Field name: fpv_gps_lat
  {
    cdr << ros_message->fpv_gps_lat;
  }

  // Field name: fpv_gps_hight
  {
    cdr << ros_message->fpv_gps_hight;
  }

  // Field name: fpv_gps_face
  {
    cdr << ros_message->fpv_gps_face;
  }

  // Field name: manual_fpv_rol
  {
    cdr << ros_message->manual_fpv_rol;
  }

  // Field name: manual_fpv_pit
  {
    cdr << ros_message->manual_fpv_pit;
  }

  // Field name: manual_fpv_yaw
  {
    cdr << ros_message->manual_fpv_yaw;
  }

  // Field name: manual_fpv_thr
  {
    cdr << ros_message->manual_fpv_thr;
  }

  // Field name: auto_fpv_rol
  {
    cdr << ros_message->auto_fpv_rol;
  }

  // Field name: auto_fpv_pit
  {
    cdr << ros_message->auto_fpv_pit;
  }

  // Field name: auto_fpv_yaw
  {
    cdr << ros_message->auto_fpv_yaw;
  }

  // Field name: auto_fpv_thr
  {
    cdr << ros_message->auto_fpv_thr;
  }

  // Field name: control_model
  {
    cdr << ros_message->control_model;
  }

  // Field name: fpv_model
  {
    cdr << ros_message->fpv_model;
  }

  return true;
}

static bool _MoonlyFpv__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MoonlyFpv__ros_msg_type * ros_message = static_cast<_MoonlyFpv__ros_msg_type *>(untyped_ros_message);
  // Field name: boat_linear_speed
  {
    cdr >> ros_message->boat_linear_speed;
  }

  // Field name: boat_angular_speed
  {
    cdr >> ros_message->boat_angular_speed;
  }

  // Field name: pwm_left
  {
    cdr >> ros_message->pwm_left;
  }

  // Field name: pwm_right
  {
    cdr >> ros_message->pwm_right;
  }

  // Field name: aim_gps_lng
  {
    cdr >> ros_message->aim_gps_lng;
  }

  // Field name: aim_gps_lat
  {
    cdr >> ros_message->aim_gps_lat;
  }

  // Field name: fpv_gps_lng
  {
    cdr >> ros_message->fpv_gps_lng;
  }

  // Field name: fpv_gps_lat
  {
    cdr >> ros_message->fpv_gps_lat;
  }

  // Field name: fpv_gps_hight
  {
    cdr >> ros_message->fpv_gps_hight;
  }

  // Field name: fpv_gps_face
  {
    cdr >> ros_message->fpv_gps_face;
  }

  // Field name: manual_fpv_rol
  {
    cdr >> ros_message->manual_fpv_rol;
  }

  // Field name: manual_fpv_pit
  {
    cdr >> ros_message->manual_fpv_pit;
  }

  // Field name: manual_fpv_yaw
  {
    cdr >> ros_message->manual_fpv_yaw;
  }

  // Field name: manual_fpv_thr
  {
    cdr >> ros_message->manual_fpv_thr;
  }

  // Field name: auto_fpv_rol
  {
    cdr >> ros_message->auto_fpv_rol;
  }

  // Field name: auto_fpv_pit
  {
    cdr >> ros_message->auto_fpv_pit;
  }

  // Field name: auto_fpv_yaw
  {
    cdr >> ros_message->auto_fpv_yaw;
  }

  // Field name: auto_fpv_thr
  {
    cdr >> ros_message->auto_fpv_thr;
  }

  // Field name: control_model
  {
    cdr >> ros_message->control_model;
  }

  // Field name: fpv_model
  {
    cdr >> ros_message->fpv_model;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fpv_msgs
size_t get_serialized_size_fpv_msgs__msg__MoonlyFpv(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MoonlyFpv__ros_msg_type * ros_message = static_cast<const _MoonlyFpv__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name boat_linear_speed
  {
    size_t item_size = sizeof(ros_message->boat_linear_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name boat_angular_speed
  {
    size_t item_size = sizeof(ros_message->boat_angular_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pwm_left
  {
    size_t item_size = sizeof(ros_message->pwm_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pwm_right
  {
    size_t item_size = sizeof(ros_message->pwm_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aim_gps_lng
  {
    size_t item_size = sizeof(ros_message->aim_gps_lng);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aim_gps_lat
  {
    size_t item_size = sizeof(ros_message->aim_gps_lat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fpv_gps_lng
  {
    size_t item_size = sizeof(ros_message->fpv_gps_lng);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fpv_gps_lat
  {
    size_t item_size = sizeof(ros_message->fpv_gps_lat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fpv_gps_hight
  {
    size_t item_size = sizeof(ros_message->fpv_gps_hight);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fpv_gps_face
  {
    size_t item_size = sizeof(ros_message->fpv_gps_face);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name manual_fpv_rol
  {
    size_t item_size = sizeof(ros_message->manual_fpv_rol);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name manual_fpv_pit
  {
    size_t item_size = sizeof(ros_message->manual_fpv_pit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name manual_fpv_yaw
  {
    size_t item_size = sizeof(ros_message->manual_fpv_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name manual_fpv_thr
  {
    size_t item_size = sizeof(ros_message->manual_fpv_thr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name auto_fpv_rol
  {
    size_t item_size = sizeof(ros_message->auto_fpv_rol);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name auto_fpv_pit
  {
    size_t item_size = sizeof(ros_message->auto_fpv_pit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name auto_fpv_yaw
  {
    size_t item_size = sizeof(ros_message->auto_fpv_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name auto_fpv_thr
  {
    size_t item_size = sizeof(ros_message->auto_fpv_thr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name control_model
  {
    size_t item_size = sizeof(ros_message->control_model);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fpv_model
  {
    size_t item_size = sizeof(ros_message->fpv_model);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MoonlyFpv__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_fpv_msgs__msg__MoonlyFpv(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fpv_msgs
size_t max_serialized_size_fpv_msgs__msg__MoonlyFpv(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: boat_linear_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: boat_angular_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pwm_left
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pwm_right
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: aim_gps_lng
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: aim_gps_lat
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: fpv_gps_lng
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: fpv_gps_lat
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: fpv_gps_hight
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: fpv_gps_face
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: manual_fpv_rol
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: manual_fpv_pit
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: manual_fpv_yaw
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: manual_fpv_thr
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: auto_fpv_rol
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: auto_fpv_pit
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: auto_fpv_yaw
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: auto_fpv_thr
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: control_model
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fpv_model
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _MoonlyFpv__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_fpv_msgs__msg__MoonlyFpv(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MoonlyFpv = {
  "fpv_msgs::msg",
  "MoonlyFpv",
  _MoonlyFpv__cdr_serialize,
  _MoonlyFpv__cdr_deserialize,
  _MoonlyFpv__get_serialized_size,
  _MoonlyFpv__max_serialized_size
};

static rosidl_message_type_support_t _MoonlyFpv__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MoonlyFpv,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, fpv_msgs, msg, MoonlyFpv)() {
  return &_MoonlyFpv__type_support;
}

#if defined(__cplusplus)
}
#endif
