# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /home/ekyriakos/my_ws/src/turtle_doctor_cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ekyriakos/my_ws/src/build/turtle_doctor_cpp

# Include any dependencies generated for this target.
include CMakeFiles/turtle_doctor.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/turtle_doctor.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/turtle_doctor.dir/flags.make

CMakeFiles/turtle_doctor.dir/doctor.cpp.o: CMakeFiles/turtle_doctor.dir/flags.make
CMakeFiles/turtle_doctor.dir/doctor.cpp.o: /home/ekyriakos/my_ws/src/turtle_doctor_cpp/doctor.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ekyriakos/my_ws/src/build/turtle_doctor_cpp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/turtle_doctor.dir/doctor.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/turtle_doctor.dir/doctor.cpp.o -c /home/ekyriakos/my_ws/src/turtle_doctor_cpp/doctor.cpp

CMakeFiles/turtle_doctor.dir/doctor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/turtle_doctor.dir/doctor.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ekyriakos/my_ws/src/turtle_doctor_cpp/doctor.cpp > CMakeFiles/turtle_doctor.dir/doctor.cpp.i

CMakeFiles/turtle_doctor.dir/doctor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/turtle_doctor.dir/doctor.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ekyriakos/my_ws/src/turtle_doctor_cpp/doctor.cpp -o CMakeFiles/turtle_doctor.dir/doctor.cpp.s

# Object files for target turtle_doctor
turtle_doctor_OBJECTS = \
"CMakeFiles/turtle_doctor.dir/doctor.cpp.o"

# External object files for target turtle_doctor
turtle_doctor_EXTERNAL_OBJECTS =

libturtle_doctor.a: CMakeFiles/turtle_doctor.dir/doctor.cpp.o
libturtle_doctor.a: CMakeFiles/turtle_doctor.dir/build.make
libturtle_doctor.a: CMakeFiles/turtle_doctor.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ekyriakos/my_ws/src/build/turtle_doctor_cpp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libturtle_doctor.a"
	$(CMAKE_COMMAND) -P CMakeFiles/turtle_doctor.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/turtle_doctor.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/turtle_doctor.dir/build: libturtle_doctor.a

.PHONY : CMakeFiles/turtle_doctor.dir/build

CMakeFiles/turtle_doctor.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/turtle_doctor.dir/cmake_clean.cmake
.PHONY : CMakeFiles/turtle_doctor.dir/clean

CMakeFiles/turtle_doctor.dir/depend:
	cd /home/ekyriakos/my_ws/src/build/turtle_doctor_cpp && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ekyriakos/my_ws/src/turtle_doctor_cpp /home/ekyriakos/my_ws/src/turtle_doctor_cpp /home/ekyriakos/my_ws/src/build/turtle_doctor_cpp /home/ekyriakos/my_ws/src/build/turtle_doctor_cpp /home/ekyriakos/my_ws/src/build/turtle_doctor_cpp/CMakeFiles/turtle_doctor.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/turtle_doctor.dir/depend
