# Install script for directory: /home/shadhm/c2thep2_Submissions/HW3/day2/athena/Database/AthenaPOOL/AthenaPoolExample/AthenaPoolExampleConverter

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/WorkDir/25.0.28/InstallArea/x86_64-el9-gcc13-opt")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/cvmfs/sft.cern.ch/lcg/releases/binutils/2.40-acaab/x86_64-el9/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/src/Database/AthenaPOOL/AthenaPoolExample/AthenaPoolExampleConverter" TYPE DIRECTORY FILES "/home/shadhm/c2thep2_Submissions/HW3/day2/athena/Database/AthenaPOOL/AthenaPoolExample/AthenaPoolExampleConverter/" USE_SOURCE_PERMISSIONS REGEX "/\\.svn$" EXCLUDE REGEX "/\\.git$" EXCLUDE REGEX "/[^/]*\\~$" EXCLUDE)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  
      set( _destdir "$ENV{DESTDIR}")
      if( NOT _destdir STREQUAL "" )
         set( _destdir "${_destdir}/" )
      endif()
      execute_process( COMMAND ${CMAKE_COMMAND}
         -E make_directory
         ${_destdir}${CMAKE_INSTALL_PREFIX}/include )
      unset( _destdir )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  
         set( _destdir "$ENV{DESTDIR}")
         if( NOT _destdir STREQUAL "" )
            set( _destdir "${_destdir}/" )
         endif()
         execute_process( COMMAND ${CMAKE_COMMAND}
            -E create_symlink ../src/Database/AthenaPOOL/AthenaPoolExample/AthenaPoolExampleConverter/AthenaPoolExampleConverter
            ${_destdir}${CMAKE_INSTALL_PREFIX}/include/AthenaPoolExampleConverter )
         unset( _destdir )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Debug" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE OPTIONAL FILES "/home/shadhm/c2thep2_Submissions/HW3/day2/build/x86_64-el9-gcc13-opt/lib/libAthenaPoolExampleConverter.so.dbg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY OPTIONAL FILES "/home/shadhm/c2thep2_Submissions/HW3/day2/build/x86_64-el9-gcc13-opt/lib/libAthenaPoolExampleConverter.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libAthenaPoolExampleConverter.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libAthenaPoolExampleConverter.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/cvmfs/sft.cern.ch/lcg/releases/binutils/2.40-acaab/x86_64-el9/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libAthenaPoolExampleConverter.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/jobOptions/AthenaPoolExampleConverter" TYPE FILE OPTIONAL FILES "/home/shadhm/c2thep2_Submissions/HW3/day2/build/x86_64-el9-gcc13-opt/jobOptions/AthenaPoolExampleConverter/AthenaPoolExampleConverterItemList_joboptions.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/jobOptions/AthenaPoolExampleConverter" TYPE FILE OPTIONAL FILES "/home/shadhm/c2thep2_Submissions/HW3/day2/build/x86_64-el9-gcc13-opt/jobOptions/AthenaPoolExampleConverter/AthenaPoolExampleConverter_joboptions.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Debug" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE OPTIONAL FILES "/home/shadhm/c2thep2_Submissions/HW3/day2/build/x86_64-el9-gcc13-opt/lib/libAthenaPoolExampleConverterPoolCnv.so.dbg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE MODULE OPTIONAL FILES "/home/shadhm/c2thep2_Submissions/HW3/day2/build/x86_64-el9-gcc13-opt/lib/libAthenaPoolExampleConverterPoolCnv.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libAthenaPoolExampleConverterPoolCnv.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libAthenaPoolExampleConverterPoolCnv.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/cvmfs/sft.cern.ch/lcg/releases/binutils/2.40-acaab/x86_64-el9/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libAthenaPoolExampleConverterPoolCnv.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE OPTIONAL FILES "/home/shadhm/c2thep2_Submissions/HW3/day2/build/x86_64-el9-gcc13-opt/lib/libAthenaPoolExampleConverterDict_rdict.pcm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Debug" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE OPTIONAL FILES "/home/shadhm/c2thep2_Submissions/HW3/day2/build/x86_64-el9-gcc13-opt/lib/libAthenaPoolExampleConverterDict.so.dbg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY OPTIONAL FILES "/home/shadhm/c2thep2_Submissions/HW3/day2/build/x86_64-el9-gcc13-opt/lib/libAthenaPoolExampleConverterDict.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libAthenaPoolExampleConverterDict.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libAthenaPoolExampleConverterDict.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/cvmfs/sft.cern.ch/lcg/releases/binutils/2.40-acaab/x86_64-el9/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libAthenaPoolExampleConverterDict.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/shadhm/c2thep2_Submissions/HW3/day2/build/Database/AthenaPOOL/AthenaPoolExample/AthenaPoolExampleConverter/CMakeFiles/AthenaPoolExampleConverterDict.dir/install-cxx-module-bmi-RelWithDebInfo.cmake" OPTIONAL)
endif()

