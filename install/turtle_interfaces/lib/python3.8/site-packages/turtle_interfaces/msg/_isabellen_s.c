// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from turtle_interfaces:msg/Isabellen.idl
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
#include "turtle_interfaces/msg/detail/isabellen__struct.h"
#include "turtle_interfaces/msg/detail/isabellen__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool turtle_interfaces__msg__isabellen__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
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
    assert(strncmp("turtle_interfaces.msg._isabellen.Isabellen", full_classname_dest, 42) == 0);
  }
  turtle_interfaces__msg__Isabellen * ros_message = _ros_message;
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
  {  // idc
    PyObject * field = PyObject_GetAttrString(_pymsg, "idc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->idc = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vdc
    PyObject * field = PyObject_GetAttrString(_pymsg, "vdc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vdc = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pdc
    PyObject * field = PyObject_GetAttrString(_pymsg, "pdc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pdc = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // energy
    PyObject * field = PyObject_GetAttrString(_pymsg, "energy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->energy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * turtle_interfaces__msg__isabellen__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Isabellen */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("turtle_interfaces.msg._isabellen");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Isabellen");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  turtle_interfaces__msg__Isabellen * ros_message = (turtle_interfaces__msg__Isabellen *)raw_ros_message;
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
  {  // idc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->idc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "idc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vdc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vdc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vdc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pdc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pdc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pdc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // energy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->energy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "energy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
