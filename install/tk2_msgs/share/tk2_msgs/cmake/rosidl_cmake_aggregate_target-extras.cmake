# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target tk2_msgs::tk2_msgs
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${tk2_msgs_TARGETS}.
if(tk2_msgs_TARGETS AND NOT TARGET tk2_msgs::tk2_msgs)
  add_library(tk2_msgs::tk2_msgs INTERFACE IMPORTED)
  set_target_properties(tk2_msgs::tk2_msgs PROPERTIES
    INTERFACE_LINK_LIBRARIES "${tk2_msgs_TARGETS}")
endif()
