# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/gurumurt/Hawk-VLDBJ/source

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/gurumurt/Hawk-VLDBJ/source

# Include any dependencies generated for this target.
include lib/cogadb/test/util/CMakeFiles/variant-configurator-tests.dir/depend.make

# Include the progress variables for this target.
include lib/cogadb/test/util/CMakeFiles/variant-configurator-tests.dir/progress.make

# Include the compile flags for this target's objects.
include lib/cogadb/test/util/CMakeFiles/variant-configurator-tests.dir/flags.make

lib/cogadb/test/util/CMakeFiles/variant-configurator-tests.dir/variant_configurator.cpp.o: lib/cogadb/test/util/CMakeFiles/variant-configurator-tests.dir/flags.make
lib/cogadb/test/util/CMakeFiles/variant-configurator-tests.dir/variant_configurator.cpp.o: lib/cogadb/test/util/variant_configurator.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gurumurt/Hawk-VLDBJ/source/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/cogadb/test/util/CMakeFiles/variant-configurator-tests.dir/variant_configurator.cpp.o"
	cd /home/gurumurt/Hawk-VLDBJ/source/lib/cogadb/test/util && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/variant-configurator-tests.dir/variant_configurator.cpp.o -c /home/gurumurt/Hawk-VLDBJ/source/lib/cogadb/test/util/variant_configurator.cpp

lib/cogadb/test/util/CMakeFiles/variant-configurator-tests.dir/variant_configurator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/variant-configurator-tests.dir/variant_configurator.cpp.i"
	cd /home/gurumurt/Hawk-VLDBJ/source/lib/cogadb/test/util && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gurumurt/Hawk-VLDBJ/source/lib/cogadb/test/util/variant_configurator.cpp > CMakeFiles/variant-configurator-tests.dir/variant_configurator.cpp.i

lib/cogadb/test/util/CMakeFiles/variant-configurator-tests.dir/variant_configurator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/variant-configurator-tests.dir/variant_configurator.cpp.s"
	cd /home/gurumurt/Hawk-VLDBJ/source/lib/cogadb/test/util && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gurumurt/Hawk-VLDBJ/source/lib/cogadb/test/util/variant_configurator.cpp -o CMakeFiles/variant-configurator-tests.dir/variant_configurator.cpp.s

lib/cogadb/test/util/CMakeFiles/variant-configurator-tests.dir/variant_configurator.cpp.o.requires:

.PHONY : lib/cogadb/test/util/CMakeFiles/variant-configurator-tests.dir/variant_configurator.cpp.o.requires

lib/cogadb/test/util/CMakeFiles/variant-configurator-tests.dir/variant_configurator.cpp.o.provides: lib/cogadb/test/util/CMakeFiles/variant-configurator-tests.dir/variant_configurator.cpp.o.requires
	$(MAKE) -f lib/cogadb/test/util/CMakeFiles/variant-configurator-tests.dir/build.make lib/cogadb/test/util/CMakeFiles/variant-configurator-tests.dir/variant_configurator.cpp.o.provides.build
.PHONY : lib/cogadb/test/util/CMakeFiles/variant-configurator-tests.dir/variant_configurator.cpp.o.provides

lib/cogadb/test/util/CMakeFiles/variant-configurator-tests.dir/variant_configurator.cpp.o.provides.build: lib/cogadb/test/util/CMakeFiles/variant-configurator-tests.dir/variant_configurator.cpp.o


# Object files for target variant-configurator-tests
variant__configurator__tests_OBJECTS = \
"CMakeFiles/variant-configurator-tests.dir/variant_configurator.cpp.o"

# External object files for target variant-configurator-tests
variant__configurator__tests_EXTERNAL_OBJECTS =

