# This file will be configured to contain variables for CPack. These variables
# should be set in the CMake list file of the project before CPack module is
# included. The list of available CPACK_xxx variables and their associated
# documentation may be obtained using
#  cpack --help-variable-list
#
# Some variables are common to all generators (e.g. CPACK_PACKAGE_NAME)
# and some are specific to a generator
# (e.g. CPACK_NSIS_EXTRA_INSTALL_COMMANDS). The generator specific variables
# usually begin with CPACK_<GENNAME>_xxxx.


SET(CPACK_BINARY_7Z "")
SET(CPACK_BINARY_BUNDLE "")
SET(CPACK_BINARY_CYGWIN "")
SET(CPACK_BINARY_DEB "")
SET(CPACK_BINARY_DRAGNDROP "")
SET(CPACK_BINARY_IFW "")
SET(CPACK_BINARY_NSIS "")
SET(CPACK_BINARY_OSXX11 "")
SET(CPACK_BINARY_PACKAGEMAKER "")
SET(CPACK_BINARY_RPM "")
SET(CPACK_BINARY_STGZ "")
SET(CPACK_BINARY_TBZ2 "")
SET(CPACK_BINARY_TGZ "")
SET(CPACK_BINARY_TXZ "")
SET(CPACK_BINARY_TZ "")
SET(CPACK_BINARY_WIX "")
SET(CPACK_BINARY_ZIP "")
SET(CPACK_CMAKE_GENERATOR "Unix Makefiles")
SET(CPACK_COMPONENT_UNSPECIFIED_HIDDEN "TRUE")
SET(CPACK_COMPONENT_UNSPECIFIED_REQUIRED "TRUE")
SET(CPACK_DEBIAN_PACKAGE_DEPENDS "libc6, libgcc1, libboost-chrono1.54-dev, libboost-chrono1.54.0,
    libboost-date-time1.54-dev,libboost-date-time1.54.0, libboost-filesystem1.54-dev, libboost-filesystem1.54.0,
    libboost-iostreams1.54-dev, libboost-iostreams1.54.0, libboost-program-options1.54-dev, libboost-program-options1.54.0,
    libboost-random1.54-dev, libboost-random1.54.0, libboost-regex1.54-dev, libboost-regex1.54.0, libboost-serialization1.54-dev,
    libboost-serialization1.54.0, libboost-system1.54-dev, libboost-system1.54.0, libboost-thread1.54-dev, libboost-thread1.54.0, libtbb2, zlib1g, libreadline6, libgomp1")
SET(CPACK_DEBIAN_PACKAGE_DESCRIPTION "A Column-oriented GPU-accelerated DBMS
 CoGaDB is a column-oriented GPU-accelerated database management system developed at TU Dortmund University and University of Magdeburg.
    Its purpose is to investigate advanced coprocessing techniques for effective GPU utilization during database query processing.
    It utilizes our hybrid query processing engine (HyPE) for the physical optimization process.
 Website: http://cogadb.cs.tu-dortmund.de/wordpress/")
SET(CPACK_DEBIAN_PACKAGE_MAINTAINER "CoGaDB Development Team <cogadb@googlegroups.com>")
SET(CPACK_DEBIAN_PACKAGE_VERSION "0.4.2")
SET(CPACK_GENERATOR "DEB")
SET(CPACK_INSTALL_CMAKE_PROJECTS "/home/gurumurt/Hawk-VLDBJ/source;CoGaDB;ALL;/")
SET(CPACK_INSTALL_PREFIX "/usr/local")
SET(CPACK_MODULE_PATH "/home/gurumurt/Hawk-VLDBJ/source/CMake;/home/gurumurt/Hawk-VLDBJ/source/CMake/FindTBB")
SET(CPACK_NSIS_DISPLAY_NAME "cogadb 0.4.2")
SET(CPACK_NSIS_INSTALLER_ICON_CODE "")
SET(CPACK_NSIS_INSTALLER_MUI_ICON_CODE "")
SET(CPACK_NSIS_INSTALL_ROOT "$PROGRAMFILES")
SET(CPACK_NSIS_PACKAGE_NAME "cogadb 0.4.2")
SET(CPACK_OUTPUT_CONFIG_FILE "/home/gurumurt/Hawk-VLDBJ/source/CPackConfig.cmake")
SET(CPACK_PACKAGE_DEFAULT_LOCATION "/")
SET(CPACK_PACKAGE_DESCRIPTION_FILE "/usr/share/cmake-3.5/Templates/CPack.GenericDescription.txt")
SET(CPACK_PACKAGE_DESCRIPTION_SUMMARY "CoGaDB built using CMake")
SET(CPACK_PACKAGE_FILE_NAME "cogadb-0.4.2-ubuntu-14.04-lts-amd64")
SET(CPACK_PACKAGE_INSTALL_DIRECTORY "cogadb 0.4.2")
SET(CPACK_PACKAGE_INSTALL_REGISTRY_KEY "cogadb 0.4.2")
SET(CPACK_PACKAGE_NAME "cogadb")
SET(CPACK_PACKAGE_RELOCATABLE "true")
SET(CPACK_PACKAGE_VENDOR "Humanity")
SET(CPACK_PACKAGE_VERSION "0.4.2")
SET(CPACK_PACKAGE_VERSION_MAJOR "0")
SET(CPACK_PACKAGE_VERSION_MINOR "4")
SET(CPACK_PACKAGE_VERSION_PATCH "2")
SET(CPACK_RESOURCE_FILE_LICENSE "/usr/share/cmake-3.5/Templates/CPack.GenericLicense.txt")
SET(CPACK_RESOURCE_FILE_README "/usr/share/cmake-3.5/Templates/CPack.GenericDescription.txt")
SET(CPACK_RESOURCE_FILE_WELCOME "/usr/share/cmake-3.5/Templates/CPack.GenericWelcome.txt")
SET(CPACK_SET_DESTDIR "OFF")
SET(CPACK_SOURCE_7Z "")
SET(CPACK_SOURCE_CYGWIN "")
SET(CPACK_SOURCE_GENERATOR "TBZ2;TGZ;TXZ;TZ")
SET(CPACK_SOURCE_OUTPUT_CONFIG_FILE "/home/gurumurt/Hawk-VLDBJ/source/CPackSourceConfig.cmake")
SET(CPACK_SOURCE_TBZ2 "ON")
SET(CPACK_SOURCE_TGZ "ON")
SET(CPACK_SOURCE_TXZ "ON")
SET(CPACK_SOURCE_TZ "ON")
SET(CPACK_SOURCE_ZIP "OFF")
SET(CPACK_SYSTEM_NAME "ubuntu-14.04-lts-amd64")
SET(CPACK_TOPLEVEL_TAG "ubuntu-14.04-lts-amd64")
SET(CPACK_WIX_SIZEOF_VOID_P "8")

if(NOT CPACK_PROPERTIES_FILE)
  set(CPACK_PROPERTIES_FILE "/home/gurumurt/Hawk-VLDBJ/source/CPackProperties.cmake")
endif()

if(EXISTS ${CPACK_PROPERTIES_FILE})
  include(${CPACK_PROPERTIES_FILE})
endif()
