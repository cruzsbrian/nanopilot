// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from autopilot_msgs:msg/ActuatorPositionsStamped.idl
// generated code does not contain a copyright notice
#include "autopilot_msgs/msg/actuator_positions_stamped__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "autopilot_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "autopilot_msgs/msg/actuator_positions_stamped__struct.h"
#include "autopilot_msgs/msg/actuator_positions_stamped__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "autopilot_msgs/msg/actuator_positions__functions.h"  // actuators
#include "builtin_interfaces/msg/time__functions.h"  // stamp

// forward declare type support functions
size_t get_serialized_size_autopilot_msgs__msg__ActuatorPositions(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_autopilot_msgs__msg__ActuatorPositions(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autopilot_msgs, msg, ActuatorPositions)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autopilot_msgs
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autopilot_msgs
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autopilot_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();


using _ActuatorPositionsStamped__ros_msg_type = autopilot_msgs__msg__ActuatorPositionsStamped;

static bool _ActuatorPositionsStamped__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ActuatorPositionsStamped__ros_msg_type * ros_message = static_cast<const _ActuatorPositionsStamped__ros_msg_type *>(untyped_ros_message);
  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->stamp, cdr))
    {
      return false;
    }
  }

  // Field name: actuators
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autopilot_msgs, msg, ActuatorPositions
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->actuators, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _ActuatorPositionsStamped__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ActuatorPositionsStamped__ros_msg_type * ros_message = static_cast<_ActuatorPositionsStamped__ros_msg_type *>(untyped_ros_message);
  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->stamp))
    {
      return false;
    }
  }

  // Field name: actuators
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autopilot_msgs, msg, ActuatorPositions
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->actuators))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autopilot_msgs
size_t get_serialized_size_autopilot_msgs__msg__ActuatorPositionsStamped(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ActuatorPositionsStamped__ros_msg_type * ros_message = static_cast<const _ActuatorPositionsStamped__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name stamp

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->stamp), current_alignment);
  // field.name actuators

  current_alignment += get_serialized_size_autopilot_msgs__msg__ActuatorPositions(
    &(ros_message->actuators), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _ActuatorPositionsStamped__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_autopilot_msgs__msg__ActuatorPositionsStamped(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autopilot_msgs
size_t max_serialized_size_autopilot_msgs__msg__ActuatorPositionsStamped(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: stamp
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_builtin_interfaces__msg__Time(
        full_bounded, current_alignment);
    }
  }
  // member: actuators
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_autopilot_msgs__msg__ActuatorPositions(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ActuatorPositionsStamped__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_autopilot_msgs__msg__ActuatorPositionsStamped(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ActuatorPositionsStamped = {
  "autopilot_msgs::msg",
  "ActuatorPositionsStamped",
  _ActuatorPositionsStamped__cdr_serialize,
  _ActuatorPositionsStamped__cdr_deserialize,
  _ActuatorPositionsStamped__get_serialized_size,
  _ActuatorPositionsStamped__max_serialized_size
};

static rosidl_message_type_support_t _ActuatorPositionsStamped__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ActuatorPositionsStamped,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autopilot_msgs, msg, ActuatorPositionsStamped)() {
  return &_ActuatorPositionsStamped__type_support;
}

#if defined(__cplusplus)
}
#endif
