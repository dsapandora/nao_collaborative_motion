# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/olivier/ros_workspace/nao_custom

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/olivier/ros_workspace/nao_custom

# Include any dependencies generated for this target.
include CMakeFiles/nao_behavior.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/nao_behavior.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/nao_behavior.dir/flags.make

CMakeFiles/nao_behavior.dir/src/nao_behavior.o: CMakeFiles/nao_behavior.dir/flags.make
CMakeFiles/nao_behavior.dir/src/nao_behavior.o: src/nao_behavior.cpp
CMakeFiles/nao_behavior.dir/src/nao_behavior.o: manifest.xml
CMakeFiles/nao_behavior.dir/src/nao_behavior.o: /opt/ros/fuerte/share/roslang/manifest.xml
CMakeFiles/nao_behavior.dir/src/nao_behavior.o: /opt/ros/fuerte/share/roscpp/manifest.xml
	$(CMAKE_COMMAND) -E cmake_progress_report /home/olivier/ros_workspace/nao_custom/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/nao_behavior.dir/src/nao_behavior.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -o CMakeFiles/nao_behavior.dir/src/nao_behavior.o -c /home/olivier/ros_workspace/nao_custom/src/nao_behavior.cpp

CMakeFiles/nao_behavior.dir/src/nao_behavior.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/nao_behavior.dir/src/nao_behavior.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -E /home/olivier/ros_workspace/nao_custom/src/nao_behavior.cpp > CMakeFiles/nao_behavior.dir/src/nao_behavior.i

CMakeFiles/nao_behavior.dir/src/nao_behavior.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/nao_behavior.dir/src/nao_behavior.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -S /home/olivier/ros_workspace/nao_custom/src/nao_behavior.cpp -o CMakeFiles/nao_behavior.dir/src/nao_behavior.s

CMakeFiles/nao_behavior.dir/src/nao_behavior.o.requires:
.PHONY : CMakeFiles/nao_behavior.dir/src/nao_behavior.o.requires

CMakeFiles/nao_behavior.dir/src/nao_behavior.o.provides: CMakeFiles/nao_behavior.dir/src/nao_behavior.o.requires
	$(MAKE) -f CMakeFiles/nao_behavior.dir/build.make CMakeFiles/nao_behavior.dir/src/nao_behavior.o.provides.build
.PHONY : CMakeFiles/nao_behavior.dir/src/nao_behavior.o.provides

CMakeFiles/nao_behavior.dir/src/nao_behavior.o.provides.build: CMakeFiles/nao_behavior.dir/src/nao_behavior.o

# Object files for target nao_behavior
nao_behavior_OBJECTS = \
"CMakeFiles/nao_behavior.dir/src/nao_behavior.o"

# External object files for target nao_behavior
nao_behavior_EXTERNAL_OBJECTS =

bin/nao_behavior: CMakeFiles/nao_behavior.dir/src/nao_behavior.o
bin/nao_behavior: CMakeFiles/nao_behavior.dir/build.make
bin/nao_behavior: CMakeFiles/nao_behavior.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable bin/nao_behavior"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/nao_behavior.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/nao_behavior.dir/build: bin/nao_behavior
.PHONY : CMakeFiles/nao_behavior.dir/build

CMakeFiles/nao_behavior.dir/requires: CMakeFiles/nao_behavior.dir/src/nao_behavior.o.requires
.PHONY : CMakeFiles/nao_behavior.dir/requires

CMakeFiles/nao_behavior.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/nao_behavior.dir/cmake_clean.cmake
.PHONY : CMakeFiles/nao_behavior.dir/clean

CMakeFiles/nao_behavior.dir/depend:
	cd /home/olivier/ros_workspace/nao_custom && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/olivier/ros_workspace/nao_custom /home/olivier/ros_workspace/nao_custom /home/olivier/ros_workspace/nao_custom /home/olivier/ros_workspace/nao_custom /home/olivier/ros_workspace/nao_custom/CMakeFiles/nao_behavior.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/nao_behavior.dir/depend
