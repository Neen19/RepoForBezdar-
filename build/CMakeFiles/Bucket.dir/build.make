# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.27.5/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.27.5/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/nikita/CLionProjects/lab3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/nikita/CLionProjects/lab3/build

# Include any dependencies generated for this target.
include CMakeFiles/Bucket.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Bucket.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Bucket.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Bucket.dir/flags.make

CMakeFiles/Bucket.dir/cppFiles/Bucket.cpp.o: CMakeFiles/Bucket.dir/flags.make
CMakeFiles/Bucket.dir/cppFiles/Bucket.cpp.o: /Users/nikita/CLionProjects/lab3/cppFiles/Bucket.cpp
CMakeFiles/Bucket.dir/cppFiles/Bucket.cpp.o: CMakeFiles/Bucket.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/nikita/CLionProjects/lab3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Bucket.dir/cppFiles/Bucket.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Bucket.dir/cppFiles/Bucket.cpp.o -MF CMakeFiles/Bucket.dir/cppFiles/Bucket.cpp.o.d -o CMakeFiles/Bucket.dir/cppFiles/Bucket.cpp.o -c /Users/nikita/CLionProjects/lab3/cppFiles/Bucket.cpp

CMakeFiles/Bucket.dir/cppFiles/Bucket.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Bucket.dir/cppFiles/Bucket.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nikita/CLionProjects/lab3/cppFiles/Bucket.cpp > CMakeFiles/Bucket.dir/cppFiles/Bucket.cpp.i

CMakeFiles/Bucket.dir/cppFiles/Bucket.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Bucket.dir/cppFiles/Bucket.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nikita/CLionProjects/lab3/cppFiles/Bucket.cpp -o CMakeFiles/Bucket.dir/cppFiles/Bucket.cpp.s

# Object files for target Bucket
Bucket_OBJECTS = \
"CMakeFiles/Bucket.dir/cppFiles/Bucket.cpp.o"

# External object files for target Bucket
Bucket_EXTERNAL_OBJECTS =

libBucket.a: CMakeFiles/Bucket.dir/cppFiles/Bucket.cpp.o
libBucket.a: CMakeFiles/Bucket.dir/build.make
libBucket.a: CMakeFiles/Bucket.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/nikita/CLionProjects/lab3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libBucket.a"
	$(CMAKE_COMMAND) -P CMakeFiles/Bucket.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Bucket.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Bucket.dir/build: libBucket.a
.PHONY : CMakeFiles/Bucket.dir/build

CMakeFiles/Bucket.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Bucket.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Bucket.dir/clean

CMakeFiles/Bucket.dir/depend:
	cd /Users/nikita/CLionProjects/lab3/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/nikita/CLionProjects/lab3 /Users/nikita/CLionProjects/lab3 /Users/nikita/CLionProjects/lab3/build /Users/nikita/CLionProjects/lab3/build /Users/nikita/CLionProjects/lab3/build/CMakeFiles/Bucket.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Bucket.dir/depend
