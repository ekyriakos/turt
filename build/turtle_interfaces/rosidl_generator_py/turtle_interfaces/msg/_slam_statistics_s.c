// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from turtle_interfaces:msg/SlamStatistics.idl
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
#include "turtle_interfaces/msg/detail/slam_statistics__struct.h"
#include "turtle_interfaces/msg/detail/slam_statistics__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool turtle_interfaces__msg__slam_statistics__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[54];
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
    assert(strncmp("turtle_interfaces.msg._slam_statistics.SlamStatistics", full_classname_dest, 53) == 0);
  }
  turtle_interfaces__msg__SlamStatistics * ros_message = _ros_message;
  {  // chi2
    PyObject * field = PyObject_GetAttrString(_pymsg, "chi2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->chi2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // num_vertices
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_vertices");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_vertices = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // num_edges
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_edges");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_edges = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // total_optimizer_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "total_optimizer_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->total_optimizer_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // hessian_dim
    PyObject * field = PyObject_GetAttrString(_pymsg, "hessian_dim");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hessian_dim = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cholesky_nnz
    PyObject * field = PyObject_GetAttrString(_pymsg, "cholesky_nnz");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cholesky_nnz = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // num_iterations
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_iterations");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_iterations = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * turtle_interfaces__msg__slam_statistics__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SlamStatistics */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("turtle_interfaces.msg._slam_statistics");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SlamStatistics");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  turtle_interfaces__msg__SlamStatistics * ros_message = (turtle_interfaces__msg__SlamStatistics *)raw_ros_message;
  {  // chi2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->chi2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "chi2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_vertices
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->num_vertices);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_vertices", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_edges
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->num_edges);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_edges", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // total_optimizer_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->total_optimizer_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "total_optimizer_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hessian_dim
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hessian_dim);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hessian_dim", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cholesky_nnz
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cholesky_nnz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cholesky_nnz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_iterations
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->num_iterations);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_iterations", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
