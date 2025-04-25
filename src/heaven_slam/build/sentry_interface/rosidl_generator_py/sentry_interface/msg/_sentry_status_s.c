// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from sentry_interface:msg/SentryStatus.idl
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
#include "sentry_interface/msg/detail/sentry_status__struct.h"
#include "sentry_interface/msg/detail/sentry_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool sentry_interface__msg__sentry_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[49];
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
    assert(strncmp("sentry_interface.msg._sentry_status.SentryStatus", full_classname_dest, 48) == 0);
  }
  sentry_interface__msg__SentryStatus * ros_message = _ros_message;
  {  // game_stage
    PyObject * field = PyObject_GetAttrString(_pymsg, "game_stage");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->game_stage = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // gain_area_detected
    PyObject * field = PyObject_GetAttrString(_pymsg, "gain_area_detected");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gain_area_detected = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // gain_area_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "gain_area_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gain_area_status = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // supply_area_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "supply_area_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->supply_area_status = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // stage_time_remain
    PyObject * field = PyObject_GetAttrString(_pymsg, "stage_time_remain");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->stage_time_remain = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // current_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->current_hp = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // rotate_flag
    PyObject * field = PyObject_GetAttrString(_pymsg, "rotate_flag");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rotate_flag = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sentry_interface__msg__sentry_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SentryStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sentry_interface.msg._sentry_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SentryStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sentry_interface__msg__SentryStatus * ros_message = (sentry_interface__msg__SentryStatus *)raw_ros_message;
  {  // game_stage
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->game_stage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "game_stage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gain_area_detected
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->gain_area_detected);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gain_area_detected", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gain_area_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->gain_area_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gain_area_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // supply_area_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->supply_area_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "supply_area_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stage_time_remain
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->stage_time_remain);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stage_time_remain", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_hp
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->current_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rotate_flag
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->rotate_flag);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rotate_flag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
