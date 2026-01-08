// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from dd_motion_msgs:msg/PoseCtrl.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "dd_motion_msgs/msg/detail/pose_ctrl__rosidl_typesupport_introspection_c.h"
#include "dd_motion_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "dd_motion_msgs/msg/detail/pose_ctrl__functions.h"
#include "dd_motion_msgs/msg/detail/pose_ctrl__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void dd_motion_msgs__msg__PoseCtrl__rosidl_typesupport_introspection_c__PoseCtrl_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dd_motion_msgs__msg__PoseCtrl__init(message_memory);
}

void dd_motion_msgs__msg__PoseCtrl__rosidl_typesupport_introspection_c__PoseCtrl_fini_function(void * message_memory)
{
  dd_motion_msgs__msg__PoseCtrl__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember dd_motion_msgs__msg__PoseCtrl__rosidl_typesupport_introspection_c__PoseCtrl_message_member_array[12] = {
  {
    "fl_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dd_motion_msgs__msg__PoseCtrl, fl_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fl_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dd_motion_msgs__msg__PoseCtrl, fl_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fr_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dd_motion_msgs__msg__PoseCtrl, fr_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fr_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dd_motion_msgs__msg__PoseCtrl, fr_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "f_pitch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dd_motion_msgs__msg__PoseCtrl, f_pitch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "f_delta",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dd_motion_msgs__msg__PoseCtrl, f_delta),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bl_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dd_motion_msgs__msg__PoseCtrl, bl_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bl_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dd_motion_msgs__msg__PoseCtrl, bl_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "br_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dd_motion_msgs__msg__PoseCtrl, br_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "br_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dd_motion_msgs__msg__PoseCtrl, br_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "b_pitch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dd_motion_msgs__msg__PoseCtrl, b_pitch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "b_delta",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dd_motion_msgs__msg__PoseCtrl, b_delta),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dd_motion_msgs__msg__PoseCtrl__rosidl_typesupport_introspection_c__PoseCtrl_message_members = {
  "dd_motion_msgs__msg",  // message namespace
  "PoseCtrl",  // message name
  12,  // number of fields
  sizeof(dd_motion_msgs__msg__PoseCtrl),
  false,  // has_any_key_member_
  dd_motion_msgs__msg__PoseCtrl__rosidl_typesupport_introspection_c__PoseCtrl_message_member_array,  // message members
  dd_motion_msgs__msg__PoseCtrl__rosidl_typesupport_introspection_c__PoseCtrl_init_function,  // function to initialize message memory (memory has to be allocated)
  dd_motion_msgs__msg__PoseCtrl__rosidl_typesupport_introspection_c__PoseCtrl_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dd_motion_msgs__msg__PoseCtrl__rosidl_typesupport_introspection_c__PoseCtrl_message_type_support_handle = {
  0,
  &dd_motion_msgs__msg__PoseCtrl__rosidl_typesupport_introspection_c__PoseCtrl_message_members,
  get_message_typesupport_handle_function,
  &dd_motion_msgs__msg__PoseCtrl__get_type_hash,
  &dd_motion_msgs__msg__PoseCtrl__get_type_description,
  &dd_motion_msgs__msg__PoseCtrl__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dd_motion_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dd_motion_msgs, msg, PoseCtrl)() {
  if (!dd_motion_msgs__msg__PoseCtrl__rosidl_typesupport_introspection_c__PoseCtrl_message_type_support_handle.typesupport_identifier) {
    dd_motion_msgs__msg__PoseCtrl__rosidl_typesupport_introspection_c__PoseCtrl_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dd_motion_msgs__msg__PoseCtrl__rosidl_typesupport_introspection_c__PoseCtrl_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
