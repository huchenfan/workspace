# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/hu_chenfan/workfiles/workspace

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hu_chenfan/workfiles/workspace/cmake-build-debug-wsl

# Include any dependencies generated for this target.
include CMakeFiles/workspace.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/workspace.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/workspace.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/workspace.dir/flags.make

CMakeFiles/workspace.dir/C++基础语法/hello_world.cpp.o: CMakeFiles/workspace.dir/flags.make
CMakeFiles/workspace.dir/C++基础语法/hello_world.cpp.o: ../C++基础语法/hello_world.cpp
CMakeFiles/workspace.dir/C++基础语法/hello_world.cpp.o: CMakeFiles/workspace.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hu_chenfan/workfiles/workspace/cmake-build-debug-wsl/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/workspace.dir/C++基础语法/hello_world.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/workspace.dir/C++基础语法/hello_world.cpp.o -MF CMakeFiles/workspace.dir/C++基础语法/hello_world.cpp.o.d -o CMakeFiles/workspace.dir/C++基础语法/hello_world.cpp.o -c /home/hu_chenfan/workfiles/workspace/C++基础语法/hello_world.cpp

CMakeFiles/workspace.dir/C++基础语法/hello_world.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/workspace.dir/C++基础语法/hello_world.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hu_chenfan/workfiles/workspace/C++基础语法/hello_world.cpp > CMakeFiles/workspace.dir/C++基础语法/hello_world.cpp.i

CMakeFiles/workspace.dir/C++基础语法/hello_world.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/workspace.dir/C++基础语法/hello_world.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hu_chenfan/workfiles/workspace/C++基础语法/hello_world.cpp -o CMakeFiles/workspace.dir/C++基础语法/hello_world.cpp.s

CMakeFiles/workspace.dir/C++基础语法/变量.cpp.o: CMakeFiles/workspace.dir/flags.make
CMakeFiles/workspace.dir/C++基础语法/变量.cpp.o: ../C++基础语法/变量.cpp
CMakeFiles/workspace.dir/C++基础语法/变量.cpp.o: CMakeFiles/workspace.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hu_chenfan/workfiles/workspace/cmake-build-debug-wsl/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/workspace.dir/C++基础语法/变量.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/workspace.dir/C++基础语法/变量.cpp.o -MF CMakeFiles/workspace.dir/C++基础语法/变量.cpp.o.d -o CMakeFiles/workspace.dir/C++基础语法/变量.cpp.o -c /home/hu_chenfan/workfiles/workspace/C++基础语法/变量.cpp

CMakeFiles/workspace.dir/C++基础语法/变量.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/workspace.dir/C++基础语法/变量.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hu_chenfan/workfiles/workspace/C++基础语法/变量.cpp > CMakeFiles/workspace.dir/C++基础语法/变量.cpp.i

CMakeFiles/workspace.dir/C++基础语法/变量.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/workspace.dir/C++基础语法/变量.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hu_chenfan/workfiles/workspace/C++基础语法/变量.cpp -o CMakeFiles/workspace.dir/C++基础语法/变量.cpp.s

# Object files for target workspace
workspace_OBJECTS = \
"CMakeFiles/workspace.dir/C++基础语法/hello_world.cpp.o" \
"CMakeFiles/workspace.dir/C++基础语法/变量.cpp.o"

# External object files for target workspace
workspace_EXTERNAL_OBJECTS =

workspace: CMakeFiles/workspace.dir/C++基础语法/hello_world.cpp.o
workspace: CMakeFiles/workspace.dir/C++基础语法/变量.cpp.o
workspace: CMakeFiles/workspace.dir/build.make
workspace: CMakeFiles/workspace.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hu_chenfan/workfiles/workspace/cmake-build-debug-wsl/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable workspace"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/workspace.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/workspace.dir/build: workspace
.PHONY : CMakeFiles/workspace.dir/build

CMakeFiles/workspace.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/workspace.dir/cmake_clean.cmake
.PHONY : CMakeFiles/workspace.dir/clean

CMakeFiles/workspace.dir/depend:
	cd /home/hu_chenfan/workfiles/workspace/cmake-build-debug-wsl && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hu_chenfan/workfiles/workspace /home/hu_chenfan/workfiles/workspace /home/hu_chenfan/workfiles/workspace/cmake-build-debug-wsl /home/hu_chenfan/workfiles/workspace/cmake-build-debug-wsl /home/hu_chenfan/workfiles/workspace/cmake-build-debug-wsl/CMakeFiles/workspace.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/workspace.dir/depend

