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
CMAKE_SOURCE_DIR = /home/deddy/QGCInterface/src/mavlink

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/deddy/QGCInterface/build/mavlink

# Utility rule file for paparazzi.xml-v2.0.

# Include the progress variables for this target.
include CMakeFiles/paparazzi.xml-v2.0.dir/progress.make

CMakeFiles/paparazzi.xml-v2.0: include/v2.0/paparazzi/paparazzi.h

include/v2.0/paparazzi/paparazzi.h: /home/deddy/QGCInterface/src/mavlink/message_definitions/v1.0/paparazzi.xml
include/v2.0/paparazzi/paparazzi.h: /home/deddy/QGCInterface/src/mavlink/message_definitions/v1.0/common.xml
include/v2.0/paparazzi/paparazzi.h: /home/deddy/QGCInterface/src/mavlink/pymavlink/tools/mavgen.py
	$(CMAKE_COMMAND) -E cmake_progress_report /home/deddy/QGCInterface/build/mavlink/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating include/v2.0/paparazzi/paparazzi.h"
	/usr/bin/env PYTHONPATH="/home/deddy/QGCInterface/src/mavlink:/opt/ros/indigo/lib/python2.7/dist-packages" /usr/bin/python /home/deddy/QGCInterface/src/mavlink/pymavlink/tools/mavgen.py --lang=C --wire-protocol=2.0 --output=include/v2.0 /home/deddy/QGCInterface/src/mavlink/message_definitions/v1.0/paparazzi.xml

paparazzi.xml-v2.0: CMakeFiles/paparazzi.xml-v2.0
paparazzi.xml-v2.0: include/v2.0/paparazzi/paparazzi.h
paparazzi.xml-v2.0: CMakeFiles/paparazzi.xml-v2.0.dir/build.make
.PHONY : paparazzi.xml-v2.0

# Rule to build all files generated by this target.
CMakeFiles/paparazzi.xml-v2.0.dir/build: paparazzi.xml-v2.0
.PHONY : CMakeFiles/paparazzi.xml-v2.0.dir/build

CMakeFiles/paparazzi.xml-v2.0.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/paparazzi.xml-v2.0.dir/cmake_clean.cmake
.PHONY : CMakeFiles/paparazzi.xml-v2.0.dir/clean

CMakeFiles/paparazzi.xml-v2.0.dir/depend:
	cd /home/deddy/QGCInterface/build/mavlink && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/deddy/QGCInterface/src/mavlink /home/deddy/QGCInterface/src/mavlink /home/deddy/QGCInterface/build/mavlink /home/deddy/QGCInterface/build/mavlink /home/deddy/QGCInterface/build/mavlink/CMakeFiles/paparazzi.xml-v2.0.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/paparazzi.xml-v2.0.dir/depend

