# This file will be configured to contain variables for CPack. These variables
# should be set in the CMake list file of the project before CPack module is
# included. The list of available CPACK_xxx variables and their associated
# documentation may be obtained using
#  cpack --help-variable-list
#
# Some variables are common to all generators (e.g. CPACK_PACKAGE_NAME)
# and some are specific to a generator
# (e.g. CPACK_NSIS_EXTRA_INSTALL_COMMANDS). The generator specific variables
# usually begin with CPACK_<GENNAME>_xxxx.


set(CPACK_BUILD_SOURCE_DIRS "/home/shadhm/c2thep2_Submissions/HW3/day2/athena/Projects/WorkDir;/home/shadhm/c2thep2_Submissions/HW3/day2/build")
set(CPACK_CMAKE_GENERATOR "Unix Makefiles")
set(CPACK_COMPONENTS_ALL "Debug;Unspecified")
set(CPACK_COMPONENT_UNSPECIFIED_HIDDEN "TRUE")
set(CPACK_COMPONENT_UNSPECIFIED_REQUIRED "TRUE")
set(CPACK_DEFAULT_PACKAGE_DESCRIPTION_FILE "/cvmfs/atlas.cern.ch/repo/ATLASLocalRootBase/x86_64/Cmake/3.29.5/Linux-x86_64/share/cmake-3.29/Templates/CPack.GenericDescription.txt")
set(CPACK_DEFAULT_PACKAGE_DESCRIPTION_SUMMARY "WorkDir built using CMake")
set(CPACK_GENERATOR "RPM")
set(CPACK_IGNORE_FILES "/CVS/;/\\.svn/;/\\.bzr/;/\\.hg/;/\\.git/;\\.swp\$;\\.#;/#")
set(CPACK_INNOSETUP_ARCHITECTURE "x64")
set(CPACK_INSTALLED_DIRECTORIES "/home/shadhm/c2thep2_Submissions/HW3/day2/athena/Projects/WorkDir;/")
set(CPACK_INSTALL_CMAKE_PROJECTS "")
set(CPACK_INSTALL_COMMANDS "/home/shadhm/c2thep2_Submissions/HW3/day2/build/CMakeFiles/cpack_install.sh")
set(CPACK_INSTALL_PREFIX "usr/WorkDir/25.0.28/InstallArea/x86_64-el9-gcc13-opt")
set(CPACK_INSTALL_SCRIPT "/cvmfs/atlas-nightlies.cern.ch/repo/sw/main_Athena_x86_64-el9-gcc13-opt/2025-03-27T2101/Athena/25.0.28/InstallArea/x86_64-el9-gcc13-opt/cmake/modules/scripts/cpack_install.cmake")
set(CPACK_MODULE_PATH "/cvmfs/atlas-nightlies.cern.ch/repo/sw/main_Athena_x86_64-el9-gcc13-opt/2025-03-27T2101/Athena/25.0.28/InstallArea/x86_64-el9-gcc13-opt/cmake/modules;/cvmfs/atlas-nightlies.cern.ch/repo/sw/main_Athena_x86_64-el9-gcc13-opt/2025-03-27T2101/AthenaExternals/25.0.28/InstallArea/x86_64-el9-gcc13-opt/cmake/modules;/cvmfs/atlas-nightlies.cern.ch/repo/sw/main_Athena_x86_64-el9-gcc13-opt/2025-03-27T2101/AthenaExternals/25.0.28/InstallArea/x86_64-el9-gcc13-opt/lib/cmake/VecCore;/cvmfs/atlas-nightlies.cern.ch/repo/sw/main_Athena_x86_64-el9-gcc13-opt/sw/lcg/releases/ROOT/6.34.04-2bf94/x86_64-el9-gcc13-opt/cmake/modules")
set(CPACK_NSIS_DISPLAY_NAME "WorkDir/25.0.28/InstallArea/x86_64-el9-gcc13-opt")
set(CPACK_NSIS_INSTALLER_ICON_CODE "")
set(CPACK_NSIS_INSTALLER_MUI_ICON_CODE "")
set(CPACK_NSIS_INSTALL_ROOT "$PROGRAMFILES")
set(CPACK_NSIS_PACKAGE_NAME "WorkDir/25.0.28/InstallArea/x86_64-el9-gcc13-opt")
set(CPACK_NSIS_UNINSTALL_NAME "Uninstall")
set(CPACK_OBJCOPY_EXECUTABLE "/cvmfs/sft.cern.ch/lcg/releases/binutils/2.40-acaab/x86_64-el9/bin/objcopy")
set(CPACK_OBJDUMP_EXECUTABLE "/cvmfs/sft.cern.ch/lcg/releases/binutils/2.40-acaab/x86_64-el9/bin/objdump")
set(CPACK_OUTPUT_CONFIG_FILE "/home/shadhm/c2thep2_Submissions/HW3/day2/build/CPackConfig.cmake")
set(CPACK_PACKAGE_CONTACT "atlas-sw-core@cern.ch")
set(CPACK_PACKAGE_DEFAULT_LOCATION "/usr")
set(CPACK_PACKAGE_DESCRIPTION "WorkDir - 25.0.28")
set(CPACK_PACKAGE_DESCRIPTION_FILE "/home/shadhm/c2thep2_Submissions/HW3/day2/build/CMakeFiles/README.txt")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "WorkDir - 25.0.28")
set(CPACK_PACKAGE_FILE_NAME "WorkDir-25.0.28-Source")
set(CPACK_PACKAGE_INSTALL_DIRECTORY "WorkDir/25.0.28/InstallArea/x86_64-el9-gcc13-opt")
set(CPACK_PACKAGE_INSTALL_REGISTRY_KEY "WorkDir/25.0.28/InstallArea/x86_64-el9-gcc13-opt")
set(CPACK_PACKAGE_NAME "WorkDir")
set(CPACK_PACKAGE_RELOCATABLE "true")
set(CPACK_PACKAGE_VENDOR "ATLAS Collaboration")
set(CPACK_PACKAGE_VERSION "25.0.28")
set(CPACK_PACKAGE_VERSION_MAJOR "25")
set(CPACK_PACKAGE_VERSION_MINOR "0")
set(CPACK_PACKAGE_VERSION_PATCH "28")
set(CPACK_PROJECT_CONFIG_FILE "/home/shadhm/c2thep2_Submissions/HW3/day2/build/CMakeFiles/CPackOptions.cmake")
set(CPACK_READELF_EXECUTABLE "/cvmfs/sft.cern.ch/lcg/releases/binutils/2.40-acaab/x86_64-el9/bin/readelf")
set(CPACK_RESOURCE_FILE_LICENSE "/cvmfs/atlas-nightlies.cern.ch/repo/sw/main_Athena_x86_64-el9-gcc13-opt/2025-03-27T2101/Athena/25.0.28/InstallArea/x86_64-el9-gcc13-opt/LICENSE.txt")
set(CPACK_RESOURCE_FILE_README "/home/shadhm/c2thep2_Submissions/HW3/day2/build/CMakeFiles/README.txt")
set(CPACK_RESOURCE_FILE_WELCOME "/cvmfs/atlas.cern.ch/repo/ATLASLocalRootBase/x86_64/Cmake/3.29.5/Linux-x86_64/share/cmake-3.29/Templates/CPack.GenericWelcome.txt")
set(CPACK_RPM_PACKAGE_ARCHITECTURE "noarch")
set(CPACK_RPM_PACKAGE_AUTOREQ " no")
set(CPACK_RPM_PACKAGE_AUTOREQPROV " no")
set(CPACK_RPM_PACKAGE_GROUP "ATLAS Software")
set(CPACK_RPM_PACKAGE_LICENSE "Apache License Version 2.0")
set(CPACK_RPM_PACKAGE_NAME "WorkDir_25.0.28_x86_64-el9-gcc13-opt")
set(CPACK_RPM_PACKAGE_PROVIDES "/bin/sh")
set(CPACK_RPM_PACKAGE_REQUIRES "Athena_25.0.28_x86_64-el9-gcc13-opt, LCG_107a_ATLAS_3_jsonmcpp_3.11.3_x86_64_el9_gcc13_opt, LCG_107a_ATLAS_3_freetype_2.10.0_x86_64_el9_gcc13_opt, LCG_107a_ATLAS_3_Qt5_5.15.15_x86_64_el9_gcc13_opt, LCG_107a_ATLAS_3_gtest_1.13.0_x86_64_el9_gcc13_opt, LCG_107a_ATLAS_3_XercesC_3.2.4_x86_64_el9_gcc13_opt, ATLAS_Geant4Data_geant4.10.6.patch03.atlasmt15, LCG_107a_ATLAS_3_Boost_1.87.0_x86_64_el9_gcc13_opt, LCG_107a_ATLAS_3_Python_3.11.9_x86_64_el9_gcc13_opt, LCG_107a_ATLAS_3_future_0.18.3_x86_64_el9_gcc13_opt, tdaq-common-12-01-01_x86_64-el9-gcc13-opt, LCG_107a_ATLAS_3_tbb_2021.10.0_x86_64_el9_gcc13_opt, LCG_107a_ATLAS_3_cppgsl_3.1.0_x86_64_el9_gcc13_opt, LCG_107a_ATLAS_3_AIDA_3.2.1_x86_64_el9_gcc13_opt, LCG_107a_ATLAS_3_HepPDT_2.06.01_x86_64_el9_gcc13_opt, LCG_107a_ATLAS_3_CppUnit_1.14.0_x86_64_el9_gcc13_opt, LCG_107a_ATLAS_3_libunwind_1.5.0_x86_64_el9_gcc13_opt, LCG_107a_ATLAS_3_vdt_0.4.4_x86_64_el9_gcc13_opt, LCG_107a_ATLAS_3_fmt_10.2.1_x86_64_el9_gcc13_opt, LCG_107a_ATLAS_3_cppcheck_2.16.0_x86_64_el9_gcc13_opt, LCG_107a_ATLAS_3_clhep_2.4.7.1_x86_64_el9_gcc13_opt, LCG_107a_ATLAS_3_ROOT_6.34.04_x86_64_el9_gcc13_opt, LCG_107a_ATLAS_3_rangev3_0.12.0_x86_64_el9_gcc13_opt")
set(CPACK_RPM_PACKAGE_SOURCES "ON")
set(CPACK_RPM_PACKAGE_VERSION "25.0.28")
set(CPACK_RPM_SPEC_MORE_DEFINE "
%global __os_install_post %{nil}
%define _unpackaged_files_terminate_build 0
%define _binaries_in_noarch_packages_terminate_build 0
%define _source_payload w2.xzdio
%define _binary_payload w2.xzdio
%undefine __brp_mangle_shebangs")
set(CPACK_SET_DESTDIR "OFF")
set(CPACK_SOURCE_GENERATOR "RPM")
set(CPACK_SOURCE_IGNORE_FILES "/CVS/;/\\.svn/;/\\.bzr/;/\\.hg/;/\\.git/;\\.swp\$;\\.#;/#")
set(CPACK_SOURCE_INSTALLED_DIRECTORIES "/home/shadhm/c2thep2_Submissions/HW3/day2/athena/Projects/WorkDir;/")
set(CPACK_SOURCE_OUTPUT_CONFIG_FILE "/home/shadhm/c2thep2_Submissions/HW3/day2/build/CPackSourceConfig.cmake")
set(CPACK_SOURCE_PACKAGE_FILE_NAME "WorkDir-25.0.28-Source")
set(CPACK_SOURCE_TOPLEVEL_TAG "Linux-Source")
set(CPACK_STRIP_FILES "")
set(CPACK_SYSTEM_NAME "Linux")
set(CPACK_THREADS "1")
set(CPACK_TOPLEVEL_TAG "Linux-Source")
set(CPACK_WIX_SIZEOF_VOID_P "8")

if(NOT CPACK_PROPERTIES_FILE)
  set(CPACK_PROPERTIES_FILE "/home/shadhm/c2thep2_Submissions/HW3/day2/build/CPackProperties.cmake")
endif()

if(EXISTS ${CPACK_PROPERTIES_FILE})
  include(${CPACK_PROPERTIES_FILE})
endif()
