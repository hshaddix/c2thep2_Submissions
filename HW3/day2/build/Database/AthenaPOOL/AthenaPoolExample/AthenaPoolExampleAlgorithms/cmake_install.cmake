# Install script for directory: /home/shadhm/c2thep2_Submissions/HW3/day2/athena/Database/AthenaPOOL/AthenaPoolExample/AthenaPoolExampleAlgorithms

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/src/Database/AthenaPOOL/AthenaPoolExample/AthenaPoolExampleAlgorithms" TYPE DIRECTORY FILES "/home/shadhm/c2thep2_Submissions/HW3/day2/athena/Database/AthenaPOOL/AthenaPoolExample/AthenaPoolExampleAlgorithms/" USE_SOURCE_PERMISSIONS REGEX "/\\.svn$" EXCLUDE REGEX "/\\.git$" EXCLUDE REGEX "/[^/]*\\~$" EXCLUDE)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Debug" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE OPTIONAL FILES "/home/shadhm/c2thep2_Submissions/HW3/day2/build/x86_64-el9-gcc13-opt/lib/libAthenaPoolExampleAlgorithms.so.dbg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE MODULE OPTIONAL FILES "/home/shadhm/c2thep2_Submissions/HW3/day2/build/x86_64-el9-gcc13-opt/lib/libAthenaPoolExampleAlgorithms.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libAthenaPoolExampleAlgorithms.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libAthenaPoolExampleAlgorithms.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/cvmfs/sft.cern.ch/lcg/releases/binutils/2.40-acaab/x86_64-el9/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libAthenaPoolExampleAlgorithms.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/python/AthenaPoolExampleAlgorithms" TYPE FILE OPTIONAL FILES "/home/shadhm/c2thep2_Submissions/HW3/day2/build/x86_64-el9-gcc13-opt/python/AthenaPoolExampleAlgorithms/AthenaPoolExampleAlgorithmsConf.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process( COMMAND ${CMAKE_COMMAND} -E touch
      $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/python/AthenaPoolExampleAlgorithms/__init__.py )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/python/AthenaPoolExampleAlgorithms" TYPE FILE RENAME "AthenaPoolExampleConfig.py" FILES "/home/shadhm/c2thep2_Submissions/HW3/day2/athena/Database/AthenaPOOL/AthenaPoolExample/AthenaPoolExampleAlgorithms/python/AthenaPoolExampleConfig.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/python/AthenaPoolExampleAlgorithms" TYPE FILE RENAME "AthenaPoolExample_Concat.py" FILES "/home/shadhm/c2thep2_Submissions/HW3/day2/athena/Database/AthenaPOOL/AthenaPoolExample/AthenaPoolExampleAlgorithms/python/AthenaPoolExample_Concat.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/python/AthenaPoolExampleAlgorithms" TYPE FILE RENAME "AthenaPoolExample_Copy.py" FILES "/home/shadhm/c2thep2_Submissions/HW3/day2/athena/Database/AthenaPOOL/AthenaPoolExample/AthenaPoolExampleAlgorithms/python/AthenaPoolExample_Copy.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/python/AthenaPoolExampleAlgorithms" TYPE FILE RENAME "AthenaPoolExample_Read.py" FILES "/home/shadhm/c2thep2_Submissions/HW3/day2/athena/Database/AthenaPOOL/AthenaPoolExample/AthenaPoolExampleAlgorithms/python/AthenaPoolExample_Read.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/python/AthenaPoolExampleAlgorithms" TYPE FILE RENAME "AthenaPoolExample_ReadAgain.py" FILES "/home/shadhm/c2thep2_Submissions/HW3/day2/athena/Database/AthenaPOOL/AthenaPoolExample/AthenaPoolExampleAlgorithms/python/AthenaPoolExample_ReadAgain.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/python/AthenaPoolExampleAlgorithms" TYPE FILE RENAME "AthenaPoolExample_ReadCond.py" FILES "/home/shadhm/c2thep2_Submissions/HW3/day2/athena/Database/AthenaPOOL/AthenaPoolExample/AthenaPoolExampleAlgorithms/python/AthenaPoolExample_ReadCond.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/python/AthenaPoolExampleAlgorithms" TYPE FILE RENAME "AthenaPoolExample_ReadMeta.py" FILES "/home/shadhm/c2thep2_Submissions/HW3/day2/athena/Database/AthenaPOOL/AthenaPoolExample/AthenaPoolExampleAlgorithms/python/AthenaPoolExample_ReadMeta.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/python/AthenaPoolExampleAlgorithms" TYPE FILE RENAME "AthenaPoolExample_ReadWrite.py" FILES "/home/shadhm/c2thep2_Submissions/HW3/day2/athena/Database/AthenaPOOL/AthenaPoolExample/AthenaPoolExampleAlgorithms/python/AthenaPoolExample_ReadWrite.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/python/AthenaPoolExampleAlgorithms" TYPE FILE RENAME "AthenaPoolExample_ReadWriteNext.py" FILES "/home/shadhm/c2thep2_Submissions/HW3/day2/athena/Database/AthenaPOOL/AthenaPoolExample/AthenaPoolExampleAlgorithms/python/AthenaPoolExample_ReadWriteNext.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/python/AthenaPoolExampleAlgorithms" TYPE FILE RENAME "AthenaPoolExample_ReadxAODElectrons.py" FILES "/home/shadhm/c2thep2_Submissions/HW3/day2/athena/Database/AthenaPOOL/AthenaPoolExample/AthenaPoolExampleAlgorithms/python/AthenaPoolExample_ReadxAODElectrons.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/python/AthenaPoolExampleAlgorithms" TYPE FILE RENAME "AthenaPoolExample_Write.py" FILES "/home/shadhm/c2thep2_Submissions/HW3/day2/athena/Database/AthenaPOOL/AthenaPoolExample/AthenaPoolExampleAlgorithms/python/AthenaPoolExample_Write.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/python/AthenaPoolExampleAlgorithms" TYPE FILE RENAME "AthenaPoolExample_WriteCond.py" FILES "/home/shadhm/c2thep2_Submissions/HW3/day2/athena/Database/AthenaPOOL/AthenaPoolExample/AthenaPoolExampleAlgorithms/python/AthenaPoolExample_WriteCond.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/python/AthenaPoolExampleAlgorithms" TYPE FILE RENAME "AthenaPoolExample_WriteMeta.py" FILES "/home/shadhm/c2thep2_Submissions/HW3/day2/athena/Database/AthenaPOOL/AthenaPoolExample/AthenaPoolExampleAlgorithms/python/AthenaPoolExample_WriteMeta.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/python/AthenaPoolExampleAlgorithms" TYPE FILE RENAME "AthenaPoolExample_WritexAODElectrons.py" FILES "/home/shadhm/c2thep2_Submissions/HW3/day2/athena/Database/AthenaPOOL/AthenaPoolExample/AthenaPoolExampleAlgorithms/python/AthenaPoolExample_WritexAODElectrons.py")
endif()

