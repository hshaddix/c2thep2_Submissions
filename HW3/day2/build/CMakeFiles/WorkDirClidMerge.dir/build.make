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

# Utility rule file for WorkDirClidMerge.

# Include any custom commands dependencies for this target.
include CMakeFiles/WorkDirClidMerge.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/WorkDirClidMerge.dir/progress.make

CMakeFiles/WorkDirClidMerge: x86_64-el9-gcc13-opt/share/clid.db

x86_64-el9-gcc13-opt/share/clid.db: Database/AthenaPOOL/AthenaPoolExample/AthenaPoolExampleAlgorithms/AthenaPoolExampleAlgorithms_clid.db
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/shadhm/c2thep2_Submissions/HW3/day2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Built /home/shadhm/c2thep2_Submissions/HW3/day2/build/x86_64-el9-gcc13-opt/share/clid.db"
	/cvmfs/atlas.cern.ch/repo/ATLASLocalRootBase/x86_64/Cmake/3.29.5/Linux-x86_64/bin/cmake -E make_directory /home/shadhm/c2thep2_Submissions/HW3/day2/build/x86_64-el9-gcc13-opt/share
	/cvmfs/atlas-nightlies.cern.ch/repo/sw/main_Athena_x86_64-el9-gcc13-opt/2025-03-27T2101/Athena/25.0.28/InstallArea/x86_64-el9-gcc13-opt/cmake/modules/scripts/mergeClids.sh /home/shadhm/c2thep2_Submissions/HW3/day2/build/x86_64-el9-gcc13-opt/share/clid.db /home/shadhm/c2thep2_Submissions/HW3/day2/build/CMakeFiles/WorkDirClidMergeFiles.txt

WorkDirClidMerge: CMakeFiles/WorkDirClidMerge
WorkDirClidMerge: x86_64-el9-gcc13-opt/share/clid.db
WorkDirClidMerge: CMakeFiles/WorkDirClidMerge.dir/build.make
.PHONY : WorkDirClidMerge

# Rule to build all files generated by this target.
CMakeFiles/WorkDirClidMerge.dir/build: WorkDirClidMerge
.PHONY : CMakeFiles/WorkDirClidMerge.dir/build

CMakeFiles/WorkDirClidMerge.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/WorkDirClidMerge.dir/cmake_clean.cmake
.PHONY : CMakeFiles/WorkDirClidMerge.dir/clean

CMakeFiles/WorkDirClidMerge.dir/depend:
	cd /home/shadhm/c2thep2_Submissions/HW3/day2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/shadhm/c2thep2_Submissions/HW3/day2/athena/Projects/WorkDir /home/shadhm/c2thep2_Submissions/HW3/day2/athena/Projects/WorkDir /home/shadhm/c2thep2_Submissions/HW3/day2/build /home/shadhm/c2thep2_Submissions/HW3/day2/build /home/shadhm/c2thep2_Submissions/HW3/day2/build/CMakeFiles/WorkDirClidMerge.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/WorkDirClidMerge.dir/depend

