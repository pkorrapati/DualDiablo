// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from custom_msgs:msg/PoseCtrl.idl
// generated code does not contain a copyright notice

#include "custom_msgs/msg/detail/pose_ctrl__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
const rosidl_type_hash_t *
custom_msgs__msg__PoseCtrl__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2a, 0x59, 0x95, 0xb2, 0x5b, 0xa4, 0xdd, 0x4b,
      0x1c, 0xf6, 0xa3, 0xbc, 0xa3, 0x08, 0x5c, 0x61,
      0xbb, 0x97, 0xe9, 0x4a, 0x5c, 0xd9, 0x47, 0x0c,
      0xca, 0x87, 0xd3, 0x39, 0x30, 0xcf, 0xff, 0x7b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char custom_msgs__msg__PoseCtrl__TYPE_NAME[] = "custom_msgs/msg/PoseCtrl";

// Define type names, field names, and default values
static char custom_msgs__msg__PoseCtrl__FIELD_NAME__fl_x[] = "fl_x";
static char custom_msgs__msg__PoseCtrl__FIELD_NAME__fl_z[] = "fl_z";
static char custom_msgs__msg__PoseCtrl__FIELD_NAME__fr_x[] = "fr_x";
static char custom_msgs__msg__PoseCtrl__FIELD_NAME__fr_z[] = "fr_z";
static char custom_msgs__msg__PoseCtrl__FIELD_NAME__f_pitch[] = "f_pitch";
static char custom_msgs__msg__PoseCtrl__FIELD_NAME__f_delta[] = "f_delta";
static char custom_msgs__msg__PoseCtrl__FIELD_NAME__bl_x[] = "bl_x";
static char custom_msgs__msg__PoseCtrl__FIELD_NAME__bl_z[] = "bl_z";
static char custom_msgs__msg__PoseCtrl__FIELD_NAME__br_x[] = "br_x";
static char custom_msgs__msg__PoseCtrl__FIELD_NAME__br_z[] = "br_z";
static char custom_msgs__msg__PoseCtrl__FIELD_NAME__b_pitch[] = "b_pitch";
static char custom_msgs__msg__PoseCtrl__FIELD_NAME__b_delta[] = "b_delta";

static rosidl_runtime_c__type_description__Field custom_msgs__msg__PoseCtrl__FIELDS[] = {
  {
    {custom_msgs__msg__PoseCtrl__FIELD_NAME__fl_x, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_msgs__msg__PoseCtrl__FIELD_NAME__fl_z, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_msgs__msg__PoseCtrl__FIELD_NAME__fr_x, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_msgs__msg__PoseCtrl__FIELD_NAME__fr_z, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_msgs__msg__PoseCtrl__FIELD_NAME__f_pitch, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_msgs__msg__PoseCtrl__FIELD_NAME__f_delta, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_msgs__msg__PoseCtrl__FIELD_NAME__bl_x, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_msgs__msg__PoseCtrl__FIELD_NAME__bl_z, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_msgs__msg__PoseCtrl__FIELD_NAME__br_x, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_msgs__msg__PoseCtrl__FIELD_NAME__br_z, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_msgs__msg__PoseCtrl__FIELD_NAME__b_pitch, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_msgs__msg__PoseCtrl__FIELD_NAME__b_delta, 7, 7},
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
custom_msgs__msg__PoseCtrl__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_msgs__msg__PoseCtrl__TYPE_NAME, 24, 24},
      {custom_msgs__msg__PoseCtrl__FIELDS, 12, 12},
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
custom_msgs__msg__PoseCtrl__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_msgs__msg__PoseCtrl__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 333, 333},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_msgs__msg__PoseCtrl__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_msgs__msg__PoseCtrl__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
