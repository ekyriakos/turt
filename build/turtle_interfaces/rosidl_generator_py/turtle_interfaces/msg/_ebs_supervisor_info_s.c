// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from turtle_interfaces:msg/EbsSupervisorInfo.idl
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
#include "turtle_interfaces/msg/detail/ebs_supervisor_info__struct.h"
#include "turtle_interfaces/msg/detail/ebs_supervisor_info__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool turtle_interfaces__msg__ebs_supervisor_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[61];
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
    assert(strncmp("turtle_interfaces.msg._ebs_supervisor_info.EbsSupervisorInfo", full_classname_dest, 60) == 0);
  }
  turtle_interfaces__msg__EbsSupervisorInfo * ros_message = _ros_message;
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
  {  // asmsstate
    PyObject * field = PyObject_GetAttrString(_pymsg, "asmsstate");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->asmsstate = (Py_True == field);
    Py_DECREF(field);
  }
  {  // tsmsout
    PyObject * field = PyObject_GetAttrString(_pymsg, "tsmsout");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->tsmsout = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ebsstatus
    PyObject * field = PyObject_GetAttrString(_pymsg, "ebsstatus");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ebsstatus = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ebsled
    PyObject * field = PyObject_GetAttrString(_pymsg, "ebsled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ebsled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // servicebrakestatus
    PyObject * field = PyObject_GetAttrString(_pymsg, "servicebrakestatus");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->servicebrakestatus = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // initialchecked
    PyObject * field = PyObject_GetAttrString(_pymsg, "initialchecked");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->initialchecked = (Py_True == field);
    Py_DECREF(field);
  }
  {  // initialcheckstage
    PyObject * field = PyObject_GetAttrString(_pymsg, "initialcheckstage");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->initialcheckstage = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // monitortankpressure
    PyObject * field = PyObject_GetAttrString(_pymsg, "monitortankpressure");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->monitortankpressure = (Py_True == field);
    Py_DECREF(field);
  }
  {  // monitorbrakepressure
    PyObject * field = PyObject_GetAttrString(_pymsg, "monitorbrakepressure");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->monitorbrakepressure = (Py_True == field);
    Py_DECREF(field);
  }
  {  // monitorservocheck
    PyObject * field = PyObject_GetAttrString(_pymsg, "monitorservocheck");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->monitorservocheck = (Py_True == field);
    Py_DECREF(field);
  }
  {  // monitorapu
    PyObject * field = PyObject_GetAttrString(_pymsg, "monitorapu");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->monitorapu = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * turtle_interfaces__msg__ebs_supervisor_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EbsSupervisorInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("turtle_interfaces.msg._ebs_supervisor_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EbsSupervisorInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  turtle_interfaces__msg__EbsSupervisorInfo * ros_message = (turtle_interfaces__msg__EbsSupervisorInfo *)raw_ros_message;
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
  {  // asmsstate
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->asmsstate ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asmsstate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tsmsout
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->tsmsout ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tsmsout", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ebsstatus
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ebsstatus);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ebsstatus", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ebsled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ebsled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ebsled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // servicebrakestatus
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->servicebrakestatus);
    {
      int rc = PyObject_SetAttrString(_pymessage, "servicebrakestatus", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // initialchecked
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->initialchecked ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "initialchecked", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // initialcheckstage
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->initialcheckstage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "initialcheckstage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // monitortankpressure
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->monitortankpressure ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "monitortankpressure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // monitorbrakepressure
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->monitorbrakepressure ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "monitorbrakepressure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // monitorservocheck
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->monitorservocheck ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "monitorservocheck", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // monitorapu
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->monitorapu ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "monitorapu", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
