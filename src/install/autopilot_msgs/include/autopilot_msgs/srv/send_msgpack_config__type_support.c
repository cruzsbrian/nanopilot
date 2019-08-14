// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autopilot_msgs:srv/SendMsgpackConfig.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autopilot_msgs/srv/send_msgpack_config__rosidl_typesupport_introspection_c.h"
#include "autopilot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autopilot_msgs/srv/send_msgpack_config__struct.h"


// Include directives for member types
// Member `msgpack_config`
#include "rosidl_generator_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember SendMsgpackConfig_Request__rosidl_typesupport_introspection_c__SendMsgpackConfig_Request_message_member_array[1] = {
  {
    "msgpack_config",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_OCTET,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autopilot_msgs__srv__SendMsgpackConfig_Request, msgpack_config),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SendMsgpackConfig_Request__rosidl_typesupport_introspection_c__SendMsgpackConfig_Request_message_members = {
  "autopilot_msgs__srv",  // message namespace
  "SendMsgpackConfig_Request",  // message name
  1,  // number of fields
  sizeof(autopilot_msgs__srv__SendMsgpackConfig_Request),
  SendMsgpackConfig_Request__rosidl_typesupport_introspection_c__SendMsgpackConfig_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SendMsgpackConfig_Request__rosidl_typesupport_introspection_c__SendMsgpackConfig_Request_message_type_support_handle = {
  0,
  &SendMsgpackConfig_Request__rosidl_typesupport_introspection_c__SendMsgpackConfig_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autopilot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autopilot_msgs, srv, SendMsgpackConfig_Request)() {
  if (!SendMsgpackConfig_Request__rosidl_typesupport_introspection_c__SendMsgpackConfig_Request_message_type_support_handle.typesupport_identifier) {
    SendMsgpackConfig_Request__rosidl_typesupport_introspection_c__SendMsgpackConfig_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SendMsgpackConfig_Request__rosidl_typesupport_introspection_c__SendMsgpackConfig_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "autopilot_msgs/srv/send_msgpack_config__rosidl_typesupport_introspection_c.h"
// already included above
// #include "autopilot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "autopilot_msgs/srv/send_msgpack_config__struct.h"


// Include directives for member types
// Member `error_message`
#include "rosidl_generator_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember SendMsgpackConfig_Response__rosidl_typesupport_introspection_c__SendMsgpackConfig_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autopilot_msgs__srv__SendMsgpackConfig_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autopilot_msgs__srv__SendMsgpackConfig_Response, error_message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SendMsgpackConfig_Response__rosidl_typesupport_introspection_c__SendMsgpackConfig_Response_message_members = {
  "autopilot_msgs__srv",  // message namespace
  "SendMsgpackConfig_Response",  // message name
  2,  // number of fields
  sizeof(autopilot_msgs__srv__SendMsgpackConfig_Response),
  SendMsgpackConfig_Response__rosidl_typesupport_introspection_c__SendMsgpackConfig_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SendMsgpackConfig_Response__rosidl_typesupport_introspection_c__SendMsgpackConfig_Response_message_type_support_handle = {
  0,
  &SendMsgpackConfig_Response__rosidl_typesupport_introspection_c__SendMsgpackConfig_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autopilot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autopilot_msgs, srv, SendMsgpackConfig_Response)() {
  if (!SendMsgpackConfig_Response__rosidl_typesupport_introspection_c__SendMsgpackConfig_Response_message_type_support_handle.typesupport_identifier) {
    SendMsgpackConfig_Response__rosidl_typesupport_introspection_c__SendMsgpackConfig_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SendMsgpackConfig_Response__rosidl_typesupport_introspection_c__SendMsgpackConfig_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "autopilot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "autopilot_msgs/srv/send_msgpack_config__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers autopilot_msgs__srv__send_msgpack_config__rosidl_typesupport_introspection_c__SendMsgpackConfig_service_members = {
  "autopilot_msgs__srv",  // service namespace
  "SendMsgpackConfig",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // autopilot_msgs__srv__send_msgpack_config__rosidl_typesupport_introspection_c__SendMsgpackConfig_Request_message_type_support_handle,
  NULL  // response message
  // autopilot_msgs__srv__send_msgpack_config__rosidl_typesupport_introspection_c__SendMsgpackConfig_Response_message_type_support_handle
};

static rosidl_service_type_support_t autopilot_msgs__srv__send_msgpack_config__rosidl_typesupport_introspection_c__SendMsgpackConfig_service_type_support_handle = {
  0,
  &autopilot_msgs__srv__send_msgpack_config__rosidl_typesupport_introspection_c__SendMsgpackConfig_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autopilot_msgs, srv, SendMsgpackConfig_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autopilot_msgs, srv, SendMsgpackConfig_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autopilot_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autopilot_msgs, srv, SendMsgpackConfig)() {
  if (!autopilot_msgs__srv__send_msgpack_config__rosidl_typesupport_introspection_c__SendMsgpackConfig_service_type_support_handle.typesupport_identifier) {
    autopilot_msgs__srv__send_msgpack_config__rosidl_typesupport_introspection_c__SendMsgpackConfig_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)autopilot_msgs__srv__send_msgpack_config__rosidl_typesupport_introspection_c__SendMsgpackConfig_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autopilot_msgs, srv, SendMsgpackConfig_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autopilot_msgs, srv, SendMsgpackConfig_Response)()->data;
  }

  return &autopilot_msgs__srv__send_msgpack_config__rosidl_typesupport_introspection_c__SendMsgpackConfig_service_type_support_handle;
}
