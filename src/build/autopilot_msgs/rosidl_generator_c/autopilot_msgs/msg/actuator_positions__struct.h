// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autopilot_msgs:msg/ActuatorPositions.idl
// generated code does not contain a copyright notice

#ifndef AUTOPILOT_MSGS__MSG__ACTUATOR_POSITIONS__STRUCT_H_
#define AUTOPILOT_MSGS__MSG__ACTUATOR_POSITIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MAX_NB_ACTUATORS'.
enum
{
  autopilot_msgs__msg__ActuatorPositions__MAX_NB_ACTUATORS = 16ul
};

// Include directives for member types
// Member 'actuators'
#include "rosidl_generator_c/primitives_sequence.h"

// constants for array fields with an upper bound
// actuators
enum
{
  autopilot_msgs__msg__ActuatorPositions__actuators__MAX_SIZE = 16
};

// Struct defined in msg/ActuatorPositions in the package autopilot_msgs.
typedef struct autopilot_msgs__msg__ActuatorPositions
{
  rosidl_generator_c__float__Sequence actuators;
} autopilot_msgs__msg__ActuatorPositions;

// Struct for a sequence of autopilot_msgs__msg__ActuatorPositions.
typedef struct autopilot_msgs__msg__ActuatorPositions__Sequence
{
  autopilot_msgs__msg__ActuatorPositions * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autopilot_msgs__msg__ActuatorPositions__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOPILOT_MSGS__MSG__ACTUATOR_POSITIONS__STRUCT_H_
