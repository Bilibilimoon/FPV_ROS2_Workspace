// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fpv_msgs:msg/MoonlyFpv.idl
// generated code does not contain a copyright notice

#ifndef FPV_MSGS__MSG__DETAIL__MOONLY_FPV__STRUCT_HPP_
#define FPV_MSGS__MSG__DETAIL__MOONLY_FPV__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__fpv_msgs__msg__MoonlyFpv __attribute__((deprecated))
#else
# define DEPRECATED__fpv_msgs__msg__MoonlyFpv __declspec(deprecated)
#endif

namespace fpv_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MoonlyFpv_
{
  using Type = MoonlyFpv_<ContainerAllocator>;

  explicit MoonlyFpv_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->boat_linear_speed = 0.0;
      this->boat_angular_speed = 0.0;
      this->pwm_left = 0l;
      this->pwm_right = 0l;
      this->aim_gps_lng = 0.0;
      this->aim_gps_lat = 0.0;
      this->fpv_gps_lng = 0.0;
      this->fpv_gps_lat = 0.0;
      this->fpv_gps_hight = 0.0;
      this->fpv_gps_face = 0.0;
      this->manual_fpv_rol = 0.0;
      this->manual_fpv_pit = 0.0;
      this->manual_fpv_yaw = 0.0;
      this->manual_fpv_thr = 0.0;
      this->auto_fpv_rol = 0.0;
      this->auto_fpv_pit = 0.0;
      this->auto_fpv_yaw = 0.0;
      this->auto_fpv_thr = 0.0;
      this->control_model = 0l;
      this->fpv_model = 0l;
    }
  }

  explicit MoonlyFpv_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->boat_linear_speed = 0.0;
      this->boat_angular_speed = 0.0;
      this->pwm_left = 0l;
      this->pwm_right = 0l;
      this->aim_gps_lng = 0.0;
      this->aim_gps_lat = 0.0;
      this->fpv_gps_lng = 0.0;
      this->fpv_gps_lat = 0.0;
      this->fpv_gps_hight = 0.0;
      this->fpv_gps_face = 0.0;
      this->manual_fpv_rol = 0.0;
      this->manual_fpv_pit = 0.0;
      this->manual_fpv_yaw = 0.0;
      this->manual_fpv_thr = 0.0;
      this->auto_fpv_rol = 0.0;
      this->auto_fpv_pit = 0.0;
      this->auto_fpv_yaw = 0.0;
      this->auto_fpv_thr = 0.0;
      this->control_model = 0l;
      this->fpv_model = 0l;
    }
  }

  // field types and members
  using _boat_linear_speed_type =
    double;
  _boat_linear_speed_type boat_linear_speed;
  using _boat_angular_speed_type =
    double;
  _boat_angular_speed_type boat_angular_speed;
  using _pwm_left_type =
    int32_t;
  _pwm_left_type pwm_left;
  using _pwm_right_type =
    int32_t;
  _pwm_right_type pwm_right;
  using _aim_gps_lng_type =
    double;
  _aim_gps_lng_type aim_gps_lng;
  using _aim_gps_lat_type =
    double;
  _aim_gps_lat_type aim_gps_lat;
  using _fpv_gps_lng_type =
    double;
  _fpv_gps_lng_type fpv_gps_lng;
  using _fpv_gps_lat_type =
    double;
  _fpv_gps_lat_type fpv_gps_lat;
  using _fpv_gps_hight_type =
    double;
  _fpv_gps_hight_type fpv_gps_hight;
  using _fpv_gps_face_type =
    double;
  _fpv_gps_face_type fpv_gps_face;
  using _manual_fpv_rol_type =
    double;
  _manual_fpv_rol_type manual_fpv_rol;
  using _manual_fpv_pit_type =
    double;
  _manual_fpv_pit_type manual_fpv_pit;
  using _manual_fpv_yaw_type =
    double;
  _manual_fpv_yaw_type manual_fpv_yaw;
  using _manual_fpv_thr_type =
    double;
  _manual_fpv_thr_type manual_fpv_thr;
  using _auto_fpv_rol_type =
    double;
  _auto_fpv_rol_type auto_fpv_rol;
  using _auto_fpv_pit_type =
    double;
  _auto_fpv_pit_type auto_fpv_pit;
  using _auto_fpv_yaw_type =
    double;
  _auto_fpv_yaw_type auto_fpv_yaw;
  using _auto_fpv_thr_type =
    double;
  _auto_fpv_thr_type auto_fpv_thr;
  using _control_model_type =
    int32_t;
  _control_model_type control_model;
  using _fpv_model_type =
    int32_t;
  _fpv_model_type fpv_model;

  // setters for named parameter idiom
  Type & set__boat_linear_speed(
    const double & _arg)
  {
    this->boat_linear_speed = _arg;
    return *this;
  }
  Type & set__boat_angular_speed(
    const double & _arg)
  {
    this->boat_angular_speed = _arg;
    return *this;
  }
  Type & set__pwm_left(
    const int32_t & _arg)
  {
    this->pwm_left = _arg;
    return *this;
  }
  Type & set__pwm_right(
    const int32_t & _arg)
  {
    this->pwm_right = _arg;
    return *this;
  }
  Type & set__aim_gps_lng(
    const double & _arg)
  {
    this->aim_gps_lng = _arg;
    return *this;
  }
  Type & set__aim_gps_lat(
    const double & _arg)
  {
    this->aim_gps_lat = _arg;
    return *this;
  }
  Type & set__fpv_gps_lng(
    const double & _arg)
  {
    this->fpv_gps_lng = _arg;
    return *this;
  }
  Type & set__fpv_gps_lat(
    const double & _arg)
  {
    this->fpv_gps_lat = _arg;
    return *this;
  }
  Type & set__fpv_gps_hight(
    const double & _arg)
  {
    this->fpv_gps_hight = _arg;
    return *this;
  }
  Type & set__fpv_gps_face(
    const double & _arg)
  {
    this->fpv_gps_face = _arg;
    return *this;
  }
  Type & set__manual_fpv_rol(
    const double & _arg)
  {
    this->manual_fpv_rol = _arg;
    return *this;
  }
  Type & set__manual_fpv_pit(
    const double & _arg)
  {
    this->manual_fpv_pit = _arg;
    return *this;
  }
  Type & set__manual_fpv_yaw(
    const double & _arg)
  {
    this->manual_fpv_yaw = _arg;
    return *this;
  }
  Type & set__manual_fpv_thr(
    const double & _arg)
  {
    this->manual_fpv_thr = _arg;
    return *this;
  }
  Type & set__auto_fpv_rol(
    const double & _arg)
  {
    this->auto_fpv_rol = _arg;
    return *this;
  }
  Type & set__auto_fpv_pit(
    const double & _arg)
  {
    this->auto_fpv_pit = _arg;
    return *this;
  }
  Type & set__auto_fpv_yaw(
    const double & _arg)
  {
    this->auto_fpv_yaw = _arg;
    return *this;
  }
  Type & set__auto_fpv_thr(
    const double & _arg)
  {
    this->auto_fpv_thr = _arg;
    return *this;
  }
  Type & set__control_model(
    const int32_t & _arg)
  {
    this->control_model = _arg;
    return *this;
  }
  Type & set__fpv_model(
    const int32_t & _arg)
  {
    this->fpv_model = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fpv_msgs::msg::MoonlyFpv_<ContainerAllocator> *;
  using ConstRawPtr =
    const fpv_msgs::msg::MoonlyFpv_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fpv_msgs::msg::MoonlyFpv_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fpv_msgs::msg::MoonlyFpv_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fpv_msgs::msg::MoonlyFpv_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fpv_msgs::msg::MoonlyFpv_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fpv_msgs::msg::MoonlyFpv_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fpv_msgs::msg::MoonlyFpv_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fpv_msgs::msg::MoonlyFpv_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fpv_msgs::msg::MoonlyFpv_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fpv_msgs__msg__MoonlyFpv
    std::shared_ptr<fpv_msgs::msg::MoonlyFpv_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fpv_msgs__msg__MoonlyFpv
    std::shared_ptr<fpv_msgs::msg::MoonlyFpv_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoonlyFpv_ & other) const
  {
    if (this->boat_linear_speed != other.boat_linear_speed) {
      return false;
    }
    if (this->boat_angular_speed != other.boat_angular_speed) {
      return false;
    }
    if (this->pwm_left != other.pwm_left) {
      return false;
    }
    if (this->pwm_right != other.pwm_right) {
      return false;
    }
    if (this->aim_gps_lng != other.aim_gps_lng) {
      return false;
    }
    if (this->aim_gps_lat != other.aim_gps_lat) {
      return false;
    }
    if (this->fpv_gps_lng != other.fpv_gps_lng) {
      return false;
    }
    if (this->fpv_gps_lat != other.fpv_gps_lat) {
      return false;
    }
    if (this->fpv_gps_hight != other.fpv_gps_hight) {
      return false;
    }
    if (this->fpv_gps_face != other.fpv_gps_face) {
      return false;
    }
    if (this->manual_fpv_rol != other.manual_fpv_rol) {
      return false;
    }
    if (this->manual_fpv_pit != other.manual_fpv_pit) {
      return false;
    }
    if (this->manual_fpv_yaw != other.manual_fpv_yaw) {
      return false;
    }
    if (this->manual_fpv_thr != other.manual_fpv_thr) {
      return false;
    }
    if (this->auto_fpv_rol != other.auto_fpv_rol) {
      return false;
    }
    if (this->auto_fpv_pit != other.auto_fpv_pit) {
      return false;
    }
    if (this->auto_fpv_yaw != other.auto_fpv_yaw) {
      return false;
    }
    if (this->auto_fpv_thr != other.auto_fpv_thr) {
      return false;
    }
    if (this->control_model != other.control_model) {
      return false;
    }
    if (this->fpv_model != other.fpv_model) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoonlyFpv_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoonlyFpv_

// alias to use template instance with default allocator
using MoonlyFpv =
  fpv_msgs::msg::MoonlyFpv_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fpv_msgs

#endif  // FPV_MSGS__MSG__DETAIL__MOONLY_FPV__STRUCT_HPP_
