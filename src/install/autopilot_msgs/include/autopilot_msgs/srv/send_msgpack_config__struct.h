// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autopilot_msgs:srv/SendMsgpackConfig.idl
// generated code does not contain a copyright notice

#ifndef AUTOPILOT_MSGS__SRV__SEND_MSGPACK_CONFIG__STRUCT_H_
#define AUTOPILOT_MSGS__SRV__SEND_MSGPACK_CONFIG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'msgpack_config'
#include "rosidl_generator_c/primitives_sequence.h"

// Struct defined in srv/SendMsgpackConfig in the package autopilot_msgs.
typedef struct autopilot_msgs__srv__SendMsgpackConfig_Request
{
  rosidl_generator_c__octet__Sequence msgpack_config;
} autopilot_msgs__srv__SendMsgpackConfig_Request;

// Struct for a sequence of autopilot_msgs__srv__SendMsgpackConfig_Request.
typedef struct autopilot_msgs__srv__SendMsgpackConfig_Request__Sequence
{
  autopilot_msgs__srv__SendMsgpackConfig_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autopilot_msgs__srv__SendMsgpackConfig_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error_message'
#include "rosidl_generator_c/string.h"

// Struct defined in srv/SendMsgpackConfig in the package autopilot_msgs.
typedef struct autopilot_msgs__srv__SendMsgpackConfig_Response
{
  bool success;
  rosidl_generator_c__String error_message;
} autopilot_msgs__srv__SendMsgpackConfig_Response;

// Struct for a sequence of autopilot_msgs__srv__SendMsgpackConfig_Response.
typedef struct autopilot_msgs__srv__SendMsgpackConfig_Response__Sequence
{
  autopilot_msgs__srv__SendMsgpackConfig_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autopilot_msgs__srv__SendMsgpackConfig_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOPILOT_MSGS__SRV__SEND_MSGPACK_CONFIG__STRUCT_H_
