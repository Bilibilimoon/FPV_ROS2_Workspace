// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from fpv_msgs:msg/MoonlyFpv.idl
// generated code does not contain a copyright notice
#include "fpv_msgs/msg/detail/moonly_fpv__rosidl_typesupport_fastrtps_cpp.hpp"
#include "fpv_msgs/msg/detail/moonly_fpv__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace fpv_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fpv_msgs
cdr_serialize(
  const fpv_msgs::msg::MoonlyFpv & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: boat_linear_speed
  cdr << ros_message.boat_linear_speed;
  // Member: boat_angular_speed
  cdr << ros_message.boat_angular_speed;
  // Member: pwm_left
  cdr << ros_message.pwm_left;
  // Member: pwm_right
  cdr << ros_message.pwm_right;
  // Member: aim_gps_lng
  cdr << ros_message.aim_gps_lng;
  // Member: aim_gps_lat
  cdr << ros_message.aim_gps_lat;
  // Member: fpv_gps_lng
  cdr << ros_message.fpv_gps_lng;
  // Member: fpv_gps_lat
  cdr << ros_message.fpv_gps_lat;
  // Member: fpv_gps_hight
  cdr << ros_message.fpv_gps_hight;
  // Member: fpv_gps_face
  cdr << ros_message.fpv_gps_face;
  // Member: manual_fpv_rol
  cdr << ros_message.manual_fpv_rol;
  // Member: manual_fpv_pit
  cdr << ros_message.manual_fpv_pit;
  // Member: manual_fpv_yaw
  cdr << ros_message.manual_fpv_yaw;
  // Member: manual_fpv_thr
  cdr << ros_message.manual_fpv_thr;
  // Member: auto_fpv_rol
  cdr << ros_message.auto_fpv_rol;
  // Member: auto_fpv_pit
  cdr << ros_message.auto_fpv_pit;
  // Member: auto_fpv_yaw
  cdr << ros_message.auto_fpv_yaw;
  // Member: auto_fpv_thr
  cdr << ros_message.auto_fpv_thr;
  // Member: control_model
  cdr << ros_message.control_model;
  // Member: fpv_model
  cdr << ros_message.fpv_model;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fpv_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  fpv_msgs::msg::MoonlyFpv & ros_message)
{
  // Member: boat_linear_speed
  cdr >> ros_message.boat_linear_speed;

  // Member: boat_angular_speed
  cdr >> ros_message.boat_angular_speed;

  // Member: pwm_left
  cdr >> ros_message.pwm_left;

  // Member: pwm_right
  cdr >> ros_message.pwm_right;

  // Member: aim_gps_lng
  cdr >> ros_message.aim_gps_lng;

  // Member: aim_gps_lat
  cdr >> ros_message.aim_gps_lat;

  // Member: fpv_gps_lng
  cdr >> ros_message.fpv_gps_lng;

  // Member: fpv_gps_lat
  cdr >> ros_message.fpv_gps_lat;

  // Member: fpv_gps_hight
  cdr >> ros_message.fpv_gps_hight;

  // Member: fpv_gps_face
  cdr >> ros_message.fpv_gps_face;

  // Member: manual_fpv_rol
  cdr >> ros_message.manual_fpv_rol;

  // Member: manual_fpv_pit
  cdr >> ros_message.manual_fpv_pit;

  // Member: manual_fpv_yaw
  cdr >> ros_message.manual_fpv_yaw;

  // Member: manual_fpv_thr
  cdr >> ros_message.manual_fpv_thr;

  // Member: auto_fpv_rol
  cdr >> ros_message.auto_fpv_rol;

  // Member: auto_fpv_pit
  cdr >> ros_message.auto_fpv_pit;

  // Member: auto_fpv_yaw
  cdr >> ros_message.auto_fpv_yaw;

  // Member: auto_fpv_thr
  cdr >> ros_message.auto_fpv_thr;

  // Member: control_model
  cdr >> ros_message.control_model;

  // Member: fpv_model
  cdr >> ros_message.fpv_model;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fpv_msgs
get_serialized_size(
  const fpv_msgs::msg::MoonlyFpv & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: boat_linear_speed
  {
    size_t item_size = sizeof(ros_message.boat_linear_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: boat_angular_speed
  {
    size_t item_size = sizeof(ros_message.boat_angular_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pwm_left
  {
    size_t item_size = sizeof(ros_message.pwm_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pwm_right
  {
    size_t item_size = sizeof(ros_message.pwm_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aim_gps_lng
  {
    size_t item_size = sizeof(ros_message.aim_gps_lng);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aim_gps_lat
  {
    size_t item_size = sizeof(ros_message.aim_gps_lat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fpv_gps_lng
  {
    size_t item_size = sizeof(ros_message.fpv_gps_lng);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fpv_gps_lat
  {
    size_t item_size = sizeof(ros_message.fpv_gps_lat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fpv_gps_hight
  {
    size_t item_size = sizeof(ros_message.fpv_gps_hight);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fpv_gps_face
  {
    size_t item_size = sizeof(ros_message.fpv_gps_face);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: manual_fpv_rol
  {
    size_t item_size = sizeof(ros_message.manual_fpv_rol);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: manual_fpv_pit
  {
    size_t item_size = sizeof(ros_message.manual_fpv_pit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: manual_fpv_yaw
  {
    size_t item_size = sizeof(ros_message.manual_fpv_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: manual_fpv_thr
  {
    size_t item_size = sizeof(ros_message.manual_fpv_thr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: auto_fpv_rol
  {
    size_t item_size = sizeof(ros_message.auto_fpv_rol);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: auto_fpv_pit
  {
    size_t item_size = sizeof(ros_message.auto_fpv_pit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: auto_fpv_yaw
  {
    size_t item_size = sizeof(ros_message.auto_fpv_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: auto_fpv_thr
  {
    size_t item_size = sizeof(ros_message.auto_fpv_thr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: control_model
  {
    size_t item_size = sizeof(ros_message.control_model);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fpv_model
  {
    size_t item_size = sizeof(ros_message.fpv_model);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fpv_msgs
max_serialized_size_MoonlyFpv(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: boat_linear_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: boat_angular_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: pwm_left
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pwm_right
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: aim_gps_lng
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: aim_gps_lat
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: fpv_gps_lng
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: fpv_gps_lat
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: fpv_gps_hight
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: fpv_gps_face
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: manual_fpv_rol
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: manual_fpv_pit
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: manual_fpv_yaw
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: manual_fpv_thr
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: auto_fpv_rol
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: auto_fpv_pit
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: auto_fpv_yaw
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: auto_fpv_thr
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: control_model
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fpv_model
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _MoonlyFpv__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const fpv_msgs::msg::MoonlyFpv *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MoonlyFpv__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<fpv_msgs::msg::MoonlyFpv *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MoonlyFpv__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const fpv_msgs::msg::MoonlyFpv *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MoonlyFpv__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_MoonlyFpv(full_bounded, 0);
}

static message_type_support_callbacks_t _MoonlyFpv__callbacks = {
  "fpv_msgs::msg",
  "MoonlyFpv",
  _MoonlyFpv__cdr_serialize,
  _MoonlyFpv__cdr_deserialize,
  _MoonlyFpv__get_serialized_size,
  _MoonlyFpv__max_serialized_size
};

static rosidl_message_type_support_t _MoonlyFpv__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MoonlyFpv__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace fpv_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_fpv_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<fpv_msgs::msg::MoonlyFpv>()
{
  return &fpv_msgs::msg::typesupport_fastrtps_cpp::_MoonlyFpv__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, fpv_msgs, msg, MoonlyFpv)() {
  return &fpv_msgs::msg::typesupport_fastrtps_cpp::_MoonlyFpv__handle;
}

#ifdef __cplusplus
}
#endif
