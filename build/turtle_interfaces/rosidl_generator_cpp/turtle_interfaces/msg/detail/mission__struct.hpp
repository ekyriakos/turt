// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtle_interfaces:msg/Mission.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__MISSION__STRUCT_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__MISSION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__turtle_interfaces__msg__Mission __attribute__((deprecated))
#else
# define DEPRECATED__turtle_interfaces__msg__Mission __declspec(deprecated)
#endif

namespace turtle_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Mission_
{
  using Type = Mission_<ContainerAllocator>;

  explicit Mission_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mission = 0;
    }
  }

  explicit Mission_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mission = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _mission_type =
    int8_t;
  _mission_type mission;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__mission(
    const int8_t & _arg)
  {
    this->mission = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t ERROR_MISSION =
    -1;
  static constexpr int8_t NO_MISSION =
    0;
  static constexpr int8_t ACCELERATION =
    1;
  static constexpr int8_t SKIDPAD =
    2;
  static constexpr int8_t AUTOCROSS =
    3;
  static constexpr int8_t TRACKDRIVE =
    4;
  static constexpr int8_t EBS_TEST =
    5;
  static constexpr int8_t INSPECTION =
    6;
  static constexpr int8_t MANUAL_MISSION =
    7;

  // pointer types
  using RawPtr =
    turtle_interfaces::msg::Mission_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_interfaces::msg::Mission_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_interfaces::msg::Mission_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_interfaces::msg::Mission_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::Mission_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::Mission_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::Mission_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::Mission_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_interfaces::msg::Mission_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_interfaces::msg::Mission_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_interfaces__msg__Mission
    std::shared_ptr<turtle_interfaces::msg::Mission_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_interfaces__msg__Mission
    std::shared_ptr<turtle_interfaces::msg::Mission_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Mission_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->mission != other.mission) {
      return false;
    }
    return true;
  }
  bool operator!=(const Mission_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Mission_

// alias to use template instance with default allocator
using Mission =
  turtle_interfaces::msg::Mission_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int8_t Mission_<ContainerAllocator>::ERROR_MISSION;
template<typename ContainerAllocator>
constexpr int8_t Mission_<ContainerAllocator>::NO_MISSION;
template<typename ContainerAllocator>
constexpr int8_t Mission_<ContainerAllocator>::ACCELERATION;
template<typename ContainerAllocator>
constexpr int8_t Mission_<ContainerAllocator>::SKIDPAD;
template<typename ContainerAllocator>
constexpr int8_t Mission_<ContainerAllocator>::AUTOCROSS;
template<typename ContainerAllocator>
constexpr int8_t Mission_<ContainerAllocator>::TRACKDRIVE;
template<typename ContainerAllocator>
constexpr int8_t Mission_<ContainerAllocator>::EBS_TEST;
template<typename ContainerAllocator>
constexpr int8_t Mission_<ContainerAllocator>::INSPECTION;
template<typename ContainerAllocator>
constexpr int8_t Mission_<ContainerAllocator>::MANUAL_MISSION;

}  // namespace msg

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__MISSION__STRUCT_HPP_
