#ifndef DD_MOTION_MSGS__VISIBILITY_CONTROL_H_
#define DD_MOTION_MSGS__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define DD_MOTION_MSGS_EXPORT __attribute__ ((dllexport))
    #define DD_MOTION_MSGS_IMPORT __attribute__ ((dllimport))
  #else
    #define DD_MOTION_MSGS_EXPORT __declspec(dllexport)
    #define DD_MOTION_MSGS_IMPORT __declspec(dllimport)
  #endif
  #ifdef DD_MOTION_MSGS_BUILDING_LIBRARY
    #define DD_MOTION_MSGS_PUBLIC DD_MOTION_MSGS_EXPORT
  #else
    #define DD_MOTION_MSGS_PUBLIC DD_MOTION_MSGS_IMPORT
  #endif
  #define DD_MOTION_MSGS_PUBLIC_TYPE DD_MOTION_MSGS_PUBLIC
  #define DD_MOTION_MSGS_LOCAL
#else
  #define DD_MOTION_MSGS_EXPORT __attribute__ ((visibility("default")))
  #define DD_MOTION_MSGS_IMPORT
  #if __GNUC__ >= 4
    #define DD_MOTION_MSGS_PUBLIC __attribute__ ((visibility("default")))
    #define DD_MOTION_MSGS_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define DD_MOTION_MSGS_PUBLIC
    #define DD_MOTION_MSGS_LOCAL
  #endif
  #define DD_MOTION_MSGS_PUBLIC_TYPE
#endif
#endif  // DD_MOTION_MSGS__VISIBILITY_CONTROL_H_
// Generated 20-Nov-2025 17:39:00
 