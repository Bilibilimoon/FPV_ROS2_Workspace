// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from temp_msgs:msg/TempMsg.idl
// generated code does not contain a copyright notice
#include "temp_msgs/msg/detail/temp_msg__rosidl_typesupport_fastrtps_cpp.hpp"
#include "temp_msgs/msg/detail/temp_msg__struct.hpp"

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

namespace temp_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_temp_msgs
cdr_serialize(
  const temp_msgs::msg::TempMsg & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: left_up_w
  cdr << ros_message.left_up_w;
  // Member: left_up_j
  cdr << ros_message.left_up_j;
  // Member: right_up_w
  cdr << ros_message.right_up_w;
  // Member: right_up_j
  cdr << ros_message.right_up_j;
  // Member: left_down_w
  cdr << ros_message.left_down_w;
  // Member: left_down_j
  cdr << ros_message.left_down_j;
  // Member: right_down_w
  cdr << ros_message.right_down_w;
  // Member: right_down_j
  cdr << ros_message.right_down_j;
  // Member: x_min
  cdr << ros_message.x_min;
  // Member: y_min
  cdr << ros_message.y_min;
  // Member: x_max
  cdr << ros_message.x_max;
  // Member: y_max
  cdr << ros_message.y_max;
  // Member: output_w
  cdr << ros_message.output_w;
  // Member: output_j
  cdr << ros_message.output_j;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_temp_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  temp_msgs::msg::TempMsg & ros_message)
{
  // Member: left_up_w
  cdr >> ros_message.left_up_w;

  // Member: left_up_j
  cdr >> ros_message.left_up_j;

  // Member: right_up_w
  cdr >> ros_message.right_up_w;

  // Member: right_up_j
  cdr >> ros_message.right_up_j;

  // Member: left_down_w
  cdr >> ros_message.left_down_w;

  // Member: left_down_j
  cdr >> ros_message.left_down_j;

  // Member: right_down_w
  cdr >> ros_message.right_down_w;

  // Member: right_down_j
  cdr >> ros_message.right_down_j;

  // Member: x_min
  cdr >> ros_message.x_min;

  // Member: y_min
  cdr >> ros_message.y_min;

  // Member: x_max
  cdr >> ros_message.x_max;

  // Member: y_max
  cdr >> ros_message.y_max;

  // Member: output_w
  cdr >> ros_message.output_w;

  // Member: output_j
  cdr >> ros_message.output_j;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_temp_msgs
get_serialized_size(
  const temp_msgs::msg::TempMsg & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: left_up_w
  {
    size_t item_size = sizeof(ros_message.left_up_w);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_up_j
  {
    size_t item_size = sizeof(ros_message.left_up_j);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_up_w
  {
    size_t item_size = sizeof(ros_message.right_up_w);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_up_j
  {
    size_t item_size = sizeof(ros_message.right_up_j);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_down_w
  {
    size_t item_size = sizeof(ros_message.left_down_w);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_down_j
  {
    size_t item_size = sizeof(ros_message.left_down_j);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_down_w
  {
    size_t item_size = sizeof(ros_message.right_down_w);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_down_j
  {
    size_t item_size = sizeof(ros_message.right_down_j);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: x_min
  {
    size_t item_size = sizeof(ros_message.x_min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y_min
  {
    size_t item_size = sizeof(ros_message.y_min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: x_max
  {
    size_t item_size = sizeof(ros_message.x_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y_max
  {
    size_t item_size = sizeof(ros_message.y_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: output_w
  {
    size_t item_size = sizeof(ros_message.output_w);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: output_j
  {
    size_t item_size = sizeof(ros_message.output_j);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_temp_msgs
max_serialized_size_TempMsg(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: left_up_w
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: left_up_j
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: right_up_w
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: right_up_j
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: left_down_w
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: left_down_j
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: right_down_w
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: right_down_j
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: x_min
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: y_min
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: x_max
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: y_max
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: output_w
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: output_j
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _TempMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const temp_msgs::msg::TempMsg *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TempMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<temp_msgs::msg::TempMsg *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TempMsg__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const temp_msgs::msg::TempMsg *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TempMsg__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_TempMsg(full_bounded, 0);
}

static message_type_support_callbacks_t _TempMsg__callbacks = {
  "temp_msgs::msg",
  "TempMsg",
  _TempMsg__cdr_serialize,
  _TempMsg__cdr_deserialize,
  _TempMsg__get_serialized_size,
  _TempMsg__max_serialized_size
};

static rosidl_message_type_support_t _TempMsg__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TempMsg__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace temp_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_temp_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<temp_msgs::msg::TempMsg>()
{
  return &temp_msgs::msg::typesupport_fastrtps_cpp::_TempMsg__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, temp_msgs, msg, TempMsg)() {
  return &temp_msgs::msg::typesupport_fastrtps_cpp::_TempMsg__handle;
}

#ifdef __cplusplus
}
#endif
