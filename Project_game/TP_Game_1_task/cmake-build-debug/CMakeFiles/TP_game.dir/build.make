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
CMAKE_SOURCE_DIR = /home/allozo/git/c++/homework/Project_game/TP_game

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/allozo/git/c++/homework/Project_game/TP_game/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/TP_game.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TP_game.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TP_game.dir/flags.make

CMakeFiles/TP_game.dir/test.cpp.o: CMakeFiles/TP_game.dir/flags.make
CMakeFiles/TP_game.dir/test.cpp.o: ../test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/allozo/git/c++/homework/Project_game/TP_game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TP_game.dir/test.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TP_game.dir/test.cpp.o -c /home/allozo/git/c++/homework/Project_game/TP_game/test.cpp

CMakeFiles/TP_game.dir/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TP_game.dir/test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/allozo/git/c++/homework/Project_game/TP_game/test.cpp > CMakeFiles/TP_game.dir/test.cpp.i

CMakeFiles/TP_game.dir/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TP_game.dir/test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/allozo/git/c++/homework/Project_game/TP_game/test.cpp -o CMakeFiles/TP_game.dir/test.cpp.s

CMakeFiles/TP_game.dir/test.cpp.o.requires:

.PHONY : CMakeFiles/TP_game.dir/test.cpp.o.requires

CMakeFiles/TP_game.dir/test.cpp.o.provides: CMakeFiles/TP_game.dir/test.cpp.o.requires
	$(MAKE) -f CMakeFiles/TP_game.dir/build.make CMakeFiles/TP_game.dir/test.cpp.o.provides.build
.PHONY : CMakeFiles/TP_game.dir/test.cpp.o.provides

CMakeFiles/TP_game.dir/test.cpp.o.provides.build: CMakeFiles/TP_game.dir/test.cpp.o


# Object files for target TP_game
TP_game_OBJECTS = \
"CMakeFiles/TP_game.dir/test.cpp.o"

# External object files for target TP_game
TP_game_EXTERNAL_OBJECTS =

TP_game: CMakeFiles/TP_game.dir/test.cpp.o
TP_game: CMakeFiles/TP_game.dir/build.make
TP_game: CMakeFiles/TP_game.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/allozo/git/c++/homework/Project_game/TP_game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable TP_game"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TP_game.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TP_game.dir/build: TP_game

.PHONY : CMakeFiles/TP_game.dir/build

CMakeFiles/TP_game.dir/requires: CMakeFiles/TP_game.dir/test.cpp.o.requires

.PHONY : CMakeFiles/TP_game.dir/requires

CMakeFiles/TP_game.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TP_game.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TP_game.dir/clean

CMakeFiles/TP_game.dir/depend:
	cd /home/allozo/git/c++/homework/Project_game/TP_game/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/allozo/git/c++/homework/Project_game/TP_game /home/allozo/git/c++/homework/Project_game/TP_game /home/allozo/git/c++/homework/Project_game/TP_game/cmake-build-debug /home/allozo/git/c++/homework/Project_game/TP_game/cmake-build-debug /home/allozo/git/c++/homework/Project_game/TP_game/cmake-build-debug/CMakeFiles/TP_game.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TP_game.dir/depend
