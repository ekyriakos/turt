// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from turtle_interfaces:msg/SlamInfo.idl
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
#include "turtle_interfaces/msg/detail/slam_info__struct.h"
#include "turtle_interfaces/msg/detail/slam_info__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool turtle_interfaces__msg__slam_statistics__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * turtle_interfaces__msg__slam_statistics__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool turtle_interfaces__msg__slam_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[42];
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
    assert(strncmp("turtle_interfaces.msg._slam_info.SlamInfo", full_classname_dest, 41) == 0);
  }
  turtle_interfaces__msg__SlamInfo * ros_message = _ros_message;
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
  {  // slam_statistics
    PyObject * field = PyObject_GetAttrString(_pymsg, "slam_statistics");
    if (!field) {
      return false;
    }
    if (!turtle_interfaces__msg__slam_statistics__convert_from_py(field, &ros_message->slam_statistics)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // localization_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "localization_mode");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->localization_mode = (Py_True == field);
    Py_DECREF(field);
  }
  {  // sensor_cone_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "sensor_cone_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sensor_cone_count = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // total_cone_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "total_cone_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->total_cone_count = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * turtle_interfaces__msg__slam_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SlamInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("turtle_interfaces.msg._slam_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SlamInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  turtle_interfaces__msg__SlamInfo * ros_message = (turtle_interfaces__msg__SlamInfo *)raw_ros_message;
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
  {  // slam_statistics
    PyObject * field = NULL;
    field = turtle_interfaces__msg__slam_statistics__convert_to_py(&ros_message->slam_statistics);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "slam_statistics", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // localization_mode
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->localization_mode ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "localization_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sensor_cone_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sensor_cone_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sensor_cone_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // total_cone_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->total_cone_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "total_cone_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
