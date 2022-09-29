// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from turtle_interfaces:msg/ControlInfo.idl
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
#include "turtle_interfaces/msg/detail/control_info__struct.h"
#include "turtle_interfaces/msg/detail/control_info__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool turtle_interfaces__msg__control_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("turtle_interfaces.msg._control_info.ControlInfo", full_classname_dest, 47) == 0);
  }
  turtle_interfaces__msg__ControlInfo * ros_message = _ros_message;
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
  {  // lookahead_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "lookahead_distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lookahead_distance = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vx_desired
    PyObject * field = PyObject_GetAttrString(_pymsg, "vx_desired");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vx_desired = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lap
    PyObject * field = PyObject_GetAttrString(_pymsg, "lap");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lap = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // map_available
    PyObject * field = PyObject_GetAttrString(_pymsg, "map_available");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->map_available = (Py_True == field);
    Py_DECREF(field);
  }
  {  // finalization_trigger
    PyObject * field = PyObject_GetAttrString(_pymsg, "finalization_trigger");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->finalization_trigger = (Py_True == field);
    Py_DECREF(field);
  }
  {  // seconds_to_cross_finish_line
    PyObject * field = PyObject_GetAttrString(_pymsg, "seconds_to_cross_finish_line");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->seconds_to_cross_finish_line = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // anti_delft_gain
    PyObject * field = PyObject_GetAttrString(_pymsg, "anti_delft_gain");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->anti_delft_gain = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // finish_dist_thresh
    PyObject * field = PyObject_GetAttrString(_pymsg, "finish_dist_thresh");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->finish_dist_thresh = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vx
    PyObject * field = PyObject_GetAttrString(_pymsg, "vx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vx = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // seconds_passed_since_finalization_trigger
    PyObject * field = PyObject_GetAttrString(_pymsg, "seconds_passed_since_finalization_trigger");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->seconds_passed_since_finalization_trigger = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // heading_condition
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading_condition");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->heading_condition = (Py_True == field);
    Py_DECREF(field);
  }
  {  // startline_pose_heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "startline_pose_heading");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->startline_pose_heading = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * turtle_interfaces__msg__control_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ControlInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("turtle_interfaces.msg._control_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ControlInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  turtle_interfaces__msg__ControlInfo * ros_message = (turtle_interfaces__msg__ControlInfo *)raw_ros_message;
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
  {  // lookahead_distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lookahead_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lookahead_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vx_desired
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vx_desired);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vx_desired", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lap
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lap);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lap", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // map_available
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->map_available ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "map_available", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // finalization_trigger
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->finalization_trigger ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "finalization_trigger", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // seconds_to_cross_finish_line
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->seconds_to_cross_finish_line);
    {
      int rc = PyObject_SetAttrString(_pymessage, "seconds_to_cross_finish_line", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // anti_delft_gain
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->anti_delft_gain);
    {
      int rc = PyObject_SetAttrString(_pymessage, "anti_delft_gain", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // finish_dist_thresh
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->finish_dist_thresh);
    {
      int rc = PyObject_SetAttrString(_pymessage, "finish_dist_thresh", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // seconds_passed_since_finalization_trigger
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->seconds_passed_since_finalization_trigger);
    {
      int rc = PyObject_SetAttrString(_pymessage, "seconds_passed_since_finalization_trigger", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading_condition
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->heading_condition ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading_condition", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // startline_pose_heading
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->startline_pose_heading);
    {
      int rc = PyObject_SetAttrString(_pymessage, "startline_pose_heading", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
