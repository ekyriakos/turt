// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from turtle_interfaces:msg/ECUParams.idl
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
#include "turtle_interfaces/msg/detail/ecu_params__struct.h"
#include "turtle_interfaces/msg/detail/ecu_params__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool turtle_interfaces__msg__ecu_params__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[44];
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
    assert(strncmp("turtle_interfaces.msg._ecu_params.ECUParams", full_classname_dest, 43) == 0);
  }
  turtle_interfaces__msg__ECUParams * ros_message = _ros_message;
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
  {  // inverter_rpm_percentage
    PyObject * field = PyObject_GetAttrString(_pymsg, "inverter_rpm_percentage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->inverter_rpm_percentage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // inverter_i_rms_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "inverter_i_rms_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->inverter_i_rms_max = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // inverter_i_rms_max_brake
    PyObject * field = PyObject_GetAttrString(_pymsg, "inverter_i_rms_max_brake");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->inverter_i_rms_max_brake = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // power_target_kw
    PyObject * field = PyObject_GetAttrString(_pymsg, "power_target_kw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->power_target_kw = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // servo_start_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "servo_start_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->servo_start_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // regen_min_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "regen_min_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->regen_min_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ed_enable
    PyObject * field = PyObject_GetAttrString(_pymsg, "ed_enable");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ed_enable = (Py_True == field);
    Py_DECREF(field);
  }
  {  // tc_enable
    PyObject * field = PyObject_GetAttrString(_pymsg, "tc_enable");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->tc_enable = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * turtle_interfaces__msg__ecu_params__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ECUParams */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("turtle_interfaces.msg._ecu_params");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ECUParams");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  turtle_interfaces__msg__ECUParams * ros_message = (turtle_interfaces__msg__ECUParams *)raw_ros_message;
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
  {  // inverter_rpm_percentage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->inverter_rpm_percentage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "inverter_rpm_percentage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // inverter_i_rms_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->inverter_i_rms_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "inverter_i_rms_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // inverter_i_rms_max_brake
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->inverter_i_rms_max_brake);
    {
      int rc = PyObject_SetAttrString(_pymessage, "inverter_i_rms_max_brake", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // power_target_kw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->power_target_kw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "power_target_kw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // servo_start_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->servo_start_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "servo_start_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // regen_min_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->regen_min_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "regen_min_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ed_enable
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ed_enable ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ed_enable", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tc_enable
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->tc_enable ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tc_enable", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
