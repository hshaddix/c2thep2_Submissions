# Copyright (C) 2002-2022 CERN for the benefit of the ATLAS collaboration
#
# Configuration file for an ATLAS CMake release installation.
# It defines the following variables:
#
#  WorkDir_INSTALL_DIR  - Base install directory for the release
#  WorkDir_INCLUDE_DIR  - Include directory for the release
#  WorkDir_LIBRARY_DIR  - Library directory for the release
#  WorkDir_BINARY_DIR   - Runtime directory for the release
#  WorkDir_CMAKE_DIR    - Directory holding CMake files
#  WorkDir_PYTHON_DIR   - Directory holding python code
#  WorkDir_VERSION      - The version number of the release
#  WorkDir_TARGET_NAMES - The names of the targets provided by the
#                                      release
#  WorkDir_PLATFORM     - The name of the platform of the release
#
# Note however that most of the time you should not be using any of these
# variables, but the imported targets of the project instead. Even more, in most
# cases you will want to use atlas_project(...) to handle the imported targets
# in a "smart way".

cmake_minimum_required( VERSION 3.25 )

# Add the CMake provided initialisation code.

####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was ProjectConfig.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../" ABSOLUTE)

####################################################################################

# Set various directory variables.
set( WorkDir_INSTALL_DIR "${PACKAGE_PREFIX_DIR}/" )
set( WorkDir_INCLUDE_DIR "${PACKAGE_PREFIX_DIR}/include" )
set( WorkDir_LIBRARY_DIR "${PACKAGE_PREFIX_DIR}/lib" )
set( WorkDir_BINARY_DIR "${PACKAGE_PREFIX_DIR}/bin" )
set( WorkDir_CMAKE_DIR "${PACKAGE_PREFIX_DIR}/cmake" )
set( WorkDir_PYTHON_DIR "${PACKAGE_PREFIX_DIR}/python" )

# Set the version of the project.
set( WorkDir_VERSION "25.0.28" )

# Set the names of the targets that the project exported.
set( WorkDir_TARGET_NAMES "AthenaPoolExampleAlgorithms;AthenaPoolExampleConverter;AthenaPoolExampleConverterPoolCnv;AthenaPoolExampleData" )

# Print what project/release was found just now.
include( FindPackageHandleStandardArgs )
find_package_handle_standard_args( WorkDir
   REQUIRED_VARS CMAKE_CURRENT_LIST_FILE
   VERSION_VAR WorkDir_VERSION )

# The base projects that this project was built on top of:
set( WorkDir_BASE_PROJECTS Athena;25.0.28 )

# The platform name used for the build.
set( WorkDir_PLATFORM "x86_64-el9-gcc13-opt" )
set( ATLAS_PLATFORM "x86_64-el9-gcc13-opt" )

# Include the project-specific pre-include file, if it exists:
include( "${WorkDir_CMAKE_DIR}/PreConfig.cmake" OPTIONAL )

# Include the base projects, in the order in which they were given to
# the atlas_project call.
set( _baseProjectsWorkDir
   ${WorkDir_BASE_PROJECTS} )
while( _baseProjectsWorkDir )
   # Extract the release name and version, and then remove these entries
   # from the list:
   list( GET _baseProjectsWorkDir 0
      _base_projectWorkDir )
   list( GET _baseProjectsWorkDir 1
      _base_versionWorkDir )
   list( REMOVE_AT _baseProjectsWorkDir 0 1 )
   # Make sure that the project version is a regular version number:
   if( NOT _base_versionWorkDir MATCHES "^[0-9]+[0-9.]*" )
      # Let's not specify a version in this case...
      message( STATUS "Using base project "
         "\"${_base_projectWorkDir}\" without "
         "its \"${_base_versionWorkDir}\" version name/number" )
      set( _base_versionWorkDir )
   endif()
   # Find the base release:
   if( WorkDir_FIND_QUIETLY )
      find_package( ${_base_projectWorkDir}
         ${_base_versionWorkDir} EXACT QUIET )
   else()
      find_package( ${_base_projectWorkDir}
         ${_base_versionWorkDir} EXACT )
   endif()
endwhile()
unset( _baseProjectsWorkDir )
unset( _base_projectWorkDir )
unset( _base_versionWorkDir )

# Make CMake find the release's installed modules. Optionally append the module
# library instead of prepending it. To allow the user to override the
# modules packaged with the release.
if( ATLAS_DONT_PREPEND_PROJECT_MODULES )
   list( APPEND CMAKE_MODULE_PATH "${WorkDir_CMAKE_DIR}/modules" )