lib/cogadb/test/util/variant-configurator-tests: lib/cogadb/test/util/CMakeFiles/variant-configurator-tests.dir/variant_configurator.cpp.o
lib/cogadb/test/util/variant-configurator-tests: lib/cogadb/test/util/CMakeFiles/variant-configurator-tests.dir/build.make
lib/cogadb/test/util/variant-configurator-tests: gtest/src/gtest-build/googlemock/gtest/libgtest.a
lib/cogadb/test/util/variant-configurator-tests: gtest/src/gtest-build/googlemock/gtest/libgtest_main.a
lib/cogadb/test/util/variant-configurator-tests: lib/libcogadb.so
lib/cogadb/test/util/variant-configurator-tests: lib/hype/lib/libhype.so
lib/cogadb/test/util/variant-configurator-tests: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
lib/cogadb/test/util/variant-configurator-tests: /usr/lib/x86_64-linux-gnu/libboost_system.so
lib/cogadb/test/util/variant-configurator-tests: /usr/lib/x86_64-linux-gnu/libboost_thread.so
lib/cogadb/test/util/variant-configurator-tests: /usr/lib/x86_64-linux-gnu/libboost_program_options.so
lib/cogadb/test/util/variant-configurator-tests: /usr/lib/x86_64-linux-gnu/libboost_serialization.so
lib/cogadb/test/util/variant-configurator-tests: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
lib/cogadb/test/util/variant-configurator-tests: /usr/lib/x86_64-linux-gnu/libboost_random.so
lib/cogadb/test/util/variant-configurator-tests: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
lib/cogadb/test/util/variant-configurator-tests: /usr/lib/x86_64-linux-gnu/libboost_iostreams.so
lib/cogadb/test/util/variant-configurator-tests: /usr/lib/x86_64-linux-gnu/libboost_regex.so
lib/cogadb/test/util/variant-configurator-tests: /usr/lib/x86_64-linux-gnu/libboost_log.so
lib/cogadb/test/util/variant-configurator-tests: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
lib/cogadb/test/util/variant-configurator-tests: /usr/lib/x86_64-linux-gnu/libboost_log_setup.so
lib/cogadb/test/util/variant-configurator-tests: /usr/lib/x86_64-linux-gnu/libpthread.so
lib/cogadb/test/util/variant-configurator-tests: /usr/lib/x86_64-linux-gnu/libtbb.so
lib/cogadb/test/util/variant-configurator-tests: /usr/lib/x86_64-linux-gnu/libtbbmalloc.so
lib/cogadb/test/util/variant-configurator-tests: /usr/lib/x86_64-linux-gnu/libOpenCL.so
lib/cogadb/test/util/variant-configurator-tests: /usr/lib/libbam.a
lib/cogadb/test/util/variant-configurator-tests: /usr/lib/x86_64-linux-gnu/libz.so
lib/cogadb/test/util/variant-configurator-tests: /usr/lib/x86_64-linux-gnu/libreadline.so
lib/cogadb/test/util/variant-configurator-tests: /usr/lib/llvm-3.6/lib/libclangFrontend.a
lib/cogadb/test/util/variant-configurator-tests: /usr/lib/llvm-3.6/lib/libclangFrontendTool.a
lib/cogadb/test/util/variant-configurator-tests: /usr/lib/llvm-3.6/lib/libclangDriver.a
lib/cogadb/test/util/variant-configurator-tests: /usr/lib/llvm-3.6/lib/libclangCodeGen.a
lib/cogadb/test/util/variant-configurator-tests: /usr/lib/llvm-3.6/lib/libclangEdit.a
lib/cogadb/test/util/variant-configurator-tests: /usr/lib/llvm-3.6/lib/libclangSema.a
lib/cogadb/test/util/variant-configurator-tests: /usr/lib/llvm-3.6/lib/libclangAnalysis.a
lib/cogadb/test/util/variant-configurator-tests: /usr/lib/llvm-3.6/lib/libclangRewrite.a
lib/cogadb/test/util/variant-configurator-tests: /usr/lib/llvm-3.6/lib/libclangAST.a
lib/cogadb/test/util/variant-configurator-tests: /usr/lib/llvm-3.6/lib/libclangParse.a
lib/cogadb/test/util/variant-configurator-tests: /usr/lib/llvm-3.6/lib/libclangLex.a
lib/cogadb/test/util/variant-configurator-tests: /usr/lib/llvm-3.6/lib/libclangBasic.a
lib/cogadb/test/util/variant-configurator-tests: /usr/lib/llvm-3.6/lib/libclangSerialization.a
lib/cogadb/test/util/variant-configurator-tests: /usr/lib/llvm-3.6/lib/libclangStaticAnalyzerFrontend.a
lib/cogadb/test/util/variant-configurator-tests: /usr/lib/llvm-3.6/lib/libclangStaticAnalyzerCheckers.a
lib/cogadb/test/util/variant-configurator-tests: /usr/lib/llvm-3.6/lib/libclangStaticAnalyzerCore.a
lib/cogadb/test/util/variant-configurator-tests: /usr/lib/llvm-3.6/lib/libclangARCMigrate.a
lib/cogadb/test/util/variant-configurator-tests: /usr/lib/llvm-3.6/lib/libclangRewriteFrontend.a
lib/cogadb/test/util/variant-configurator-tests: /usr/lib/llvm-3.6/lib/libLLVM-3.6.so
lib/cogadb/test/util/variant-configurator-tests: lib/cogadb/test/util/CMakeFiles/variant-configurator-tests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/gurumurt/Hawk-VLDBJ/source/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable variant-configurator-tests"
	cd /home/gurumurt/Hawk-VLDBJ/source/lib/cogadb/test/util && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/variant-configurator-tests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/cogadb/test/util/CMakeFiles/variant-configurator-tests.dir/build: lib/cogadb/test/util/variant-configurator-tests

.PHONY : lib/cogadb/test/util/CMakeFiles/variant-configurator-tests.dir/build

lib/cogadb/test/util/CMakeFiles/variant-configurator-tests.dir/requires: lib/cogadb/test/util/CMakeFiles/variant-configurator-tests.dir/variant_configurator.cpp.o.requires

.PHONY : lib/cogadb/test/util/CMakeFiles/variant-configurator-tests.dir/requires

lib/cogadb/test/util/CMakeFiles/variant-configurator-tests.dir/clean:
	cd /home/gurumurt/Hawk-VLDBJ/source/lib/cogadb/test/util && $(CMAKE_COMMAND) -P CMakeFiles/variant-configurator-tests.dir/cmake_clean.cmake
.PHONY : lib/cogadb/test/util/CMakeFiles/variant-configurator-tests.dir/clean

lib/cogadb/test/util/CMakeFiles/variant-configurator-tests.dir/depend:
	cd /home/gurumurt/Hawk-VLDBJ/source && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gurumurt/Hawk-VLDBJ/source /home/gurumurt/Hawk-VLDBJ/source/lib/cogadb/test/util /home/gurumurt/Hawk-VLDBJ/source /home/gurumurt/Hawk-VLDBJ/source/lib/cogadb/test/util /home/gurumurt/Hawk-VLDBJ/source/lib/cogadb/test/util/CMakeFiles/variant-configurator-tests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/cogadb/test/util/CMakeFiles/variant-configurator-tests.dir/depend

