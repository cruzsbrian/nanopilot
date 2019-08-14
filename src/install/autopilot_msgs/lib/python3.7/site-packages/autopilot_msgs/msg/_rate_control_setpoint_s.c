// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from autopilot_msgs:msg/RateControlSetpoint.idl
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
#include "rosidl_generator_c/visibility_control.h"
#include "autopilot_msgs/msg/rate_control_setpoint__struct.h"
#include "autopilot_msgs/msg/rate_control_setpoint__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);
bool autopilot_msgs__msg__actuator_positions__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * autopilot_msgs__msg__actuator_positions__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool autopilot_msgs__msg__rate_control_setpoint__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
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
    assert(strncmp(
        "autopilot_msgs.msg._rate_control_setpoint.RateControlSetpoint",
        full_classname_dest, 61) == 0);
  }
  autopilot_msgs__msg__RateControlSetpoint * ros_message = _ros_message;
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
  {  // rate_control_setpoint
    PyObject * field = PyObject_GetAttrString(_pymsg, "rate_control_setpoint");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->rate_control_setpoint)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // feed_forward_torque
    PyObject * field = PyObject_GetAttrString(_pymsg, "feed_forward_torque");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->feed_forward_torque)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // force
    PyObject * field = PyObject_GetAttrString(_pymsg, "force");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->force)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // actuators
    PyObject * field = PyObject_GetAttrString(_pymsg, "actuators");
    if (!field) {
      return false;
    }
    if (!autopilot_msgs__msg__actuator_positions__convert_from_py(field, &ros_message->actuators)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * autopilot_msgs__msg__rate_control_setpoint__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RateControlSetpoint */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("autopilot_msgs.msg._rate_control_setpoint");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RateControlSetpoint");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  autopilot_msgs__msg__RateControlSetpoint * ros_message = (autopilot_msgs__msg__RateControlSetpoint *)raw_ros_message;
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
  {  // rate_control_setpoint
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->rate_control_setpoint);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "rate_control_setpoint", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // feed_forward_torque
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->feed_forward_torque);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "feed_forward_torque", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // force
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->force);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "force", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // actuators
    PyObject * field = NULL;
    field = autopilot_msgs__msg__actuator_positions__convert_to_py(&ros_message->actuators);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "actuators", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
