// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dgps_msgs:msg/Gnvtg.idl
// generated code does not contain a copyright notice

#ifndef DGPS_MSGS__MSG__DETAIL__GNVTG__STRUCT_HPP_
#define DGPS_MSGS__MSG__DETAIL__GNVTG__STRUCT_HPP_

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
# define DEPRECATED__dgps_msgs__msg__Gnvtg __attribute__((deprecated))
#else
# define DEPRECATED__dgps_msgs__msg__Gnvtg __declspec(deprecated)
#endif

namespace dgps_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Gnvtg_
{
  using Type = Gnvtg_<ContainerAllocator>;

  explicit Gnvtg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gnvtg = "";
      this->heading1 = 0.0;
      this->heading2 = 0.0;
      this->speed1 = 0.0;
      this->speed2 = 0.0;
      this->status = "";
    }
  }

  explicit Gnvtg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    gnvtg(_alloc),
    status(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gnvtg = "";
      this->heading1 = 0.0;
      this->heading2 = 0.0;
      this->speed1 = 0.0;
      this->speed2 = 0.0;
      this->status = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _gnvtg_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _gnvtg_type gnvtg;
  using _heading1_type =
    double;
  _heading1_type heading1;
  using _heading2_type =
    double;
  _heading2_type heading2;
  using _speed1_type =
    double;
  _speed1_type speed1;
  using _speed2_type =
    double;
  _speed2_type speed2;
  using _status_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _status_type status;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__gnvtg(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->gnvtg = _arg;
    return *this;
  }
  Type & set__heading1(
    const double & _arg)
  {
    this->heading1 = _arg;
    return *this;
  }
  Type & set__heading2(
    const double & _arg)
  {
    this->heading2 = _arg;
    return *this;
  }
  Type & set__speed1(
    const double & _arg)
  {
    this->speed1 = _arg;
    return *this;
  }
  Type & set__speed2(
    const double & _arg)
  {
    this->speed2 = _arg;
    return *this;
  }
  Type & set__status(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dgps_msgs::msg::Gnvtg_<ContainerAllocator> *;
  using ConstRawPtr =
    const dgps_msgs::msg::Gnvtg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dgps_msgs::msg::Gnvtg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dgps_msgs::msg::Gnvtg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dgps_msgs::msg::Gnvtg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dgps_msgs::msg::Gnvtg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dgps_msgs::msg::Gnvtg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dgps_msgs::msg::Gnvtg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dgps_msgs::msg::Gnvtg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dgps_msgs::msg::Gnvtg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dgps_msgs__msg__Gnvtg
    std::shared_ptr<dgps_msgs::msg::Gnvtg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dgps_msgs__msg__Gnvtg
    std::shared_ptr<dgps_msgs::msg::Gnvtg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Gnvtg_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->gnvtg != other.gnvtg) {
      return false;
    }
    if (this->heading1 != other.heading1) {
      return false;
    }
    if (this->heading2 != other.heading2) {
      return false;
    }
    if (this->speed1 != other.speed1) {
      return false;
    }
    if (this->speed2 != other.speed2) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const Gnvtg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Gnvtg_

// alias to use template instance with default allocator
using Gnvtg =
  dgps_msgs::msg::Gnvtg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dgps_msgs

#endif  // DGPS_MSGS__MSG__DETAIL__GNVTG__STRUCT_HPP_
