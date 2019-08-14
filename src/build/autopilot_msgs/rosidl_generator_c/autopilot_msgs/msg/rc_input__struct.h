// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autopilot_msgs:msg/RCInput.idl
// generated code does not contain a copyright notice

#ifndef AUTOPILOT_MSGS__MSG__RC_INPUT__STRUCT_H_
#define AUTOPILOT_MSGS__MSG__RC_INPUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MAX_NB_CHANNELS'.
enum
{
  autopilot_msgs__msg__RCInput__MAX_NB_CHANNELS = 16ul
};

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/time__struct.h"
// Member 'channels'
#include "rosidl_generator_c/primitives_sequence.h"

// constants for array fields with an upper bound
// channels
enum
{
  autopilot_msgs__msg__RCInput__channels__MAX_SIZE = 16
};

// Struct defined in msg/RCInput in the package autopilot_msgs.
typedef struct autopilot_msgs__msg__RCInput
{
  builtin_interfaces__msg__Time stamp;
  rosidl_generator_c__float__Sequence channels;
  bool signal;
} autopilot_msgs__msg__RCInput;

// Struct for a sequence of autopilot_msgs__msg__RCInput.
typedef struct autopilot_msgs__msg__RCInput__Sequence
{
  autopilot_msgs__msg__RCInput * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autopilot_msgs__msg__RCInput__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOPILOT_MSGS__MSG__RC_INPUT__STRUCT_H_
