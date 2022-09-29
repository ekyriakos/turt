// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from turtle_interfaces:msg/CanStatus.idl
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
#include "turtle_interfaces/msg/detail/can_status__struct.h"
#include "turtle_interfaces/msg/detail/can_status__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool turtle_interfaces__msg__can_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("turtle_interfaces.msg._can_status.CanStatus", full_classname_dest, 43) == 0);
  }
  turtle_interfaces__msg__CanStatus * ros_message = _ros_message;
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
  {  // message_timeouts
    PyObject * field = PyObject_GetAttrString(_pymsg, "message_timeouts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->message_timeouts = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sensor_errors
    PyObject * field = PyObject_GetAttrString(_pymsg, "sensor_errors");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sensor_errors = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tx_berrors
    PyObject * field = PyObject_GetAttrString(_pymsg, "tx_berrors");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tx_berrors = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rx_berrors
    PyObject * field = PyObject_GetAttrString(_pymsg, "rx_berrors");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rx_berrors = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tx_terrors
    PyObject * field = PyObject_GetAttrString(_pymsg, "tx_terrors");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tx_terrors = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // rx_terrors
    PyObject * field = PyObject_GetAttrString(_pymsg, "rx_terrors");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rx_terrors = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // bus_errors
    PyObject * field = PyObject_GetAttrString(_pymsg, "bus_errors");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bus_errors = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // restarts
    PyObject * field = PyObject_GetAttrString(_pymsg, "restarts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->restarts = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // can_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->can_state = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * turtle_interfaces__msg__can_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CanStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("turtle_interfaces.msg._can_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CanStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  turtle_interfaces__msg__CanStatus * ros_message = (turtle_interfaces__msg__CanStatus *)raw_ros_message;
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
  {  // message_timeouts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->message_timeouts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "message_timeouts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sensor_errors
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sensor_errors);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sensor_errors", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tx_berrors
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tx_berrors);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tx_berrors", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rx_berrors
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rx_berrors);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rx_berrors", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tx_terrors
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->tx_terrors);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tx_terrors", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rx_terrors
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->rx_terrors);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rx_terrors", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bus_errors
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->bus_errors);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bus_errors", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // restarts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->restarts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "restarts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_state
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->can_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
