// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from dd_motion_msgs:msg/PoseCtrl.idl
// generated code does not contain a copyright notice
#ifndef DD_MOTION_MSGS__MSG__DETAIL__POSE_CTRL__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define DD_MOTION_MSGS__MSG__DETAIL__POSE_CTRL__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "dd_motion_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "dd_motion_msgs/msg/detail/pose_ctrl__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dd_motion_msgs
bool cdr_serialize_dd_motion_msgs__msg__PoseCtrl(
  const dd_motion_msgs__msg__PoseCtrl * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dd_motion_msgs
bool cdr_deserialize_dd_motion_msgs__msg__PoseCtrl(
  eprosima::fastcdr::Cdr &,
  dd_motion_msgs__msg__PoseCtrl * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dd_motion_msgs
size_t get_serialized_size_dd_motion_msgs__msg__PoseCtrl(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dd_motion_msgs
size_t max_serialized_size_dd_motion_msgs__msg__PoseCtrl(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dd_motion_msgs
bool cdr_serialize_key_dd_motion_msgs__msg__PoseCtrl(
  const dd_motion_msgs__msg__PoseCtrl * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dd_motion_msgs
size_t get_serialized_size_key_dd_motion_msgs__msg__PoseCtrl(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dd_motion_msgs
size_t max_serialized_size_key_dd_motion_msgs__msg__PoseCtrl(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dd_motion_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dd_motion_msgs, msg, PoseCtrl)();

#ifdef __cplusplus
}
#endif

#endif  // DD_MOTION_MSGS__MSG__DETAIL__POSE_CTRL__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
