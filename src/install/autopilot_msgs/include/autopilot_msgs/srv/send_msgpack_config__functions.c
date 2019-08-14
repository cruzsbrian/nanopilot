// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autopilot_msgs:srv/SendMsgpackConfig.idl
// generated code does not contain a copyright notice
#include "autopilot_msgs/srv/send_msgpack_config__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `msgpack_config`
#include "rosidl_generator_c/primitives_sequence_functions.h"

bool
autopilot_msgs__srv__SendMsgpackConfig_Request__init(autopilot_msgs__srv__SendMsgpackConfig_Request * msg)
{
  if (!msg) {
    return false;
  }
  // msgpack_config
  if (!rosidl_generator_c__octet__Sequence__init(&msg->msgpack_config, 0)) {
    autopilot_msgs__srv__SendMsgpackConfig_Request__destroy(msg);
    return false;
  }
  return true;
}

void
autopilot_msgs__srv__SendMsgpackConfig_Request__fini(autopilot_msgs__srv__SendMsgpackConfig_Request * msg)
{
  if (!msg) {
    return;
  }
  // msgpack_config
  rosidl_generator_c__octet__Sequence__fini(&msg->msgpack_config);
}

autopilot_msgs__srv__SendMsgpackConfig_Request *
autopilot_msgs__srv__SendMsgpackConfig_Request__create()
{
  autopilot_msgs__srv__SendMsgpackConfig_Request * msg = (autopilot_msgs__srv__SendMsgpackConfig_Request *)malloc(sizeof(autopilot_msgs__srv__SendMsgpackConfig_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autopilot_msgs__srv__SendMsgpackConfig_Request));
  bool success = autopilot_msgs__srv__SendMsgpackConfig_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autopilot_msgs__srv__SendMsgpackConfig_Request__destroy(autopilot_msgs__srv__SendMsgpackConfig_Request * msg)
{
  if (msg) {
    autopilot_msgs__srv__SendMsgpackConfig_Request__fini(msg);
  }
  free(msg);
}


bool
autopilot_msgs__srv__SendMsgpackConfig_Request__Sequence__init(autopilot_msgs__srv__SendMsgpackConfig_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autopilot_msgs__srv__SendMsgpackConfig_Request * data = NULL;
  if (size) {
    data = (autopilot_msgs__srv__SendMsgpackConfig_Request *)calloc(size, sizeof(autopilot_msgs__srv__SendMsgpackConfig_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autopilot_msgs__srv__SendMsgpackConfig_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autopilot_msgs__srv__SendMsgpackConfig_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
autopilot_msgs__srv__SendMsgpackConfig_Request__Sequence__fini(autopilot_msgs__srv__SendMsgpackConfig_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autopilot_msgs__srv__SendMsgpackConfig_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

autopilot_msgs__srv__SendMsgpackConfig_Request__Sequence *
autopilot_msgs__srv__SendMsgpackConfig_Request__Sequence__create(size_t size)
{
  autopilot_msgs__srv__SendMsgpackConfig_Request__Sequence * array = (autopilot_msgs__srv__SendMsgpackConfig_Request__Sequence *)malloc(sizeof(autopilot_msgs__srv__SendMsgpackConfig_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autopilot_msgs__srv__SendMsgpackConfig_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autopilot_msgs__srv__SendMsgpackConfig_Request__Sequence__destroy(autopilot_msgs__srv__SendMsgpackConfig_Request__Sequence * array)
{
  if (array) {
    autopilot_msgs__srv__SendMsgpackConfig_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `error_message`
#include "rosidl_generator_c/string_functions.h"

bool
autopilot_msgs__srv__SendMsgpackConfig_Response__init(autopilot_msgs__srv__SendMsgpackConfig_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // error_message
  if (!rosidl_generator_c__String__init(&msg->error_message)) {
    autopilot_msgs__srv__SendMsgpackConfig_Response__destroy(msg);
    return false;
  }
  return true;
}

void
autopilot_msgs__srv__SendMsgpackConfig_Response__fini(autopilot_msgs__srv__SendMsgpackConfig_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // error_message
  rosidl_generator_c__String__fini(&msg->error_message);
}

autopilot_msgs__srv__SendMsgpackConfig_Response *
autopilot_msgs__srv__SendMsgpackConfig_Response__create()
{
  autopilot_msgs__srv__SendMsgpackConfig_Response * msg = (autopilot_msgs__srv__SendMsgpackConfig_Response *)malloc(sizeof(autopilot_msgs__srv__SendMsgpackConfig_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autopilot_msgs__srv__SendMsgpackConfig_Response));
  bool success = autopilot_msgs__srv__SendMsgpackConfig_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autopilot_msgs__srv__SendMsgpackConfig_Response__destroy(autopilot_msgs__srv__SendMsgpackConfig_Response * msg)
{
  if (msg) {
    autopilot_msgs__srv__SendMsgpackConfig_Response__fini(msg);
  }
  free(msg);
}


bool
autopilot_msgs__srv__SendMsgpackConfig_Response__Sequence__init(autopilot_msgs__srv__SendMsgpackConfig_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autopilot_msgs__srv__SendMsgpackConfig_Response * data = NULL;
  if (size) {
    data = (autopilot_msgs__srv__SendMsgpackConfig_Response *)calloc(size, sizeof(autopilot_msgs__srv__SendMsgpackConfig_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autopilot_msgs__srv__SendMsgpackConfig_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autopilot_msgs__srv__SendMsgpackConfig_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
autopilot_msgs__srv__SendMsgpackConfig_Response__Sequence__fini(autopilot_msgs__srv__SendMsgpackConfig_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autopilot_msgs__srv__SendMsgpackConfig_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

autopilot_msgs__srv__SendMsgpackConfig_Response__Sequence *
autopilot_msgs__srv__SendMsgpackConfig_Response__Sequence__create(size_t size)
{
  autopilot_msgs__srv__SendMsgpackConfig_Response__Sequence * array = (autopilot_msgs__srv__SendMsgpackConfig_Response__Sequence *)malloc(sizeof(autopilot_msgs__srv__SendMsgpackConfig_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autopilot_msgs__srv__SendMsgpackConfig_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autopilot_msgs__srv__SendMsgpackConfig_Response__Sequence__destroy(autopilot_msgs__srv__SendMsgpackConfig_Response__Sequence * array)
{
  if (array) {
    autopilot_msgs__srv__SendMsgpackConfig_Response__Sequence__fini(array);
  }
  free(array);
}
