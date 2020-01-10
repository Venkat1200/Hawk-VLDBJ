# Install script for directory: /home/gurumurt/Hawk-VLDBJ/source/lib/cogadb/src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/gurumurt/Hawk-VLDBJ/source/lib/cogadb/src/backends/cmake_install.cmake")
  include("/home/gurumurt/Hawk-VLDBJ/source/lib/cogadb/src/compression/cmake_install.cmake")
  include("/home/gurumurt/Hawk-VLDBJ/source/lib/cogadb/src/core/cmake_install.cmake")
  include("/home/gurumurt/Hawk-VLDBJ/source/lib/cogadb/src/hardware_optimizations/cmake_install.cmake")
  include("/home/gurumurt/Hawk-VLDBJ/source/lib/cogadb/src/lookup_table/cmake_install.cmake")
  include("/home/gurumurt/Hawk-VLDBJ/source/lib/cogadb/src/optimizer/cmake_install.cmake")
  include("/home/gurumurt/Hawk-VLDBJ/source/lib/cogadb/src/parser/cmake_install.cmake")
  include("/home/gurumurt/Hawk-VLDBJ/source/lib/cogadb/src/persistence/cmake_install.cmake")
  include("/home/gurumurt/Hawk-VLDBJ/source/lib/cogadb/src/query_compilation/cmake_install.cmake")
  include("/home/gurumurt/Hawk-VLDBJ/source/lib/cogadb/src/query_processing/cmake_install.cmake")
  include("/home/gurumurt/Hawk-VLDBJ/source/lib/cogadb/src/sql/cmake_install.cmake")
  include("/home/gurumurt/Hawk-VLDBJ/source/lib/cogadb/src/statistics/cmake_install.cmake")
  include("/home/gurumurt/Hawk-VLDBJ/source/lib/cogadb/src/unittests/cmake_install.cmake")
  include("/home/gurumurt/Hawk-VLDBJ/source/lib/cogadb/src/util/cmake_install.cmake")

endif()

