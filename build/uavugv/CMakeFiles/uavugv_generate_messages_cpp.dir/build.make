# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.2

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
CMAKE_SOURCE_DIR = /home/deddy/QGCInterface/src/uavugv

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/deddy/QGCInterface/build/uavugv

# Utility rule file for uavugv_generate_messages_cpp.

# Include the progress variables for this target.
include CMakeFiles/uavugv_generate_messages_cpp.dir/progress.make

CMakeFiles/uavugv_generate_messages_cpp: /home/deddy/QGCInterface/devel/.private/uavugv/include/uavugv/uavugverror.h

/home/deddy/QGCInterface/devel/.private/uavugv/include/uavugv/uavugverror.h: /opt/ros/indigo/lib/gencpp/gen_cpp.py
/home/deddy/QGCInterface/devel/.private/uavugv/include/uavugv/uavugverror.h: /home/deddy/QGCInterface/src/uavugv/msg/uavugverror.msg
/home/deddy/QGCInterface/devel/.private/uavugv/include/uavugv/uavugverror.h: /opt/ros/indigo/share/gencpp/msg.h.template
	$(CMAKE_COMMAND) -E cmake_progress_report /home/deddy/QGCInterface/build/uavugv/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating C++ code from uavugv/uavugverror.msg"
	catkin_generated/env_cached.sh /usr/bin/python /opt/ros/indigo/share/gencpp/cmake/../../../lib/gencpp/gen_cpp.py /home/deddy/QGCInterface/src/uavugv/msg/uavugverror.msg -Iuavugv:/home/deddy/QGCInterface/src/uavugv/msg -Igeometry_msgs:/opt/ros/indigo/share/geometry_msgs/cmake/../msg -Istd_msgs:/opt/ros/indigo/share/std_msgs/cmake/../msg -p uavugv -o /home/deddy/QGCInterface/devel/.private/uavugv/include/uavugv -e /opt/ros/indigo/share/gencpp/cmake/..

uavugv_generate_messages_cpp: CMakeFiles/uavugv_generate_messages_cpp
uavugv_generate_messages_cpp: /home/deddy/QGCInterface/devel/.private/uavugv/include/uavugv/uavugverror.h
uavugv_generate_messages_cpp: CMakeFiles/uavugv_generate_messages_cpp.dir/build.make
.PHONY : uavugv_generate_messages_cpp

# Rule to build all files generated by this target.
CMakeFiles/uavugv_generate_messages_cpp.dir/build: uavugv_generate_messages_cpp
.PHONY : CMakeFiles/uavugv_generate_messages_cpp.dir/build

CMakeFiles/uavugv_generate_messages_cpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/uavugv_generate_messages_cpp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/uavugv_generate_messages_cpp.dir/clean

CMakeFiles/uavugv_generate_messages_cpp.dir/depend:
	cd /home/deddy/QGCInterface/build/uavugv && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/deddy/QGCInterface/src/uavugv /home/deddy/QGCInterface/src/uavugv /home/deddy/QGCInterface/build/uavugv /home/deddy/QGCInterface/build/uavugv /home/deddy/QGCInterface/build/uavugv/CMakeFiles/uavugv_generate_messages_cpp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/uavugv_generate_messages_cpp.dir/depend

