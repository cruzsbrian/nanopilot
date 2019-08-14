// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from autopilot_msgs:msg/ActuatorPositions.idl
// generated code does not contain a copyright notice
#include "autopilot_msgs/msg/actuator_positions__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "autopilot_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "autopilot_msgs/msg/actuator_positions__struct.h"
#include "autopilot_msgs/msg/actuator_positions__functions.h"
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

#include "rosidl_generator_c/primitives_sequence.h"  // actuators
#include "rosidl_generator_c/primitives_sequence_functions.h"  // actuators

// forward declare type support functions


using _ActuatorPositions__ros_msg_type = autopilot_msgs__msg__ActuatorPositions;

static bool _ActuatorPositions__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ActuatorPositions__ros_msg_type * ros_message = static_cast<const _ActuatorPositions__ros_msg_type *>(untyped_ros_message);
  // Field name: actuators
  {
    size_t size = ros_message->actuators.size;
    auto array_ptr = ros_message->actuators.data;
    if (size > 16) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _ActuatorPositions__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ActuatorPositions__ros_msg_type * ros_message = static_cast<_ActuatorPositions__ros_msg_type *>(untyped_ros_message);
  // Field name: actuators
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->actuators.data) {
      rosidl_generator_c__float__Sequence__fini(&ros_message->actuators);
    }
    if (!rosidl_generator_c__float__Sequence__init(&ros_message->actuators, size)) {
      return "failed to create array for field 'actuators'";
    }
    auto array_ptr = ros_message->actuators.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autopilot_msgs
size_t get_serialized_size_autopilot_msgs__msg__ActuatorPositions(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ActuatorPositions__ros_msg_type * ros_message = static_cast<const _ActuatorPositions__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name actuators
  {
    size_t array_size = ros_message->actuators.size;
    auto array_ptr = ros_message->actuators.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ActuatorPositions__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_autopilot_msgs__msg__ActuatorPositions(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autopilot_msgs
size_t max_serialized_size_autopilot_msgs__msg__ActuatorPositions(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: actuators
  {
    size_t array_size = 16;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _ActuatorPositions__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_autopilot_msgs__msg__ActuatorPositions(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ActuatorPositions = {
  "autopilot_msgs::msg",
  "ActuatorPositions",
  _ActuatorPositions__cdr_serialize,
  _ActuatorPositions__cdr_deserialize,
  _ActuatorPositions__get_serialized_size,
  _ActuatorPositions__max_serialized_size
};

static rosidl_message_type_support_t _ActuatorPositions__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ActuatorPositions,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autopilot_msgs, msg, ActuatorPositions)() {
  return &_ActuatorPositions__type_support;
}

#if defined(__cplusplus)
}
#endif
