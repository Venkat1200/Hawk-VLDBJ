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
include test/CMakeFiles/json_query_compiler_interface-tests.dir/depend.make

# Include the progress variables for this target.
include test/CMakeFiles/json_query_compiler_interface-tests.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/json_query_compiler_interface-tests.dir/flags.make

test/CMakeFiles/json_query_compiler_interface-tests.dir/integration_tests/json_query_compiler_interface.cpp.o: test/CMakeFiles/json_query_compiler_interface-tests.dir/flags.make
test/CMakeFiles/json_query_compiler_interface-tests.dir/integration_tests/json_query_compiler_interface.cpp.o: test/integration_tests/json_query_compiler_interface.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gurumurt/Hawk-VLDBJ/source/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/CMakeFiles/json_query_compiler_interface-tests.dir/integration_tests/json_query_compiler_interface.cpp.o"
	cd /home/gurumurt/Hawk-VLDBJ/source/test && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/json_query_compiler_interface-tests.dir/integration_tests/json_query_compiler_interface.cpp.o -c /home/gurumurt/Hawk-VLDBJ/source/test/integration_tests/json_query_compiler_interface.cpp

test/CMakeFiles/json_query_compiler_interface-tests.dir/integration_tests/json_query_compiler_interface.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/json_query_compiler_interface-tests.dir/integration_tests/json_query_compiler_interface.cpp.i"
	cd /home/gurumurt/Hawk-VLDBJ/source/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gurumurt/Hawk-VLDBJ/source/test/integration_tests/json_query_compiler_interface.cpp > CMakeFiles/json_query_compiler_interface-tests.dir/integration_tests/json_query_compiler_interface.cpp.i

test/CMakeFiles/json_query_compiler_interface-tests.dir/integration_tests/json_query_compiler_interface.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/json_query_compiler_interface-tests.dir/integration_tests/json_query_compiler_interface.cpp.s"
	cd /home/gurumurt/Hawk-VLDBJ/source/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gurumurt/Hawk-VLDBJ/source/test/integration_tests/json_query_compiler_interface.cpp -o CMakeFiles/json_query_compiler_interface-tests.dir/integration_tests/json_query_compiler_interface.cpp.s

test/CMakeFiles/json_query_compiler_interface-tests.dir/integration_tests/json_query_compiler_interface.cpp.o.requires:

.PHONY : test/CMakeFiles/json_query_compiler_interface-tests.dir/integration_tests/json_query_compiler_interface.cpp.o.requires

test/CMakeFiles/json_query_compiler_interface-tests.dir/integration_tests/json_query_compiler_interface.cpp.o.provides: test/CMakeFiles/json_query_compiler_interface-tests.dir/integration_tests/json_query_compiler_interface.cpp.o.requires
	$(MAKE) -f test/CMakeFiles/json_query_compiler_interface-tests.dir/build.make test/CMakeFiles/json_query_compiler_interface-tests.dir/integration_tests/json_query_compiler_interface.cpp.o.provides.build
.PHONY : test/CMakeFiles/json_query_compiler_interface-tests.dir/integration_tests/json_query_compiler_interface.cpp.o.provides

test/CMakeFiles/json_query_compiler_interface-tests.dir/integration_tests/json_query_compiler_interface.cpp.o.provides.build: test/CMakeFiles/json_query_compiler_interface-tests.dir/integration_tests/json_query_compiler_interface.cpp.o


# Object files for target json_query_compiler_interface-tests
json_query_compiler_interface__tests_OBJECTS = \
"CMakeFiles/json_query_compiler_interface-tests.dir/integration_tests/json_query_compiler_interface.cpp.o"

# External object files for target json_query_compiler_interface-tests
json_query_compiler_interface__tests_EXTERNAL_OBJECTS =

