// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from turtle_interfaces:msg/DashButtons.idl
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
#include "turtle_interfaces/msg/detail/dash_buttons__struct.h"
#include "turtle_interfaces/msg/detail/dash_buttons__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool turtle_interfaces__msg__dash_buttons__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
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
    assert(strncmp("turtle_interfaces.msg._dash_buttons.DashButtons", full_classname_dest, 47) == 0);
  }
  turtle_interfaces__msg__DashButtons * ros_message = _ros_message;
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
  {  // enabletoggle
    PyObject * field = PyObject_GetAttrString(_pymsg, "enabletoggle");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->enabletoggle = (Py_True == field);
    Py_DECREF(field);
  }
  {  // start
    PyObject * field = PyObject_GetAttrString(_pymsg, "start");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->start = (Py_True == field);
    Py_DECREF(field);
  }
  {  // adact
    PyObject * field = PyObject_GetAttrString(_pymsg, "adact");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->adact = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cooling_button
    PyObject * field = PyObject_GetAttrString(_pymsg, "cooling_button");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cooling_button = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * turtle_interfaces__msg__dash_buttons__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DashButtons */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("turtle_interfaces.msg._dash_buttons");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DashButtons");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  turtle_interfaces__msg__DashButtons * ros_message = (turtle_interfaces__msg__DashButtons *)raw_ros_message;
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
  {  // enabletoggle
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->enabletoggle ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enabletoggle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // start
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->start ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "start", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // adact
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->adact ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "adact", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cooling_button
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cooling_button ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cooling_button", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
