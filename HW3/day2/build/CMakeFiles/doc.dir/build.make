# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

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
CMAKE_COMMAND = /cvmfs/atlas.cern.ch/repo/ATLASLocalRootBase/x86_64/Cmake/3.29.5/Linux-x86_64/bin/cmake

# The command to remove a file.
RM = /cvmfs/atlas.cern.ch/repo/ATLASLocalRootBase/x86_64/Cmake/3.29.5/Linux-x86_64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/shadhm/c2thep2_Submissions/HW3/day2/athena/Projects/WorkDir

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/shadhm/c2thep2_Submissions/HW3/day2/build

# Utility rule file for doc.

# Include any custom commands dependencies for this target.
include CMakeFiles/doc.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/doc.dir/progress.make

CMakeFiles/doc:
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/shadhm/c2thep2_Submissions/HW3/day2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating Doxygen documentation"
	/home/shadhm/c2thep2_Submissions/HW3/day2/build/CMakeFiles/atlas_build_run.sh /cvmfs/atlas-nightlies.cern.ch/repo/sw/main_Athena_x86_64-el9-gcc13-opt/sw/lcg/releases/LCG_107a_ATLAS_3/doxygen/1.13.1/x86_64-el9-gcc13-opt/bin/doxygen /home/shadhm/c2thep2_Submissions/HW3/day2/build/CMakeFiles/Doxyfile

doc: CMakeFiles/doc
doc: CMakeFiles/doc.dir/build.make
.PHONY : doc

# Rule to build all files generated by this target.
CMakeFiles/doc.dir/build: doc
.PHONY : CMakeFiles/doc.dir/build

CMakeFiles/doc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/doc.dir/cmake_clean.cmake
.PHONY : CMakeFiles/doc.dir/clean

CMakeFiles/doc.dir/depend:
	cd /home/shadhm/c2thep2_Submissions/HW3/day2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/shadhm/c2thep2_Submissions/HW3/day2/athena/Projects/WorkDir /home/shadhm/c2thep2_Submissions/HW3/day2/athena/Projects/WorkDir /home/shadhm/c2thep2_Submissions/HW3/day2/build /home/shadhm/c2thep2_Submissions/HW3/day2/build /home/shadhm/c2thep2_Submissions/HW3/day2/build/CMakeFiles/doc.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/doc.dir/depend

