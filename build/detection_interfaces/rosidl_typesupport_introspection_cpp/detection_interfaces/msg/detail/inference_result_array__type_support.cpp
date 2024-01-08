// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from detection_interfaces:msg/InferenceResultArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "detection_interfaces/msg/detail/inference_result_array__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace detection_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void InferenceResultArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) detection_interfaces::msg::InferenceResultArray(_init);
}

void InferenceResultArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<detection_interfaces::msg::InferenceResultArray *>(message_memory);
  typed_message->~InferenceResultArray();
}

size_t size_function__InferenceResultArray__results(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<detection_interfaces::msg::InferenceResult> *>(untyped_member);
  return member->size();
}

const void * get_const_function__InferenceResultArray__results(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<detection_interfaces::msg::InferenceResult> *>(untyped_member);
  return &member[index];
}

void * get_function__InferenceResultArray__results(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<detection_interfaces::msg::InferenceResult> *>(untyped_member);
  return &member[index];
}

void fetch_function__InferenceResultArray__results(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const detection_interfaces::msg::InferenceResult *>(
    get_const_function__InferenceResultArray__results(untyped_member, index));
  auto & value = *reinterpret_cast<detection_interfaces::msg::InferenceResult *>(untyped_value);
  value = item;
}

void assign_function__InferenceResultArray__results(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<detection_interfaces::msg::InferenceResult *>(
    get_function__InferenceResultArray__results(untyped_member, index));
  const auto & value = *reinterpret_cast<const detection_interfaces::msg::InferenceResult *>(untyped_value);
  item = value;
}

void resize_function__InferenceResultArray__results(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<detection_interfaces::msg::InferenceResult> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember InferenceResultArray_message_member_array[1] = {
  {
    "results",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<detection_interfaces::msg::InferenceResult>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(detection_interfaces::msg::InferenceResultArray, results),  // bytes offset in struct
    nullptr,  // default value
    size_function__InferenceResultArray__results,  // size() function pointer
    get_const_function__InferenceResultArray__results,  // get_const(index) function pointer
    get_function__InferenceResultArray__results,  // get(index) function pointer
    fetch_function__InferenceResultArray__results,  // fetch(index, &value) function pointer
    assign_function__InferenceResultArray__results,  // assign(index, value) function pointer
    resize_function__InferenceResultArray__results  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers InferenceResultArray_message_members = {
  "detection_interfaces::msg",  // message namespace
  "InferenceResultArray",  // message name
  1,  // number of fields
  sizeof(detection_interfaces::msg::InferenceResultArray),
  InferenceResultArray_message_member_array,  // message members
  InferenceResultArray_init_function,  // function to initialize message memory (memory has to be allocated)
  InferenceResultArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t InferenceResultArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &InferenceResultArray_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace detection_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<detection_interfaces::msg::InferenceResultArray>()
{
  return &::detection_interfaces::msg::rosidl_typesupport_introspection_cpp::InferenceResultArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, detection_interfaces, msg, InferenceResultArray)() {
  return &::detection_interfaces::msg::rosidl_typesupport_introspection_cpp::InferenceResultArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
