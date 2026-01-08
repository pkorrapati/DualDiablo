// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dd_motion_msgs:msg/PoseCtrl.idl
// generated code does not contain a copyright notice

#include "dd_motion_msgs/msg/detail/pose_ctrl__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dd_motion_msgs
const rosidl_type_hash_t *
dd_motion_msgs__msg__PoseCtrl__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x66, 0x46, 0xad, 0xa5, 0x30, 0x95, 0xc7, 0x73,
      0x58, 0x8a, 0xbe, 0x24, 0x19, 0xcd, 0x0a, 0xe2,
      0x2b, 0xf9, 0xd3, 0xdc, 0x66, 0xa6, 0xa7, 0x75,
      0x00, 0xb6, 0x87, 0x3c, 0xf5, 0x03, 0x0f, 0xec,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char dd_motion_msgs__msg__PoseCtrl__TYPE_NAME[] = "dd_motion_msgs/msg/PoseCtrl";

// Define type names, field names, and default values
static char dd_motion_msgs__msg__PoseCtrl__FIELD_NAME__fl_x[] = "fl_x";
static char dd_motion_msgs__msg__PoseCtrl__FIELD_NAME__fl_z[] = "fl_z";
static char dd_motion_msgs__msg__PoseCtrl__FIELD_NAME__fr_x[] = "fr_x";
static char dd_motion_msgs__msg__PoseCtrl__FIELD_NAME__fr_z[] = "fr_z";
static char dd_motion_msgs__msg__PoseCtrl__FIELD_NAME__f_pitch[] = "f_pitch";
static char dd_motion_msgs__msg__PoseCtrl__FIELD_NAME__f_delta[] = "f_delta";
static char dd_motion_msgs__msg__PoseCtrl__FIELD_NAME__bl_x[] = "bl_x";
static char dd_motion_msgs__msg__PoseCtrl__FIELD_NAME__bl_z[] = "bl_z";
static char dd_motion_msgs__msg__PoseCtrl__FIELD_NAME__br_x[] = "br_x";
static char dd_motion_msgs__msg__PoseCtrl__FIELD_NAME__br_z[] = "br_z";
static char dd_motion_msgs__msg__PoseCtrl__FIELD_NAME__b_pitch[] = "b_pitch";
static char dd_motion_msgs__msg__PoseCtrl__FIELD_NAME__b_delta[] = "b_delta";

static rosidl_runtime_c__type_description__Field dd_motion_msgs__msg__PoseCtrl__FIELDS[] = {
  {
    {dd_motion_msgs__msg__PoseCtrl__FIELD_NAME__fl_x, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dd_motion_msgs__msg__PoseCtrl__FIELD_NAME__fl_z, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dd_motion_msgs__msg__PoseCtrl__FIELD_NAME__fr_x, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dd_motion_msgs__msg__PoseCtrl__FIELD_NAME__fr_z, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dd_motion_msgs__msg__PoseCtrl__FIELD_NAME__f_pitch, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dd_motion_msgs__msg__PoseCtrl__FIELD_NAME__f_delta, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dd_motion_msgs__msg__PoseCtrl__FIELD_NAME__bl_x, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dd_motion_msgs__msg__PoseCtrl__FIELD_NAME__bl_z, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dd_motion_msgs__msg__PoseCtrl__FIELD_NAME__br_x, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dd_motion_msgs__msg__PoseCtrl__FIELD_NAME__br_z, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dd_motion_msgs__msg__PoseCtrl__FIELD_NAME__b_pitch, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dd_motion_msgs__msg__PoseCtrl__FIELD_NAME__b_delta, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dd_motion_msgs__msg__PoseCtrl__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dd_motion_msgs__msg__PoseCtrl__TYPE_NAME, 27, 27},
      {dd_motion_msgs__msg__PoseCtrl__FIELDS, 12, 12},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Front Left\n"
  "float64        fl_x\n"
  "float64        fl_z\n"
  "\n"
  "# Front Right\n"
  "float64        fr_x\n"
  "float64        fr_z\n"
  "\n"
  "# Front Body\n"
  "float64        f_pitch\n"
  "float64        f_delta\n"
  "\n"
  "# Rear Left\n"
  "float64        bl_x\n"
  "float64        bl_z\n"
  "\n"
  "# Rear Right\n"
  "float64        br_x\n"
  "float64        br_z\n"
  "\n"
  "# Rear Body\n"
  "float64        b_pitch\n"
  "float64        b_delta";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dd_motion_msgs__msg__PoseCtrl__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dd_motion_msgs__msg__PoseCtrl__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 333, 333},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dd_motion_msgs__msg__PoseCtrl__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dd_motion_msgs__msg__PoseCtrl__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