else()
   list( INSERT CMAKE_MODULE_PATH 0 "${WorkDir_CMAKE_DIR}/modules" )
endif()
list( REMOVE_DUPLICATES CMAKE_MODULE_PATH )

# Pull in the ATLAS code:
include( AtlasFunctions )

# Include the file listing all the imported targets and options:
include(
   "${WorkDir_CMAKE_DIR}/WorkDirConfig-targets.cmake"
   OPTIONAL )

# Check what build mode the release was built with. And set CMAKE_BUILD_TYPE
# to that value by default. While there should only be one build mode in
# a given install area, provide an explicit preference order to the different
# build modes:
foreach( _type "Debug" "RelWithDebInfo" "Release" "MinSizeRel" "Default" )
   string( TOLOWER "${_type}" _typeLower )
   set( _fileName "${WorkDir_CMAKE_DIR}/" )
   set( _fileName "${_fileName}WorkDirConfig-targets" )
   set( _fileName "${_fileName}-${_typeLower}.cmake" )
   if( EXISTS "${_fileName}" )
      # Set the build type forcefully. CMake (at least at the time of writing
      # [3.19]) needs to be handled in this weird way. (One would think that if
      # the variable is deemed not-yet-set, then you wouldn't need to use the
      # FORCE keyword. But you do...)
      if( NOT CMAKE_BUILD_TYPE )
         set( CMAKE_BUILD_TYPE "${_type}"
            CACHE STRING "Build mode for the release" FORCE )
      endif()
      break()
   endif()
   unset( _fileName )
   unset( _typeLower )
endforeach()

# If the libraries need to be set up...
if( WorkDir_FIND_COMPONENTS )

   # A sanity check.
   if( NOT ${WorkDir_FIND_COMPONENTS} STREQUAL "INCLUDE" )
      message( WARNING "Only the 'INCLUDE' component is understood. "
         "Continuing as if 'INCLUDE' would have been specified..." )
   endif()

   # Tell the user what's happening.
   message( STATUS "Including the packages from project "
      "WorkDir - 25.0.28..." )

   # Loop over the targets that this project has.
   foreach( _target ${WorkDir_TARGET_NAMES} )
      # If the target exists already, then don't do aything else.
      if( TARGET ${_target} )
         continue()
      endif()
      # Check whether the target in question is known in this release.
      if( NOT TARGET WorkDir::${_target} )
         message( SEND_ERROR
            "Target with name WorkDir::${_target} not found" )
         continue()
      endif()
      # And now create a deep copy of it.
      atlas_copy_target( WorkDir ${_target} )
   endforeach()

   # Include the base projects, in reverse order. So that the components from
   # the end of the list would get precedence over the components from the
   # front.
   set( _baseProjectsWorkDir
      ${WorkDir_BASE_PROJECTS} )
   while( _baseProjectsWorkDir )
      # Get the last project from the list:
      list( LENGTH _baseProjectsWorkDir
         _lengthWorkDir )
      math( EXPR _projNameIdxWorkDir
         "${_lengthWorkDir} - 2" )
      math( EXPR _projVersIdxWorkDir
         "${_lengthWorkDir} - 1" )
      list( GET _baseProjectsWorkDir
         ${_projNameIdxWorkDir}
         _base_projectWorkDir )
      list( GET _baseProjectsWorkDir
         ${_projVersIdxWorkDir}
         _base_versionWorkDir )
      list( REMOVE_AT _baseProjectsWorkDir
         ${_projNameIdxWorkDir}
         ${_projVersIdxWorkDir} )
      # Find the base release:
      find_package( ${_base_projectWorkDir}
         ${_base_versionWorkDir} EXACT COMPONENTS INCLUDE QUIET )
   endwhile()
   unset( _baseProjectsWorkDir )
   unset( _projNameIdxWorkDir )
   unset( _projVersIdxWorkDir )
   unset( _base_projectWorkDir )
   unset( _base_versionWorkDir )
   unset( _lengthWorkDir )

endif()

# Only do this if necessary:
if( NOT ATLAS_DONT_PREPEND_PROJECT_MODULES )
   # Make sure that after all of this, we still have this release's module
   # directory at the front of the list:
   list( INSERT CMAKE_MODULE_PATH 0 "${WorkDir_CMAKE_DIR}/modules" )
   list( REMOVE_DUPLICATES CMAKE_MODULE_PATH )
endif()

# Include the project-specific post-include file, if it exists:
include( "${WorkDir_CMAKE_DIR}/PostConfig.cmake" OPTIONAL )
