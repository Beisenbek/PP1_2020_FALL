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
CMAKE_SOURCE_DIR = /Users/bsnbk/Documents/KBTU/2020/pp1/w13/g2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/bsnbk/Documents/KBTU/2020/pp1/w13/g2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/g07.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/g07.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/g07.dir/flags.make

CMakeFiles/g07.dir/7.cpp.o: CMakeFiles/g07.dir/flags.make
CMakeFiles/g07.dir/7.cpp.o: ../7.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bsnbk/Documents/KBTU/2020/pp1/w13/g2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/g07.dir/7.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/g07.dir/7.cpp.o -c /Users/bsnbk/Documents/KBTU/2020/pp1/w13/g2/7.cpp

CMakeFiles/g07.dir/7.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/g07.dir/7.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bsnbk/Documents/KBTU/2020/pp1/w13/g2/7.cpp > CMakeFiles/g07.dir/7.cpp.i

CMakeFiles/g07.dir/7.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/g07.dir/7.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bsnbk/Documents/KBTU/2020/pp1/w13/g2/7.cpp -o CMakeFiles/g07.dir/7.cpp.s

# Object files for target g07
g07_OBJECTS = \
"CMakeFiles/g07.dir/7.cpp.o"

# External object files for target g07
g07_EXTERNAL_OBJECTS =

g07: CMakeFiles/g07.dir/7.cpp.o
g07: CMakeFiles/g07.dir/build.make
g07: CMakeFiles/g07.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/bsnbk/Documents/KBTU/2020/pp1/w13/g2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable g07"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/g07.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/g07.dir/build: g07

.PHONY : CMakeFiles/g07.dir/build

CMakeFiles/g07.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/g07.dir/cmake_clean.cmake
.PHONY : CMakeFiles/g07.dir/clean

CMakeFiles/g07.dir/depend:
	cd /Users/bsnbk/Documents/KBTU/2020/pp1/w13/g2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/bsnbk/Documents/KBTU/2020/pp1/w13/g2 /Users/bsnbk/Documents/KBTU/2020/pp1/w13/g2 /Users/bsnbk/Documents/KBTU/2020/pp1/w13/g2/cmake-build-debug /Users/bsnbk/Documents/KBTU/2020/pp1/w13/g2/cmake-build-debug /Users/bsnbk/Documents/KBTU/2020/pp1/w13/g2/cmake-build-debug/CMakeFiles/g07.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/g07.dir/depend

