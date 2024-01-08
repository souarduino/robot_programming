// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from detection_interfaces:msg/InferenceResult.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "detection_interfaces/msg/detail/inference_result__struct.h"
#include "detection_interfaces/msg/detail/inference_result__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace detection_interfaces
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _InferenceResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _InferenceResult_type_support_ids_t;

static const _InferenceResult_type_support_ids_t _InferenceResult_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _InferenceResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _InferenceResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _InferenceResult_type_support_symbol_names_t _InferenceResult_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, detection_interfaces, msg, InferenceResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, detection_interfaces, msg, InferenceResult)),
  }
};

typedef struct _InferenceResult_type_support_data_t
{
  void * data[2];
} _InferenceResult_type_support_data_t;

static _InferenceResult_type_support_data_t _InferenceResult_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _InferenceResult_message_typesupport_map = {
  2,
  "detection_interfaces",
  &_InferenceResult_message_typesupport_ids.typesupport_identifier[0],
  &_InferenceResult_message_typesupport_symbol_names.symbol_name[0],
  &_InferenceResult_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t InferenceResult_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_InferenceResult_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace detection_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, detection_interfaces, msg, InferenceResult)() {
  return &::detection_interfaces::msg::rosidl_typesupport_c::InferenceResult_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
