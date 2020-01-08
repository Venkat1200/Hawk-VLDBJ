# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /home/gurumurt/projects/CoGaDB/Hawk-VLDBJ/source

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/gurumurt/projects/CoGaDB/Hawk-VLDBJ/source

# Include any dependencies generated for this target.
include CMakeFiles/sort_benchmark.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sort_benchmark.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sort_benchmark.dir/flags.make

CMakeFiles/sort_benchmark.dir/benchmarks/sort_benchmark.cpp.o: CMakeFiles/sort_benchmark.dir/flags.make
CMakeFiles/sort_benchmark.dir/benchmarks/sort_benchmark.cpp.o: benchmarks/sort_benchmark.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gurumurt/projects/CoGaDB/Hawk-VLDBJ/source/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sort_benchmark.dir/benchmarks/sort_benchmark.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sort_benchmark.dir/benchmarks/sort_benchmark.cpp.o -c /home/gurumurt/projects/CoGaDB/Hawk-VLDBJ/source/benchmarks/sort_benchmark.cpp

CMakeFiles/sort_benchmark.dir/benchmarks/sort_benchmark.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sort_benchmark.dir/benchmarks/sort_benchmark.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gurumurt/projects/CoGaDB/Hawk-VLDBJ/source/benchmarks/sort_benchmark.cpp > CMakeFiles/sort_benchmark.dir/benchmarks/sort_benchmark.cpp.i

CMakeFiles/sort_benchmark.dir/benchmarks/sort_benchmark.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sort_benchmark.dir/benchmarks/sort_benchmark.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gurumurt/projects/CoGaDB/Hawk-VLDBJ/source/benchmarks/sort_benchmark.cpp -o CMakeFiles/sort_benchmark.dir/benchmarks/sort_benchmark.cpp.s

CMakeFiles/sort_benchmark.dir/benchmarks/sort_benchmark.cpp.o.requires:

.PHONY : CMakeFiles/sort_benchmark.dir/benchmarks/sort_benchmark.cpp.o.requires

CMakeFiles/sort_benchmark.dir/benchmarks/sort_benchmark.cpp.o.provides: CMakeFiles/sort_benchmark.dir/benchmarks/sort_benchmark.cpp.o.requires
	$(MAKE) -f CMakeFiles/sort_benchmark.dir/build.make CMakeFiles/sort_benchmark.dir/benchmarks/sort_benchmark.cpp.o.provides.build
.PHONY : CMakeFiles/sort_benchmark.dir/benchmarks/sort_benchmark.cpp.o.provides

CMakeFiles/sort_benchmark.dir/benchmarks/sort_benchmark.cpp.o.provides.build: CMakeFiles/sort_benchmark.dir/benchmarks/sort_benchmark.cpp.o


# Object files for target sort_benchmark
sort_benchmark_OBJECTS = \
"CMakeFiles/sort_benchmark.dir/benchmarks/sort_benchmark.cpp.o"

# External object files for target sort_benchmark
sort_benchmark_EXTERNAL_OBJECTS =

