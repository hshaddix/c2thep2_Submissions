#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "WorkDir::AthenaPoolExampleAlgorithms" for configuration "RelWithDebInfo"
set_property(TARGET WorkDir::AthenaPoolExampleAlgorithms APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(WorkDir::AthenaPoolExampleAlgorithms PROPERTIES
  IMPORTED_COMMON_LANGUAGE_RUNTIME_RELWITHDEBINFO ""
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libAthenaPoolExampleAlgorithms.so"
  IMPORTED_NO_SONAME_RELWITHDEBINFO "TRUE"
  )

list(APPEND _cmake_import_check_targets WorkDir::AthenaPoolExampleAlgorithms )
list(APPEND _cmake_import_check_files_for_WorkDir::AthenaPoolExampleAlgorithms "${_IMPORT_PREFIX}/lib/libAthenaPoolExampleAlgorithms.so" )

# Import target "WorkDir::AthenaPoolExampleConverter" for configuration "RelWithDebInfo"
set_property(TARGET WorkDir::AthenaPoolExampleConverter APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(WorkDir::AthenaPoolExampleConverter PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELWITHDEBINFO "AthenaPoolCnvSvcLib"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libAthenaPoolExampleConverter.so"
  IMPORTED_SONAME_RELWITHDEBINFO "libAthenaPoolExampleConverter.so"
  )

list(APPEND _cmake_import_check_targets WorkDir::AthenaPoolExampleConverter )
list(APPEND _cmake_import_check_files_for_WorkDir::AthenaPoolExampleConverter "${_IMPORT_PREFIX}/lib/libAthenaPoolExampleConverter.so" )

# Import target "WorkDir::AthenaPoolExampleConverterPoolCnv" for configuration "RelWithDebInfo"
set_property(TARGET WorkDir::AthenaPoolExampleConverterPoolCnv APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(WorkDir::AthenaPoolExampleConverterPoolCnv PROPERTIES
  IMPORTED_COMMON_LANGUAGE_RUNTIME_RELWITHDEBINFO ""
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libAthenaPoolExampleConverterPoolCnv.so"
  IMPORTED_NO_SONAME_RELWITHDEBINFO "TRUE"
  )

list(APPEND _cmake_import_check_targets WorkDir::AthenaPoolExampleConverterPoolCnv )
list(APPEND _cmake_import_check_files_for_WorkDir::AthenaPoolExampleConverterPoolCnv "${_IMPORT_PREFIX}/lib/libAthenaPoolExampleConverterPoolCnv.so" )

# Import target "WorkDir::AthenaPoolExampleData" for configuration "RelWithDebInfo"
set_property(TARGET WorkDir::AthenaPoolExampleData APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(WorkDir::AthenaPoolExampleData PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libAthenaPoolExampleData.so"
  IMPORTED_SONAME_RELWITHDEBINFO "libAthenaPoolExampleData.so"
  )

list(APPEND _cmake_import_check_targets WorkDir::AthenaPoolExampleData )
list(APPEND _cmake_import_check_files_for_WorkDir::AthenaPoolExampleData "${_IMPORT_PREFIX}/lib/libAthenaPoolExampleData.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
