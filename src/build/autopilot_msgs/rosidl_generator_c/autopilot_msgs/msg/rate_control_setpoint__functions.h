// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autopilot_msgs:msg/RateControlSetpoint.idl
// generated code does not contain a copyright notice

#ifndef AUTOPILOT_MSGS__MSG__RATE_CONTROL_SETPOINT__FUNCTIONS_H_
#define AUTOPILOT_MSGS__MSG__RATE_CONTROL_SETPOINT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "autopilot_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "autopilot_msgs/msg/rate_control_setpoint__struct.h"

/// Initialize msg/RateControlSetpoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * autopilot_msgs__msg__RateControlSetpoint
 * )) before or use
 * autopilot_msgs__msg__RateControlSetpoint__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_autopilot_msgs
bool
autopilot_msgs__msg__RateControlSetpoint__init(autopilot_msgs__msg__RateControlSetpoint * msg);

/// Finalize msg/RateControlSetpoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autopilot_msgs
void
autopilot_msgs__msg__RateControlSetpoint__fini(autopilot_msgs__msg__RateControlSetpoint * msg);

/// Create msg/RateControlSetpoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * autopilot_msgs__msg__RateControlSetpoint__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_autopilot_msgs
autopilot_msgs__msg__RateControlSetpoint *
autopilot_msgs__msg__RateControlSetpoint__create();

/// Destroy msg/RateControlSetpoint message.
/**
 * It calls
 * autopilot_msgs__msg__RateControlSetpoint__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autopilot_msgs
void
autopilot_msgs__msg__RateControlSetpoint__destroy(autopilot_msgs__msg__RateControlSetpoint * msg);


/// Initialize array of msg/RateControlSetpoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * autopilot_msgs__msg__RateControlSetpoint__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_autopilot_msgs
bool
autopilot_msgs__msg__RateControlSetpoint__Sequence__init(autopilot_msgs__msg__RateControlSetpoint__Sequence * array, size_t size);

/// Finalize array of msg/RateControlSetpoint messages.
/**
 * It calls
 * autopilot_msgs__msg__RateControlSetpoint__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autopilot_msgs
void
autopilot_msgs__msg__RateControlSetpoint__Sequence__fini(autopilot_msgs__msg__RateControlSetpoint__Sequence * array);

/// Create array of msg/RateControlSetpoint messages.
/**
 * It allocates the memory for the array and calls
 * autopilot_msgs__msg__RateControlSetpoint__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_autopilot_msgs
autopilot_msgs__msg__RateControlSetpoint__Sequence *
autopilot_msgs__msg__RateControlSetpoint__Sequence__create(size_t size);

/// Destroy array of msg/RateControlSetpoint messages.
/**
 * It calls
 * autopilot_msgs__msg__RateControlSetpoint__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autopilot_msgs
void
autopilot_msgs__msg__RateControlSetpoint__Sequence__destroy(autopilot_msgs__msg__RateControlSetpoint__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // AUTOPILOT_MSGS__MSG__RATE_CONTROL_SETPOINT__FUNCTIONS_H_
