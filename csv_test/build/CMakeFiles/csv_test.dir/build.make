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

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ben/projects/qt_projects/csv_test

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ben/projects/qt_projects/csv_test/build

# Include any dependencies generated for this target.
include CMakeFiles/csv_test.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/csv_test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/csv_test.dir/flags.make

CMakeFiles/csv_test.dir/main.cpp.o: CMakeFiles/csv_test.dir/flags.make
CMakeFiles/csv_test.dir/main.cpp.o: ../main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ben/projects/qt_projects/csv_test/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/csv_test.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/csv_test.dir/main.cpp.o -c /home/ben/projects/qt_projects/csv_test/main.cpp

CMakeFiles/csv_test.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/csv_test.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/ben/projects/qt_projects/csv_test/main.cpp > CMakeFiles/csv_test.dir/main.cpp.i

CMakeFiles/csv_test.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/csv_test.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/ben/projects/qt_projects/csv_test/main.cpp -o CMakeFiles/csv_test.dir/main.cpp.s

CMakeFiles/csv_test.dir/main.cpp.o.requires:
.PHONY : CMakeFiles/csv_test.dir/main.cpp.o.requires

CMakeFiles/csv_test.dir/main.cpp.o.provides: CMakeFiles/csv_test.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/csv_test.dir/build.make CMakeFiles/csv_test.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/csv_test.dir/main.cpp.o.provides

CMakeFiles/csv_test.dir/main.cpp.o.provides.build: CMakeFiles/csv_test.dir/main.cpp.o

# Object files for target csv_test
csv_test_OBJECTS = \
"CMakeFiles/csv_test.dir/main.cpp.o"

# External object files for target csv_test
csv_test_EXTERNAL_OBJECTS =

csv_test: CMakeFiles/csv_test.dir/main.cpp.o
csv_test: CMakeFiles/csv_test.dir/build.make
csv_test: CMakeFiles/csv_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable csv_test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/csv_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/csv_test.dir/build: csv_test
.PHONY : CMakeFiles/csv_test.dir/build

CMakeFiles/csv_test.dir/requires: CMakeFiles/csv_test.dir/main.cpp.o.requires
.PHONY : CMakeFiles/csv_test.dir/requires

CMakeFiles/csv_test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/csv_test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/csv_test.dir/clean

CMakeFiles/csv_test.dir/depend:
	cd /home/ben/projects/qt_projects/csv_test/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ben/projects/qt_projects/csv_test /home/ben/projects/qt_projects/csv_test /home/ben/projects/qt_projects/csv_test/build /home/ben/projects/qt_projects/csv_test/build /home/ben/projects/qt_projects/csv_test/build/CMakeFiles/csv_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/csv_test.dir/depend

