#----------------------------------------------------------------
# Generated CMake target import file for configuration "None".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "kmlbase" for configuration "None"
set_property(TARGET kmlbase APPEND PROPERTY IMPORTED_CONFIGURATIONS NONE)
set_target_properties(kmlbase PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_NONE "/usr/lib/arm-linux-gnueabihf/libexpat.so;/usr/lib/arm-linux-gnueabihf/libz.so;/usr/lib/arm-linux-gnueabihf/libminizip.so;/usr/lib/arm-linux-gnueabihf/liburiparser.so;/usr/lib/arm-linux-gnueabihf/libexpat.so"
  IMPORTED_LOCATION_NONE "/usr/lib/arm-linux-gnueabihf/libkmlbase.so.1.3.0"
  IMPORTED_SONAME_NONE "libkmlbase.so.1"
  )

list(APPEND _IMPORT_CHECK_TARGETS kmlbase )
list(APPEND _IMPORT_CHECK_FILES_FOR_kmlbase "/usr/lib/arm-linux-gnueabihf/libkmlbase.so.1.3.0" )

# Import target "kmldom" for configuration "None"
set_property(TARGET kmldom APPEND PROPERTY IMPORTED_CONFIGURATIONS NONE)
set_target_properties(kmldom PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_NONE "kmlbase"
  IMPORTED_LOCATION_NONE "/usr/lib/arm-linux-gnueabihf/libkmldom.so.1.3.0"
  IMPORTED_SONAME_NONE "libkmldom.so.1"
  )

list(APPEND _IMPORT_CHECK_TARGETS kmldom )
list(APPEND _IMPORT_CHECK_FILES_FOR_kmldom "/usr/lib/arm-linux-gnueabihf/libkmldom.so.1.3.0" )

# Import target "kmlxsd" for configuration "None"
set_property(TARGET kmlxsd APPEND PROPERTY IMPORTED_CONFIGURATIONS NONE)
set_target_properties(kmlxsd PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_NONE "kmlbase"
  IMPORTED_LOCATION_NONE "/usr/lib/arm-linux-gnueabihf/libkmlxsd.so.1.3.0"
  IMPORTED_SONAME_NONE "libkmlxsd.so.1"
  )

list(APPEND _IMPORT_CHECK_TARGETS kmlxsd )
list(APPEND _IMPORT_CHECK_FILES_FOR_kmlxsd "/usr/lib/arm-linux-gnueabihf/libkmlxsd.so.1.3.0" )

# Import target "kmlengine" for configuration "None"
set_property(TARGET kmlengine APPEND PROPERTY IMPORTED_CONFIGURATIONS NONE)
set_target_properties(kmlengine PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_NONE "kmlbase;kmldom"
  IMPORTED_LOCATION_NONE "/usr/lib/arm-linux-gnueabihf/libkmlengine.so.1.3.0"
  IMPORTED_SONAME_NONE "libkmlengine.so.1"
  )

list(APPEND _IMPORT_CHECK_TARGETS kmlengine )
list(APPEND _IMPORT_CHECK_FILES_FOR_kmlengine "/usr/lib/arm-linux-gnueabihf/libkmlengine.so.1.3.0" )

# Import target "kmlconvenience" for configuration "None"
set_property(TARGET kmlconvenience APPEND PROPERTY IMPORTED_CONFIGURATIONS NONE)
set_target_properties(kmlconvenience PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_NONE "kmlengine;kmldom;kmlbase"
  IMPORTED_LOCATION_NONE "/usr/lib/arm-linux-gnueabihf/libkmlconvenience.so.1.3.0"
  IMPORTED_SONAME_NONE "libkmlconvenience.so.1"
  )

list(APPEND _IMPORT_CHECK_TARGETS kmlconvenience )
list(APPEND _IMPORT_CHECK_FILES_FOR_kmlconvenience "/usr/lib/arm-linux-gnueabihf/libkmlconvenience.so.1.3.0" )

# Import target "kmlregionator" for configuration "None"
set_property(TARGET kmlregionator APPEND PROPERTY IMPORTED_CONFIGURATIONS NONE)
set_target_properties(kmlregionator PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_NONE "kmlbase;kmldom;kmlengine;kmlconvenience"
  IMPORTED_LOCATION_NONE "/usr/lib/arm-linux-gnueabihf/libkmlregionator.so.1.3.0"
  IMPORTED_SONAME_NONE "libkmlregionator.so.1"
  )

list(APPEND _IMPORT_CHECK_TARGETS kmlregionator )
list(APPEND _IMPORT_CHECK_FILES_FOR_kmlregionator "/usr/lib/arm-linux-gnueabihf/libkmlregionator.so.1.3.0" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
