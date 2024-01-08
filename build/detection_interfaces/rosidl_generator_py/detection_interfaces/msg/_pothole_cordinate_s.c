// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from detection_interfaces:msg/PotholeCordinate.idl
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
#include "detection_interfaces/msg/detail/pothole_cordinate__struct.h"
#include "detection_interfaces/msg/detail/pothole_cordinate__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool detection_interfaces__msg__pothole_cordinate__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("detection_interfaces.msg._pothole_cordinate.PotholeCordinate", full_classname_dest, 60) == 0);
  }
  detection_interfaces__msg__PotholeCordinate * ros_message = _ros_message;
  {  // id_pothole
    PyObject * field = PyObject_GetAttrString(_pymsg, "id_pothole");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->id_pothole = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // x_cordinate
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_cordinate");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->x_cordinate = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // y_cordinate
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_cordinate");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->y_cordinate = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * detection_interfaces__msg__pothole_cordinate__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PotholeCordinate */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("detection_interfaces.msg._pothole_cordinate");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PotholeCordinate");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  detection_interfaces__msg__PotholeCordinate * ros_message = (detection_interfaces__msg__PotholeCordinate *)raw_ros_message;
  {  // id_pothole
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->id_pothole);
    {
      int rc = PyObject_SetAttrString(_pymessage, "id_pothole", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x_cordinate
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->x_cordinate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_cordinate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_cordinate
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->y_cordinate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_cordinate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
