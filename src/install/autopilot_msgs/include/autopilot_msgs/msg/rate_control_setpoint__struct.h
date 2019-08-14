// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autopilot_msgs:msg/RateControlSetpoint.idl
// generated code does not contain a copyright notice

#ifndef AUTOPILOT_MSGS__MSG__RATE_CONTROL_SETPOINT__STRUCT_H_
#define AUTOPILOT_MSGS__MSG__RATE_CONTROL_SETPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/header__struct.h"
// Member 'rate_control_setpoint'
// Member 'feed_forward_torque'
// Member 'force'
#include "geometry_msgs/msg/vector3__struct.h"
// Member 'actuators'
#include "autopilot_msgs/msg/actuator_positions__struct.h"

// Struct defined in msg/RateControlSetpoint in the package autopilot_msgs.
typedef struct autopilot_msgs__msg__RateControlSetpoint
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Vector3 rate_control_setpoint;
  geometry_msgs__msg__Vector3 feed_forward_torque;
  geometry_msgs__msg__Vector3 force;
  autopilot_msgs__msg__ActuatorPositions actuators;
} autopilot_msgs__msg__RateControlSetpoint;

// Struct for a sequence of autopilot_msgs__msg__RateControlSetpoint.
typedef struct autopilot_msgs__msg__RateControlSetpoint__Sequence
{
  autopilot_msgs__msg__RateControlSetpoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autopilot_msgs__msg__RateControlSetpoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOPILOT_MSGS__MSG__RATE_CONTROL_SETPOINT__STRUCT_H_
