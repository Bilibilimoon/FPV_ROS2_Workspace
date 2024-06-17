// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from dgps_msgs:msg/Gpfpd.idl
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
#include "dgps_msgs/msg/detail/gpfpd__struct.h"
#include "dgps_msgs/msg/detail/gpfpd__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool dgps_msgs__msg__gpfpd__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("dgps_msgs.msg._gpfpd.Gpfpd", full_classname_dest, 26) == 0);
  }
  dgps_msgs__msg__Gpfpd * ros_message = _ros_message;
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
  {  // gpfpd
    PyObject * field = PyObject_GetAttrString(_pymsg, "gpfpd");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->gpfpd, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // roll
    PyObject * field = PyObject_GetAttrString(_pymsg, "roll");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->roll = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lattitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "lattitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lattitude = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // longitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "longitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->longitude = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // altitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "altitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->altitude = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // velocity_east
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity_east");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->velocity_east = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // velocity_north
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity_north");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->velocity_north = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // velocity_up
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity_up");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->velocity_up = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // baseline
    PyObject * field = PyObject_GetAttrString(_pymsg, "baseline");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->baseline = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // nsv1
    PyObject * field = PyObject_GetAttrString(_pymsg, "nsv1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->nsv1 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // nsv2
    PyObject * field = PyObject_GetAttrString(_pymsg, "nsv2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->nsv2 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * dgps_msgs__msg__gpfpd__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Gpfpd */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("dgps_msgs.msg._gpfpd");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Gpfpd");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  dgps_msgs__msg__Gpfpd * ros_message = (dgps_msgs__msg__Gpfpd *)raw_ros_message;
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
  {  // gpfpd
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->gpfpd.data,
      strlen(ros_message->gpfpd.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "gpfpd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // roll
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->roll);
    {
      int rc = PyObject_SetAttrString(_pymessage, "roll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lattitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lattitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lattitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // longitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->longitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "longitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // altitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->altitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "altitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity_east
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->velocity_east);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity_east", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity_north
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->velocity_north);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity_north", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity_up
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->velocity_up);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity_up", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // baseline
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->baseline);
    {
      int rc = PyObject_SetAttrString(_pymessage, "baseline", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nsv1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->nsv1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nsv1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nsv2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->nsv2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nsv2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status);
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
