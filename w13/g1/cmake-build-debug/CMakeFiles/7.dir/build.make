# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/bsnbk/Documents/KBTU/2020/pp1/w13

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/bsnbk/Documents/KBTU/2020/pp1/w13/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/7.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/7.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/7.dir/flags.make

CMakeFiles/7.dir/7.cpp.o: CMakeFiles/7.dir/flags.make
CMakeFiles/7.dir/7.cpp.o: ../7.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bsnbk/Documents/KBTU/2020/pp1/w13/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/7.dir/7.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/7.dir/7.cpp.o -c /Users/bsnbk/Documents/KBTU/2020/pp1/w13/7.cpp

CMakeFiles/7.dir/7.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/7.dir/7.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bsnbk/Documents/KBTU/2020/pp1/w13/7.cpp > CMakeFiles/7.dir/7.cpp.i

CMakeFiles/7.dir/7.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/7.dir/7.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bsnbk/Documents/KBTU/2020/pp1/w13/7.cpp -o CMakeFiles/7.dir/7.cpp.s

# Object files for target 7
7_OBJECTS = \
"CMakeFiles/7.dir/7.cpp.o"

# External object files for target 7
7_EXTERNAL_OBJECTS =

7 : CMakeFiles/7.dir/7.cpp.o
7 : CMakeFiles/7.dir/build.make
7 : CMakeFiles/7.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/bsnbk/Documents/KBTU/2020/pp1/w13/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 7"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/7.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/7.dir/build: 7

.PHONY : CMakeFiles/7.dir/build

CMakeFiles/7.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/7.dir/cmake_clean.cmake
.PHONY : CMakeFiles/7.dir/clean

CMakeFiles/7.dir/depend:
	cd /Users/bsnbk/Documents/KBTU/2020/pp1/w13/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/bsnbk/Documents/KBTU/2020/pp1/w13 /Users/bsnbk/Documents/KBTU/2020/pp1/w13 /Users/bsnbk/Documents/KBTU/2020/pp1/w13/cmake-build-debug /Users/bsnbk/Documents/KBTU/2020/pp1/w13/cmake-build-debug /Users/bsnbk/Documents/KBTU/2020/pp1/w13/cmake-build-debug/CMakeFiles/7.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/7.dir/depend
