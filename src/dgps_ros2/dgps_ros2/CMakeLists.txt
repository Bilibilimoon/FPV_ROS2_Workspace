cmake_minimum_required(VERSION 3.5)
project(dgps_ros2)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)



if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # uncomment the line when a copyright and license is not present in all source files
  #set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # uncomment the line when this package is not in a git repo
  #set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()



include_directories(
  include
  ${colcon_INCLUDE_DIRS}
)

find_package(std_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(Threads)

find_package(rclcpp REQUIRED)
find_package(rclcpp_components REQUIRED)
find_package(dgps_msgs REQUIRED)

set(dependencies
  "std_msgs"
  "sensor_msgs"
  "rclcpp"
  "rclcpp_components"
  "dgps_msgs"
)

add_library(
  ${PROJECT_NAME}_node SHARED
  src/dgps_ros2_node.cpp 
  src/ntripclient.cpp
  src/serial.cpp
  )

ament_target_dependencies(${PROJECT_NAME}_node ${dependencies})

rclcpp_components_register_node(${PROJECT_NAME}_node
  PLUGIN "dgps_ros2_ns::DGpsRos2"
  EXECUTABLE dgps_ros2_exe)

install(
  TARGETS
  ${PROJECT_NAME}_node
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
)

install(DIRECTORY include/
  DESTINATION include)

install(DIRECTORY launch
  DESTINATION share/${PROJECT_NAME}
)

ament_export_dependencies(builtin_interfaces rclcpp rclcpp_components std_msgs sensor_msgs dgps_msgs)
ament_export_include_directories(include)
ament_export_libraries(${PROJECT_NAME}_node)


ament_package()
