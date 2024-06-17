// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dgps_msgs:msg/Gpfpd.idl
// generated code does not contain a copyright notice

#ifndef DGPS_MSGS__MSG__DETAIL__GPFPD__STRUCT_HPP_
#define DGPS_MSGS__MSG__DETAIL__GPFPD__STRUCT_HPP_

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
# define DEPRECATED__dgps_msgs__msg__Gpfpd __attribute__((deprecated))
#else
# define DEPRECATED__dgps_msgs__msg__Gpfpd __declspec(deprecated)
#endif

namespace dgps_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Gpfpd_
{
  using Type = Gpfpd_<ContainerAllocator>;

  explicit Gpfpd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gpfpd = "";
      this->heading = 0.0;
      this->pitch = 0.0;
      this->roll = 0.0;
      this->lattitude = 0.0;
      this->longitude = 0.0;
      this->altitude = 0.0;
      this->velocity_east = 0.0;
      this->velocity_north = 0.0;
      this->velocity_up = 0.0;
      this->baseline = 0.0;
      this->nsv1 = 0;
      this->nsv2 = 0;
      this->status = 0;
    }
  }

  explicit Gpfpd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    gpfpd(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gpfpd = "";
      this->heading = 0.0;
      this->pitch = 0.0;
      this->roll = 0.0;
      this->lattitude = 0.0;
      this->longitude = 0.0;
      this->altitude = 0.0;
      this->velocity_east = 0.0;
      this->velocity_north = 0.0;
      this->velocity_up = 0.0;
      this->baseline = 0.0;
      this->nsv1 = 0;
      this->nsv2 = 0;
      this->status = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _gpfpd_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _gpfpd_type gpfpd;
  using _heading_type =
    double;
  _heading_type heading;
  using _pitch_type =
    double;
  _pitch_type pitch;
  using _roll_type =
    double;
  _roll_type roll;
  using _lattitude_type =
    double;
  _lattitude_type lattitude;
  using _longitude_type =
    double;
  _longitude_type longitude;
  using _altitude_type =
    double;
  _altitude_type altitude;
  using _velocity_east_type =
    double;
  _velocity_east_type velocity_east;
  using _velocity_north_type =
    double;
  _velocity_north_type velocity_north;
  using _velocity_up_type =
    double;
  _velocity_up_type velocity_up;
  using _baseline_type =
    double;
  _baseline_type baseline;
  using _nsv1_type =
    uint8_t;
  _nsv1_type nsv1;
  using _nsv2_type =
    uint8_t;
  _nsv2_type nsv2;
  using _status_type =
    uint8_t;
  _status_type status;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__gpfpd(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->gpfpd = _arg;
    return *this;
  }
  Type & set__heading(
    const double & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__pitch(
    const double & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__roll(
    const double & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__lattitude(
    const double & _arg)
  {
    this->lattitude = _arg;
    return *this;
  }
  Type & set__longitude(
    const double & _arg)
  {
    this->longitude = _arg;
    return *this;
  }
  Type & set__altitude(
    const double & _arg)
  {
    this->altitude = _arg;
    return *this;
  }
  Type & set__velocity_east(
    const double & _arg)
  {
    this->velocity_east = _arg;
    return *this;
  }
  Type & set__velocity_north(
    const double & _arg)
  {
    this->velocity_north = _arg;
    return *this;
  }
  Type & set__velocity_up(
    const double & _arg)
  {
    this->velocity_up = _arg;
    return *this;
  }
  Type & set__baseline(
    const double & _arg)
  {
    this->baseline = _arg;
    return *this;
  }
  Type & set__nsv1(
    const uint8_t & _arg)
  {
    this->nsv1 = _arg;
    return *this;
  }
  Type & set__nsv2(
    const uint8_t & _arg)
  {
    this->nsv2 = _arg;
    return *this;
  }
  Type & set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dgps_msgs::msg::Gpfpd_<ContainerAllocator> *;
  using ConstRawPtr =
    const dgps_msgs::msg::Gpfpd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dgps_msgs::msg::Gpfpd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dgps_msgs::msg::Gpfpd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dgps_msgs::msg::Gpfpd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dgps_msgs::msg::Gpfpd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dgps_msgs::msg::Gpfpd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dgps_msgs::msg::Gpfpd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dgps_msgs::msg::Gpfpd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dgps_msgs::msg::Gpfpd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dgps_msgs__msg__Gpfpd
    std::shared_ptr<dgps_msgs::msg::Gpfpd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dgps_msgs__msg__Gpfpd
    std::shared_ptr<dgps_msgs::msg::Gpfpd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Gpfpd_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->gpfpd != other.gpfpd) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->lattitude != other.lattitude) {
      return false;
    }
    if (this->longitude != other.longitude) {
      return false;
    }
    if (this->altitude != other.altitude) {
      return false;
    }
    if (this->velocity_east != other.velocity_east) {
      return false;
    }
    if (this->velocity_north != other.velocity_north) {
      return false;
    }
    if (this->velocity_up != other.velocity_up) {
      return false;
    }
    if (this->baseline != other.baseline) {
      return false;
    }
    if (this->nsv1 != other.nsv1) {
      return false;
    }
    if (this->nsv2 != other.nsv2) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const Gpfpd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Gpfpd_

// alias to use template instance with default allocator
using Gpfpd =
  dgps_msgs::msg::Gpfpd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dgps_msgs

#endif  // DGPS_MSGS__MSG__DETAIL__GPFPD__STRUCT_HPP_
