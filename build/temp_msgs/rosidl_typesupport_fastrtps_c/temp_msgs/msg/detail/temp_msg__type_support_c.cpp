// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from temp_msgs:msg/TempMsg.idl
// generated code does not contain a copyright notice
#include "temp_msgs/msg/detail/temp_msg__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "temp_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "temp_msgs/msg/detail/temp_msg__struct.h"
#include "temp_msgs/msg/detail/temp_msg__functions.h"
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


using _TempMsg__ros_msg_type = temp_msgs__msg__TempMsg;

static bool _TempMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TempMsg__ros_msg_type * ros_message = static_cast<const _TempMsg__ros_msg_type *>(untyped_ros_message);
  // Field name: left_up_w
  {
    cdr << ros_message->left_up_w;
  }

  // Field name: left_up_j
  {
    cdr << ros_message->left_up_j;
  }

  // Field name: right_up_w
  {
    cdr << ros_message->right_up_w;
  }

  // Field name: right_up_j
  {
    cdr << ros_message->right_up_j;
  }

  // Field name: left_down_w
  {
    cdr << ros_message->left_down_w;
  }

  // Field name: left_down_j
  {
    cdr << ros_message->left_down_j;
  }

  // Field name: right_down_w
  {
    cdr << ros_message->right_down_w;
  }

  // Field name: right_down_j
  {
    cdr << ros_message->right_down_j;
  }

  // Field name: x_min
  {
    cdr << ros_message->x_min;
  }

  // Field name: y_min
  {
    cdr << ros_message->y_min;
  }

  // Field name: x_max
  {
    cdr << ros_message->x_max;
  }

  // Field name: y_max
  {
    cdr << ros_message->y_max;
  }

  // Field name: output_w
  {
    cdr << ros_message->output_w;
  }

  // Field name: output_j
  {
    cdr << ros_message->output_j;
  }

  return true;
}

static bool _TempMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TempMsg__ros_msg_type * ros_message = static_cast<_TempMsg__ros_msg_type *>(untyped_ros_message);
  // Field name: left_up_w
  {
    cdr >> ros_message->left_up_w;
  }

  // Field name: left_up_j
  {
    cdr >> ros_message->left_up_j;
  }

  // Field name: right_up_w
  {
    cdr >> ros_message->right_up_w;
  }

  // Field name: right_up_j
  {
    cdr >> ros_message->right_up_j;
  }

  // Field name: left_down_w
  {
    cdr >> ros_message->left_down_w;
  }

  // Field name: left_down_j
  {
    cdr >> ros_message->left_down_j;
  }

  // Field name: right_down_w
  {
    cdr >> ros_message->right_down_w;
  }

  // Field name: right_down_j
  {
    cdr >> ros_message->right_down_j;
  }

  // Field name: x_min
  {
    cdr >> ros_message->x_min;
  }

  // Field name: y_min
  {
    cdr >> ros_message->y_min;
  }

  // Field name: x_max
  {
    cdr >> ros_message->x_max;
  }

  // Field name: y_max
  {
    cdr >> ros_message->y_max;
  }

  // Field name: output_w
  {
    cdr >> ros_message->output_w;
  }

  // Field name: output_j
  {
    cdr >> ros_message->output_j;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_temp_msgs
size_t get_serialized_size_temp_msgs__msg__TempMsg(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TempMsg__ros_msg_type * ros_message = static_cast<const _TempMsg__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name left_up_w
  {
    size_t item_size = sizeof(ros_message->left_up_w);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_up_j
  {
    size_t item_size = sizeof(ros_message->left_up_j);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_up_w
  {
    size_t item_size = sizeof(ros_message->right_up_w);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_up_j
  {
    size_t item_size = sizeof(ros_message->right_up_j);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_down_w
  {
    size_t item_size = sizeof(ros_message->left_down_w);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_down_j
  {
    size_t item_size = sizeof(ros_message->left_down_j);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_down_w
  {
    size_t item_size = sizeof(ros_message->right_down_w);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_down_j
  {
    size_t item_size = sizeof(ros_message->right_down_j);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name x_min
  {
    size_t item_size = sizeof(ros_message->x_min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y_min
  {
    size_t item_size = sizeof(ros_message->y_min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name x_max
  {
    size_t item_size = sizeof(ros_message->x_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y_max
  {
    size_t item_size = sizeof(ros_message->y_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name output_w
  {
    size_t item_size = sizeof(ros_message->output_w);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name output_j
  {
    size_t item_size = sizeof(ros_message->output_j);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TempMsg__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_temp_msgs__msg__TempMsg(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_temp_msgs
size_t max_serialized_size_temp_msgs__msg__TempMsg(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: left_up_w
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: left_up_j
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: right_up_w
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: right_up_j
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: left_down_w
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: left_down_j
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: right_down_w
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: right_down_j
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: x_min
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: y_min
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: x_max
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: y_max
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: output_w
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: output_j
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _TempMsg__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_temp_msgs__msg__TempMsg(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TempMsg = {
  "temp_msgs::msg",
  "TempMsg",
  _TempMsg__cdr_serialize,
  _TempMsg__cdr_deserialize,
  _TempMsg__get_serialized_size,
  _TempMsg__max_serialized_size
};

static rosidl_message_type_support_t _TempMsg__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TempMsg,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, temp_msgs, msg, TempMsg)() {
  return &_TempMsg__type_support;
}

#if defined(__cplusplus)
}
#endif
