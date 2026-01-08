// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dd_motion_msgs:msg/PoseCtrl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dd_motion_msgs/msg/pose_ctrl.h"


#ifndef DD_MOTION_MSGS__MSG__DETAIL__POSE_CTRL__STRUCT_H_
#define DD_MOTION_MSGS__MSG__DETAIL__POSE_CTRL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/PoseCtrl in the package dd_motion_msgs.
/**
  * Front Left
 */
typedef struct dd_motion_msgs__msg__PoseCtrl
{
  double fl_x;
  double fl_z;
  /// Front Right
  double fr_x;
  double fr_z;
  /// Front Body
  double f_pitch;
  double f_delta;
  /// Rear Left
  double bl_x;
  double bl_z;
  /// Rear Right
  double br_x;
  double br_z;
  /// Rear Body
  double b_pitch;
  double b_delta;
} dd_motion_msgs__msg__PoseCtrl;

// Struct for a sequence of dd_motion_msgs__msg__PoseCtrl.
typedef struct dd_motion_msgs__msg__PoseCtrl__Sequence
{
  dd_motion_msgs__msg__PoseCtrl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dd_motion_msgs__msg__PoseCtrl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DD_MOTION_MSGS__MSG__DETAIL__POSE_CTRL__STRUCT_H_
