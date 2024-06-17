// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from dgps_msgs:msg/Gnvtg.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "dgps_msgs/msg/detail/gnvtg__struct.h"
#include "dgps_msgs/msg/detail/gnvtg__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool dgps_msgs__msg__gnvtg__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[27];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("dgps_msgs.msg._gnvtg.Gnvtg", full_classname_dest, 26) == 0);
  }
  dgps_msgs__msg__Gnvtg * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // gnvtg
    PyObject * field = PyObject_GetAttrString(_pymsg, "gnvtg");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->gnvtg, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // heading1
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // heading2
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed1
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed2
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->status, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * dgps_msgs__msg__gnvtg__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Gnvtg */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("dgps_msgs.msg._gnvtg");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Gnvtg");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  dgps_msgs__msg__Gnvtg * ros_message = (dgps_msgs__msg__Gnvtg *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gnvtg
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->gnvtg.data,
      strlen(ros_message->gnvtg.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "gnvtg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->status.data,
      strlen(ros_message->status.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
