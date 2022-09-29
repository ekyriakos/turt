// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from turtle_interfaces:msg/InverterInfo.idl
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
#include "turtle_interfaces/msg/detail/inverter_info__struct.h"
#include "turtle_interfaces/msg/detail/inverter_info__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool turtle_interfaces__msg__inverter_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
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
    assert(strncmp("turtle_interfaces.msg._inverter_info.InverterInfo", full_classname_dest, 49) == 0);
  }
  turtle_interfaces__msg__InverterInfo * ros_message = _ros_message;
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
  {  // igbts_temp
    PyObject * field = PyObject_GetAttrString(_pymsg, "igbts_temp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->igbts_temp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // irms_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "irms_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->irms_max = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // i_lim_in_use
    PyObject * field = PyObject_GetAttrString(_pymsg, "i_lim_in_use");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->i_lim_in_use = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // motor_temp
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor_temp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->motor_temp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // irms
    PyObject * field = PyObject_GetAttrString(_pymsg, "irms");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->irms = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_rpm
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_rpm");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_rpm = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * turtle_interfaces__msg__inverter_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of InverterInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("turtle_interfaces.msg._inverter_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "InverterInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  turtle_interfaces__msg__InverterInfo * ros_message = (turtle_interfaces__msg__InverterInfo *)raw_ros_message;
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
  {  // igbts_temp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->igbts_temp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "igbts_temp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // irms_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->irms_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "irms_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // i_lim_in_use
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->i_lim_in_use);
    {
      int rc = PyObject_SetAttrString(_pymessage, "i_lim_in_use", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor_temp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->motor_temp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor_temp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // irms
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->irms);
    {
      int rc = PyObject_SetAttrString(_pymessage, "irms", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_rpm
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_rpm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_rpm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