bin/sort_benchmark: CMakeFiles/sort_benchmark.dir/benchmarks/sort_benchmark.cpp.o
bin/sort_benchmark: CMakeFiles/sort_benchmark.dir/build.make
bin/sort_benchmark: lib/libcogadb.so
bin/sort_benchmark: lib/libcuda_gpu_backend.so
bin/sort_benchmark: /usr/lib/x86_64-linux-gnu/libcudart_static.a
bin/sort_benchmark: /usr/lib/x86_64-linux-gnu/librt.so
bin/sort_benchmark: lib/hype/lib/libhype.so
bin/sort_benchmark: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
bin/sort_benchmark: /usr/lib/x86_64-linux-gnu/libboost_system.so
bin/sort_benchmark: /usr/lib/x86_64-linux-gnu/libboost_thread.so
bin/sort_benchmark: /usr/lib/x86_64-linux-gnu/libboost_program_options.so
bin/sort_benchmark: /usr/lib/x86_64-linux-gnu/libboost_serialization.so
bin/sort_benchmark: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
bin/sort_benchmark: /usr/lib/x86_64-linux-gnu/libboost_random.so
bin/sort_benchmark: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
bin/sort_benchmark: /usr/lib/x86_64-linux-gnu/libboost_iostreams.so
bin/sort_benchmark: /usr/lib/x86_64-linux-gnu/libboost_regex.so
bin/sort_benchmark: /usr/lib/x86_64-linux-gnu/libboost_log.so
bin/sort_benchmark: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
bin/sort_benchmark: /usr/lib/x86_64-linux-gnu/libboost_log_setup.so
bin/sort_benchmark: /usr/lib/x86_64-linux-gnu/libpthread.so
bin/sort_benchmark: /usr/lib/x86_64-linux-gnu/libtbb.so
bin/sort_benchmark: /usr/lib/x86_64-linux-gnu/libtbbmalloc.so
bin/sort_benchmark: /usr/lib/x86_64-linux-gnu/libOpenCL.so
bin/sort_benchmark: /usr/lib/llvm-3.9/lib/libclangFrontend.a
bin/sort_benchmark: /usr/lib/llvm-3.9/lib/libclangFrontendTool.a
bin/sort_benchmark: /usr/lib/llvm-3.9/lib/libclangDriver.a
bin/sort_benchmark: /usr/lib/llvm-3.9/lib/libclangCodeGen.a
bin/sort_benchmark: /usr/lib/llvm-3.9/lib/libclangEdit.a
bin/sort_benchmark: /usr/lib/llvm-3.9/lib/libclangSema.a
bin/sort_benchmark: /usr/lib/llvm-3.9/lib/libclangAnalysis.a
bin/sort_benchmark: /usr/lib/llvm-3.9/lib/libclangRewrite.a
bin/sort_benchmark: /usr/lib/llvm-3.9/lib/libclangAST.a
bin/sort_benchmark: /usr/lib/llvm-3.9/lib/libclangParse.a
bin/sort_benchmark: /usr/lib/llvm-3.9/lib/libclangLex.a
bin/sort_benchmark: /usr/lib/llvm-3.9/lib/libclangBasic.a
bin/sort_benchmark: /usr/lib/llvm-3.9/lib/libclangSerialization.a
bin/sort_benchmark: /usr/lib/llvm-3.9/lib/libclangStaticAnalyzerFrontend.a
bin/sort_benchmark: /usr/lib/llvm-3.9/lib/libclangStaticAnalyzerCheckers.a
bin/sort_benchmark: /usr/lib/llvm-3.9/lib/libclangStaticAnalyzerCore.a
bin/sort_benchmark: /usr/lib/llvm-3.9/lib/libclangARCMigrate.a
bin/sort_benchmark: /usr/lib/llvm-3.9/lib/libclangRewriteFrontend.a
bin/sort_benchmark: /usr/lib/x86_64-linux-gnu/libLLVM-3.9.so
bin/sort_benchmark: CMakeFiles/sort_benchmark.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/gurumurt/projects/CoGaDB/Hawk-VLDBJ/source/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable bin/sort_benchmark"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sort_benchmark.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sort_benchmark.dir/build: bin/sort_benchmark

.PHONY : CMakeFiles/sort_benchmark.dir/build

CMakeFiles/sort_benchmark.dir/requires: CMakeFiles/sort_benchmark.dir/benchmarks/sort_benchmark.cpp.o.requires

.PHONY : CMakeFiles/sort_benchmark.dir/requires

CMakeFiles/sort_benchmark.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sort_benchmark.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sort_benchmark.dir/clean

CMakeFiles/sort_benchmark.dir/depend:
	cd /home/gurumurt/projects/CoGaDB/Hawk-VLDBJ/source && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gurumurt/projects/CoGaDB/Hawk-VLDBJ/source /home/gurumurt/projects/CoGaDB/Hawk-VLDBJ/source /home/gurumurt/projects/CoGaDB/Hawk-VLDBJ/source /home/gurumurt/projects/CoGaDB/Hawk-VLDBJ/source /home/gurumurt/projects/CoGaDB/Hawk-VLDBJ/source/CMakeFiles/sort_benchmark.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sort_benchmark.dir/depend
