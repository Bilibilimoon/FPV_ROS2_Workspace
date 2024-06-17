// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from fpv_msgs:msg/MoonlyFpv.idl
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
#include "fpv_msgs/msg/detail/moonly_fpv__struct.h"
#include "fpv_msgs/msg/detail/moonly_fpv__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool fpv_msgs__msg__moonly_fpv__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[35];
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
    assert(strncmp("fpv_msgs.msg._moonly_fpv.MoonlyFpv", full_classname_dest, 34) == 0);
  }
  fpv_msgs__msg__MoonlyFpv * ros_message = _ros_message;
  {  // boat_linear_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "boat_linear_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->boat_linear_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // boat_angular_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "boat_angular_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->boat_angular_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pwm_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "pwm_left");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pwm_left = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // pwm_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "pwm_right");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pwm_right = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // aim_gps_lng
    PyObject * field = PyObject_GetAttrString(_pymsg, "aim_gps_lng");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->aim_gps_lng = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // aim_gps_lat
    PyObject * field = PyObject_GetAttrString(_pymsg, "aim_gps_lat");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->aim_gps_lat = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fpv_gps_lng
    PyObject * field = PyObject_GetAttrString(_pymsg, "fpv_gps_lng");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fpv_gps_lng = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fpv_gps_lat
    PyObject * field = PyObject_GetAttrString(_pymsg, "fpv_gps_lat");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fpv_gps_lat = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fpv_gps_hight
    PyObject * field = PyObject_GetAttrString(_pymsg, "fpv_gps_hight");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fpv_gps_hight = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fpv_gps_face
    PyObject * field = PyObject_GetAttrString(_pymsg, "fpv_gps_face");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fpv_gps_face = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // manual_fpv_rol
    PyObject * field = PyObject_GetAttrString(_pymsg, "manual_fpv_rol");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->manual_fpv_rol = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // manual_fpv_pit
    PyObject * field = PyObject_GetAttrString(_pymsg, "manual_fpv_pit");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->manual_fpv_pit = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // manual_fpv_yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "manual_fpv_yaw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->manual_fpv_yaw = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // manual_fpv_thr
    PyObject * field = PyObject_GetAttrString(_pymsg, "manual_fpv_thr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->manual_fpv_thr = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // auto_fpv_rol
    PyObject * field = PyObject_GetAttrString(_pymsg, "auto_fpv_rol");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->auto_fpv_rol = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // auto_fpv_pit
    PyObject * field = PyObject_GetAttrString(_pymsg, "auto_fpv_pit");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->auto_fpv_pit = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // auto_fpv_yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "auto_fpv_yaw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->auto_fpv_yaw = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // auto_fpv_thr
    PyObject * field = PyObject_GetAttrString(_pymsg, "auto_fpv_thr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->auto_fpv_thr = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // control_model
    PyObject * field = PyObject_GetAttrString(_pymsg, "control_model");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->control_model = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // fpv_model
    PyObject * field = PyObject_GetAttrString(_pymsg, "fpv_model");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fpv_model = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * fpv_msgs__msg__moonly_fpv__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MoonlyFpv */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("fpv_msgs.msg._moonly_fpv");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MoonlyFpv");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  fpv_msgs__msg__MoonlyFpv * ros_message = (fpv_msgs__msg__MoonlyFpv *)raw_ros_message;
  {  // boat_linear_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->boat_linear_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "boat_linear_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // boat_angular_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->boat_angular_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "boat_angular_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pwm_left
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->pwm_left);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pwm_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pwm_right
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->pwm_right);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pwm_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aim_gps_lng
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->aim_gps_lng);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aim_gps_lng", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aim_gps_lat
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->aim_gps_lat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aim_gps_lat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fpv_gps_lng
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fpv_gps_lng);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fpv_gps_lng", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fpv_gps_lat
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fpv_gps_lat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fpv_gps_lat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fpv_gps_hight
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fpv_gps_hight);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fpv_gps_hight", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fpv_gps_face
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fpv_gps_face);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fpv_gps_face", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // manual_fpv_rol
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->manual_fpv_rol);
    {
      int rc = PyObject_SetAttrString(_pymessage, "manual_fpv_rol", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // manual_fpv_pit
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->manual_fpv_pit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "manual_fpv_pit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // manual_fpv_yaw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->manual_fpv_yaw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "manual_fpv_yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // manual_fpv_thr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->manual_fpv_thr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "manual_fpv_thr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // auto_fpv_rol
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->auto_fpv_rol);
    {
      int rc = PyObject_SetAttrString(_pymessage, "auto_fpv_rol", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // auto_fpv_pit
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->auto_fpv_pit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "auto_fpv_pit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // auto_fpv_yaw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->auto_fpv_yaw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "auto_fpv_yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // auto_fpv_thr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->auto_fpv_thr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "auto_fpv_thr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // control_model
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->control_model);
    {
      int rc = PyObject_SetAttrString(_pymessage, "control_model", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fpv_model
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->fpv_model);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fpv_model", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
