// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autopilot_msgs:msg/RCInput.idl
// generated code does not contain a copyright notice

#ifndef AUTOPILOT_MSGS__MSG__RC_INPUT__FUNCTIONS_H_
#define AUTOPILOT_MSGS__MSG__RC_INPUT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "autopilot_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "autopilot_msgs/msg/rc_input__struct.h"

/// Initialize msg/RCInput message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * autopilot_msgs__msg__RCInput
 * )) before or use
 * autopilot_msgs__msg__RCInput__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_autopilot_msgs
bool
autopilot_msgs__msg__RCInput__init(autopilot_msgs__msg__RCInput * msg);

/// Finalize msg/RCInput message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autopilot_msgs
void
autopilot_msgs__msg__RCInput__fini(autopilot_msgs__msg__RCInput * msg);

/// Create msg/RCInput message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * autopilot_msgs__msg__RCInput__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_autopilot_msgs
autopilot_msgs__msg__RCInput *
autopilot_msgs__msg__RCInput__create();

/// Destroy msg/RCInput message.
/**
 * It calls
 * autopilot_msgs__msg__RCInput__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autopilot_msgs
void
autopilot_msgs__msg__RCInput__destroy(autopilot_msgs__msg__RCInput * msg);


/// Initialize array of msg/RCInput messages.
/**
 * It allocates the memory for the number of elements and calls
 * autopilot_msgs__msg__RCInput__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_autopilot_msgs
bool
autopilot_msgs__msg__RCInput__Sequence__init(autopilot_msgs__msg__RCInput__Sequence * array, size_t size);

/// Finalize array of msg/RCInput messages.
/**
 * It calls
 * autopilot_msgs__msg__RCInput__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autopilot_msgs
void
autopilot_msgs__msg__RCInput__Sequence__fini(autopilot_msgs__msg__RCInput__Sequence * array);

/// Create array of msg/RCInput messages.
/**
 * It allocates the memory for the array and calls
 * autopilot_msgs__msg__RCInput__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_autopilot_msgs
autopilot_msgs__msg__RCInput__Sequence *
autopilot_msgs__msg__RCInput__Sequence__create(size_t size);

/// Destroy array of msg/RCInput messages.
/**
 * It calls
 * autopilot_msgs__msg__RCInput__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autopilot_msgs
void
autopilot_msgs__msg__RCInput__Sequence__destroy(autopilot_msgs__msg__RCInput__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // AUTOPILOT_MSGS__MSG__RC_INPUT__FUNCTIONS_H_
