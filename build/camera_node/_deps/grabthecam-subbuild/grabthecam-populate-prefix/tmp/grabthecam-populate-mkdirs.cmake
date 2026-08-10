# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/isc/tk2_ws/build/camera_node/_deps/grabthecam-src"
  "/home/isc/tk2_ws/build/camera_node/_deps/grabthecam-build"
  "/home/isc/tk2_ws/build/camera_node/_deps/grabthecam-subbuild/grabthecam-populate-prefix"
  "/home/isc/tk2_ws/build/camera_node/_deps/grabthecam-subbuild/grabthecam-populate-prefix/tmp"
  "/home/isc/tk2_ws/build/camera_node/_deps/grabthecam-subbuild/grabthecam-populate-prefix/src/grabthecam-populate-stamp"
  "/home/isc/tk2_ws/build/camera_node/_deps/grabthecam-subbuild/grabthecam-populate-prefix/src"
  "/home/isc/tk2_ws/build/camera_node/_deps/grabthecam-subbuild/grabthecam-populate-prefix/src/grabthecam-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/isc/tk2_ws/build/camera_node/_deps/grabthecam-subbuild/grabthecam-populate-prefix/src/grabthecam-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/isc/tk2_ws/build/camera_node/_deps/grabthecam-subbuild/grabthecam-populate-prefix/src/grabthecam-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