test/json_query_compiler_interface-tests: test/CMakeFiles/json_query_compiler_interface-tests.dir/integration_tests/json_query_compiler_interface.cpp.o
test/json_query_compiler_interface-tests: test/CMakeFiles/json_query_compiler_interface-tests.dir/build.make
test/json_query_compiler_interface-tests: gtest/src/gtest-build/googlemock/gtest/libgtest.a
test/json_query_compiler_interface-tests: gtest/src/gtest-build/googlemock/gtest/libgtest_main.a
test/json_query_compiler_interface-tests: lib/libcogadb.so
test/json_query_compiler_interface-tests: lib/hype/lib/libhype.so
test/json_query_compiler_interface-tests: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
test/json_query_compiler_interface-tests: /usr/lib/x86_64-linux-gnu/libboost_system.so
test/json_query_compiler_interface-tests: /usr/lib/x86_64-linux-gnu/libboost_thread.so
test/json_query_compiler_interface-tests: /usr/lib/x86_64-linux-gnu/libboost_program_options.so
test/json_query_compiler_interface-tests: /usr/lib/x86_64-linux-gnu/libboost_serialization.so
test/json_query_compiler_interface-tests: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
test/json_query_compiler_interface-tests: /usr/lib/x86_64-linux-gnu/libboost_random.so
test/json_query_compiler_interface-tests: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
test/json_query_compiler_interface-tests: /usr/lib/x86_64-linux-gnu/libboost_iostreams.so
test/json_query_compiler_interface-tests: /usr/lib/x86_64-linux-gnu/libboost_regex.so
test/json_query_compiler_interface-tests: /usr/lib/x86_64-linux-gnu/libboost_log.so
test/json_query_compiler_interface-tests: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
test/json_query_compiler_interface-tests: /usr/lib/x86_64-linux-gnu/libboost_log_setup.so
test/json_query_compiler_interface-tests: /usr/lib/x86_64-linux-gnu/libpthread.so
test/json_query_compiler_interface-tests: /usr/lib/x86_64-linux-gnu/libtbb.so
test/json_query_compiler_interface-tests: /usr/lib/x86_64-linux-gnu/libtbbmalloc.so
test/json_query_compiler_interface-tests: /usr/lib/x86_64-linux-gnu/libOpenCL.so
test/json_query_compiler_interface-tests: /usr/lib/libbam.a
test/json_query_compiler_interface-tests: /usr/lib/x86_64-linux-gnu/libz.so
test/json_query_compiler_interface-tests: /usr/lib/x86_64-linux-gnu/libreadline.so
test/json_query_compiler_interface-tests: /usr/lib/llvm-3.6/lib/libclangFrontend.a
test/json_query_compiler_interface-tests: /usr/lib/llvm-3.6/lib/libclangFrontendTool.a
test/json_query_compiler_interface-tests: /usr/lib/llvm-3.6/lib/libclangDriver.a
test/json_query_compiler_interface-tests: /usr/lib/llvm-3.6/lib/libclangCodeGen.a
test/json_query_compiler_interface-tests: /usr/lib/llvm-3.6/lib/libclangEdit.a
test/json_query_compiler_interface-tests: /usr/lib/llvm-3.6/lib/libclangSema.a
test/json_query_compiler_interface-tests: /usr/lib/llvm-3.6/lib/libclangAnalysis.a
test/json_query_compiler_interface-tests: /usr/lib/llvm-3.6/lib/libclangRewrite.a
test/json_query_compiler_interface-tests: /usr/lib/llvm-3.6/lib/libclangAST.a
test/json_query_compiler_interface-tests: /usr/lib/llvm-3.6/lib/libclangParse.a
test/json_query_compiler_interface-tests: /usr/lib/llvm-3.6/lib/libclangLex.a
test/json_query_compiler_interface-tests: /usr/lib/llvm-3.6/lib/libclangBasic.a
test/json_query_compiler_interface-tests: /usr/lib/llvm-3.6/lib/libclangSerialization.a
test/json_query_compiler_interface-tests: /usr/lib/llvm-3.6/lib/libclangStaticAnalyzerFrontend.a
test/json_query_compiler_interface-tests: /usr/lib/llvm-3.6/lib/libclangStaticAnalyzerCheckers.a
test/json_query_compiler_interface-tests: /usr/lib/llvm-3.6/lib/libclangStaticAnalyzerCore.a
test/json_query_compiler_interface-tests: /usr/lib/llvm-3.6/lib/libclangARCMigrate.a
test/json_query_compiler_interface-tests: /usr/lib/llvm-3.6/lib/libclangRewriteFrontend.a
test/json_query_compiler_interface-tests: /usr/lib/llvm-3.6/lib/libLLVM-3.6.so
test/json_query_compiler_interface-tests: test/CMakeFiles/json_query_compiler_interface-tests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/gurumurt/Hawk-VLDBJ/source/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable json_query_compiler_interface-tests"
	cd /home/gurumurt/Hawk-VLDBJ/source/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/json_query_compiler_interface-tests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/json_query_compiler_interface-tests.dir/build: test/json_query_compiler_interface-tests

.PHONY : test/CMakeFiles/json_query_compiler_interface-tests.dir/build

test/CMakeFiles/json_query_compiler_interface-tests.dir/requires: test/CMakeFiles/json_query_compiler_interface-tests.dir/integration_tests/json_query_compiler_interface.cpp.o.requires

.PHONY : test/CMakeFiles/json_query_compiler_interface-tests.dir/requires

test/CMakeFiles/json_query_compiler_interface-tests.dir/clean:
	cd /home/gurumurt/Hawk-VLDBJ/source/test && $(CMAKE_COMMAND) -P CMakeFiles/json_query_compiler_interface-tests.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/json_query_compiler_interface-tests.dir/clean

test/CMakeFiles/json_query_compiler_interface-tests.dir/depend:
	cd /home/gurumurt/Hawk-VLDBJ/source && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gurumurt/Hawk-VLDBJ/source /home/gurumurt/Hawk-VLDBJ/source/test /home/gurumurt/Hawk-VLDBJ/source /home/gurumurt/Hawk-VLDBJ/source/test /home/gurumurt/Hawk-VLDBJ/source/test/CMakeFiles/json_query_compiler_interface-tests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/json_query_compiler_interface-tests.dir/depend

