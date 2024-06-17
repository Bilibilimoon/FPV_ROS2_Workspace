// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from dgps_msgs:msg/Gnvtg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "dgps_msgs/msg/detail/gnvtg__rosidl_typesupport_introspection_c.h"
#include "dgps_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "dgps_msgs/msg/detail/gnvtg__functions.h"
#include "dgps_msgs/msg/detail/gnvtg__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `gnvtg`
// Member `status`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Gnvtg__rosidl_typesupport_introspection_c__Gnvtg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dgps_msgs__msg__Gnvtg__init(message_memory);
}

void Gnvtg__rosidl_typesupport_introspection_c__Gnvtg_fini_function(void * message_memory)
{
  dgps_msgs__msg__Gnvtg__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Gnvtg__rosidl_typesupport_introspection_c__Gnvtg_message_member_array[7] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dgps_msgs__msg__Gnvtg, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gnvtg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dgps_msgs__msg__Gnvtg, gnvtg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "heading1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dgps_msgs__msg__Gnvtg, heading1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "heading2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dgps_msgs__msg__Gnvtg, heading2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dgps_msgs__msg__Gnvtg, speed1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dgps_msgs__msg__Gnvtg, speed2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dgps_msgs__msg__Gnvtg, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Gnvtg__rosidl_typesupport_introspection_c__Gnvtg_message_members = {
  "dgps_msgs__msg",  // message namespace
  "Gnvtg",  // message name
  7,  // number of fields
  sizeof(dgps_msgs__msg__Gnvtg),
  Gnvtg__rosidl_typesupport_introspection_c__Gnvtg_message_member_array,  // message members
  Gnvtg__rosidl_typesupport_introspection_c__Gnvtg_init_function,  // function to initialize message memory (memory has to be allocated)
  Gnvtg__rosidl_typesupport_introspection_c__Gnvtg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Gnvtg__rosidl_typesupport_introspection_c__Gnvtg_message_type_support_handle = {
  0,
  &Gnvtg__rosidl_typesupport_introspection_c__Gnvtg_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dgps_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dgps_msgs, msg, Gnvtg)() {
  Gnvtg__rosidl_typesupport_introspection_c__Gnvtg_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!Gnvtg__rosidl_typesupport_introspection_c__Gnvtg_message_type_support_handle.typesupport_identifier) {
    Gnvtg__rosidl_typesupport_introspection_c__Gnvtg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Gnvtg__rosidl_typesupport_introspection_c__Gnvtg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
