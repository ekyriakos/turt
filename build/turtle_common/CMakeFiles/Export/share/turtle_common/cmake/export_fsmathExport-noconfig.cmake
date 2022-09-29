#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "turtle_common::fsmath" for configuration ""
set_property(TARGET turtle_common::fsmath APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(turtle_common::fsmath PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libfsmath.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS turtle_common::fsmath )
list(APPEND _IMPORT_CHECK_FILES_FOR_turtle_common::fsmath "${_IMPORT_PREFIX}/lib/libfsmath.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
