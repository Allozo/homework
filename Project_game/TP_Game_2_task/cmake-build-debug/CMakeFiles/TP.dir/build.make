# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = /home/allozo/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/173.4674.29/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/allozo/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/173.4674.29/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/allozo/git/c++/TP

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/allozo/git/c++/TP/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/TP.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TP.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TP.dir/flags.make

CMakeFiles/TP.dir/test_tools_for_army.cpp.o: CMakeFiles/TP.dir/flags.make
CMakeFiles/TP.dir/test_tools_for_army.cpp.o: ../test_tools_for_army.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/allozo/git/c++/TP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TP.dir/test_tools_for_army.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TP.dir/test_tools_for_army.cpp.o -c /home/allozo/git/c++/TP/test_tools_for_army.cpp

CMakeFiles/TP.dir/test_tools_for_army.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TP.dir/test_tools_for_army.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/allozo/git/c++/TP/test_tools_for_army.cpp > CMakeFiles/TP.dir/test_tools_for_army.cpp.i

CMakeFiles/TP.dir/test_tools_for_army.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TP.dir/test_tools_for_army.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/allozo/git/c++/TP/test_tools_for_army.cpp -o CMakeFiles/TP.dir/test_tools_for_army.cpp.s

CMakeFiles/TP.dir/test_tools_for_army.cpp.o.requires:

.PHONY : CMakeFiles/TP.dir/test_tools_for_army.cpp.o.requires

CMakeFiles/TP.dir/test_tools_for_army.cpp.o.provides: CMakeFiles/TP.dir/test_tools_for_army.cpp.o.requires
	$(MAKE) -f CMakeFiles/TP.dir/build.make CMakeFiles/TP.dir/test_tools_for_army.cpp.o.provides.build
.PHONY : CMakeFiles/TP.dir/test_tools_for_army.cpp.o.provides

CMakeFiles/TP.dir/test_tools_for_army.cpp.o.provides.build: CMakeFiles/TP.dir/test_tools_for_army.cpp.o


# Object files for target TP
TP_OBJECTS = \
"CMakeFiles/TP.dir/test_tools_for_army.cpp.o"

# External object files for target TP
TP_EXTERNAL_OBJECTS =

TP: CMakeFiles/TP.dir/test_tools_for_army.cpp.o
TP: CMakeFiles/TP.dir/build.make
TP: CMakeFiles/TP.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/allozo/git/c++/TP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable TP"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TP.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TP.dir/build: TP

.PHONY : CMakeFiles/TP.dir/build

CMakeFiles/TP.dir/requires: CMakeFiles/TP.dir/test_tools_for_army.cpp.o.requires

.PHONY : CMakeFiles/TP.dir/requires

CMakeFiles/TP.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TP.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TP.dir/clean

CMakeFiles/TP.dir/depend:
	cd /home/allozo/git/c++/TP/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/allozo/git/c++/TP /home/allozo/git/c++/TP /home/allozo/git/c++/TP/cmake-build-debug /home/allozo/git/c++/TP/cmake-build-debug /home/allozo/git/c++/TP/cmake-build-debug/CMakeFiles/TP.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TP.dir/depend

