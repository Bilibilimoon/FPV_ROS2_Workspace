// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from temp_msgs:msg/TempMsg.idl
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
#include "temp_msgs/msg/detail/temp_msg__struct.h"
#include "temp_msgs/msg/detail/temp_msg__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool temp_msgs__msg__temp_msg__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[32];
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
    assert(strncmp("temp_msgs.msg._temp_msg.TempMsg", full_classname_dest, 31) == 0);
  }
  temp_msgs__msg__TempMsg * ros_message = _ros_message;
  {  // left_up_w
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_up_w");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left_up_w = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // left_up_j
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_up_j");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left_up_j = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // right_up_w
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_up_w");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right_up_w = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // right_up_j
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_up_j");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right_up_j = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // left_down_w
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_down_w");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left_down_w = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // left_down_j
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_down_j");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left_down_j = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // right_down_w
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_down_w");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right_down_w = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // right_down_j
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_down_j");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right_down_j = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // x_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_min");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x_min = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_min");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y_min = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // x_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x_max = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y_max = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // output_w
    PyObject * field = PyObject_GetAttrString(_pymsg, "output_w");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->output_w = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // output_j
    PyObject * field = PyObject_GetAttrString(_pymsg, "output_j");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->output_j = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * temp_msgs__msg__temp_msg__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TempMsg */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("temp_msgs.msg._temp_msg");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TempMsg");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  temp_msgs__msg__TempMsg * ros_message = (temp_msgs__msg__TempMsg *)raw_ros_message;
  {  // left_up_w
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left_up_w);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_up_w", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_up_j
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left_up_j);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_up_j", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_up_w
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right_up_w);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_up_w", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_up_j
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right_up_j);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_up_j", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_down_w
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left_down_w);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_down_w", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_down_j
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left_down_j);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_down_j", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_down_w
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right_down_w);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_down_w", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_down_j
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right_down_j);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_down_j", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x_min
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_min
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // output_w
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->output_w);
    {
      int rc = PyObject_SetAttrString(_pymessage, "output_w", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // output_j
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->output_j);
    {
      int rc = PyObject_SetAttrString(_pymessage, "output_j", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
