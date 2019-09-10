#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "fltk_cairo_STATIC" for configuration ""
set_property(TARGET fltk_cairo_STATIC APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(fltk_cairo_STATIC PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/arm-linux-gnueabihf/libfltk_cairo.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS fltk_cairo_STATIC )
list(APPEND _IMPORT_CHECK_FILES_FOR_fltk_cairo_STATIC "${_IMPORT_PREFIX}/lib/arm-linux-gnueabihf/libfltk_cairo.a" )

# Import target "fltk_cairo_SHARED" for configuration ""
set_property(TARGET fltk_cairo_SHARED APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(fltk_cairo_SHARED PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/arm-linux-gnueabihf/libfltk_cairo.so"
  IMPORTED_SONAME_NOCONFIG "libfltk_cairo.so.1.3"
  )

list(APPEND _IMPORT_CHECK_TARGETS fltk_cairo_SHARED )
list(APPEND _IMPORT_CHECK_FILES_FOR_fltk_cairo_SHARED "${_IMPORT_PREFIX}/lib/arm-linux-gnueabihf/libfltk_cairo.so" )

# Create imported target fltk_cairo
add_library(fltk_cairo SHARED IMPORTED)

# Import target "fltk_cairo" for configuration ""
set_property(TARGET fltk_cairo APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(fltk_cairo PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/arm-linux-gnueabihf/libfltk_cairo.so"
  IMPORTED_SONAME_NOCONFIG "libfltk_cairo.so.1.3"
  )

list(APPEND _IMPORT_CHECK_TARGETS fltk_cairo )
list(APPEND _IMPORT_CHECK_FILES_FOR_fltk_cairo "${_IMPORT_PREFIX}/lib/arm-linux-gnueabihf/libfltk_cairo.so" )

# Import target "fluid" for configuration ""
set_property(TARGET fluid APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(fluid PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/bin/fluid"
  )

list(APPEND _IMPORT_CHECK_TARGETS fluid )
list(APPEND _IMPORT_CHECK_FILES_FOR_fluid "${_IMPORT_PREFIX}/bin/fluid" )

# Import target "fltk_STATIC" for configuration ""
set_property(TARGET fltk_STATIC APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(fltk_STATIC PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "C;CXX"
  IMPORTED_LINK_INTERFACE_LIBRARIES_NOCONFIG "/usr/lib/arm-linux-gnueabihf/libdl.so;-lpthread;/usr/lib/arm-linux-gnueabihf/libSM.so;/usr/lib/arm-linux-gnueabihf/libICE.so;/usr/lib/arm-linux-gnueabihf/libX11.so;/usr/lib/arm-linux-gnueabihf/libXext.so;fltk_cairo_STATIC;cairo;/usr/lib/arm-linux-gnueabihf/libXinerama.so;/usr/lib/arm-linux-gnueabihf/libXfixes.so;/usr/lib/arm-linux-gnueabihf/libXcursor.so;/usr/lib/arm-linux-gnueabihf/libXrender.so;/usr/lib/arm-linux-gnueabihf/libXft.so;/usr/lib/arm-linux-gnueabihf/libfontconfig.so"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/arm-linux-gnueabihf/libfltk.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS fltk_STATIC )
list(APPEND _IMPORT_CHECK_FILES_FOR_fltk_STATIC "${_IMPORT_PREFIX}/lib/arm-linux-gnueabihf/libfltk.a" )

# Import target "fltk_forms_STATIC" for configuration ""
set_property(TARGET fltk_forms_STATIC APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(fltk_forms_STATIC PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LINK_INTERFACE_LIBRARIES_NOCONFIG "fltk_STATIC"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/arm-linux-gnueabihf/libfltk_forms.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS fltk_forms_STATIC )
list(APPEND _IMPORT_CHECK_FILES_FOR_fltk_forms_STATIC "${_IMPORT_PREFIX}/lib/arm-linux-gnueabihf/libfltk_forms.a" )

# Import target "fltk_images_STATIC" for configuration ""
set_property(TARGET fltk_images_STATIC APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(fltk_images_STATIC PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LINK_INTERFACE_LIBRARIES_NOCONFIG "fltk_STATIC;/usr/lib/arm-linux-gnueabihf/libjpeg.so;/usr/lib/arm-linux-gnueabihf/libz.so;/usr/lib/arm-linux-gnueabihf/libpng.so;/usr/lib/arm-linux-gnueabihf/libz.so"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/arm-linux-gnueabihf/libfltk_images.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS fltk_images_STATIC )
list(APPEND _IMPORT_CHECK_FILES_FOR_fltk_images_STATIC "${_IMPORT_PREFIX}/lib/arm-linux-gnueabihf/libfltk_images.a" )

# Import target "fltk_gl_STATIC" for configuration ""
set_property(TARGET fltk_gl_STATIC APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(fltk_gl_STATIC PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LINK_INTERFACE_LIBRARIES_NOCONFIG "fltk_STATIC;/usr/lib/arm-linux-gnueabihf/libGLU.so;/usr/lib/arm-linux-gnueabihf/libGL.so"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/arm-linux-gnueabihf/libfltk_gl.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS fltk_gl_STATIC )
list(APPEND _IMPORT_CHECK_FILES_FOR_fltk_gl_STATIC "${_IMPORT_PREFIX}/lib/arm-linux-gnueabihf/libfltk_gl.a" )

# Import target "fltk_SHARED" for configuration ""
set_property(TARGET fltk_SHARED APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(fltk_SHARED PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/arm-linux-gnueabihf/libfltk.so"
  IMPORTED_SONAME_NOCONFIG "libfltk.so.1.3"
  )

list(APPEND _IMPORT_CHECK_TARGETS fltk_SHARED )
list(APPEND _IMPORT_CHECK_FILES_FOR_fltk_SHARED "${_IMPORT_PREFIX}/lib/arm-linux-gnueabihf/libfltk.so" )

# Create imported target fltk
add_library(fltk SHARED IMPORTED)

# Import target "fltk" for configuration ""
set_property(TARGET fltk APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(fltk PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/arm-linux-gnueabihf/libfltk.so"
  IMPORTED_SONAME_NOCONFIG "libfltk.so.1.3"
  )

list(APPEND _IMPORT_CHECK_TARGETS fltk )
list(APPEND _IMPORT_CHECK_FILES_FOR_fltk "${_IMPORT_PREFIX}/lib/arm-linux-gnueabihf/libfltk.so" )

# Import target "fltk_forms_SHARED" for configuration ""
set_property(TARGET fltk_forms_SHARED APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(fltk_forms_SHARED PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/arm-linux-gnueabihf/libfltk_forms.so"
  IMPORTED_SONAME_NOCONFIG "libfltk_forms.so.1.3"
  )

list(APPEND _IMPORT_CHECK_TARGETS fltk_forms_SHARED )
list(APPEND _IMPORT_CHECK_FILES_FOR_fltk_forms_SHARED "${_IMPORT_PREFIX}/lib/arm-linux-gnueabihf/libfltk_forms.so" )

# Create imported target fltk_forms
add_library(fltk_forms SHARED IMPORTED)

# Import target "fltk_forms" for configuration ""
set_property(TARGET fltk_forms APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(fltk_forms PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/arm-linux-gnueabihf/libfltk_forms.so"
  IMPORTED_SONAME_NOCONFIG "libfltk_forms.so.1.3"
  )

list(APPEND _IMPORT_CHECK_TARGETS fltk_forms )
list(APPEND _IMPORT_CHECK_FILES_FOR_fltk_forms "${_IMPORT_PREFIX}/lib/arm-linux-gnueabihf/libfltk_forms.so" )

# Import target "fltk_images_SHARED" for configuration ""
set_property(TARGET fltk_images_SHARED APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(fltk_images_SHARED PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/arm-linux-gnueabihf/libfltk_images.so"
  IMPORTED_SONAME_NOCONFIG "libfltk_images.so.1.3"
  )

list(APPEND _IMPORT_CHECK_TARGETS fltk_images_SHARED )
list(APPEND _IMPORT_CHECK_FILES_FOR_fltk_images_SHARED "${_IMPORT_PREFIX}/lib/arm-linux-gnueabihf/libfltk_images.so" )

# Create imported target fltk_images
add_library(fltk_images SHARED IMPORTED)

# Import target "fltk_images" for configuration ""
set_property(TARGET fltk_images APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(fltk_images PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/arm-linux-gnueabihf/libfltk_images.so"
  IMPORTED_SONAME_NOCONFIG "libfltk_images.so.1.3"
  )

list(APPEND _IMPORT_CHECK_TARGETS fltk_images )
list(APPEND _IMPORT_CHECK_FILES_FOR_fltk_images "${_IMPORT_PREFIX}/lib/arm-linux-gnueabihf/libfltk_images.so" )

# Import target "fltk_gl_SHARED" for configuration ""
set_property(TARGET fltk_gl_SHARED APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(fltk_gl_SHARED PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/arm-linux-gnueabihf/libfltk_gl.so"
  IMPORTED_SONAME_NOCONFIG "libfltk_gl.so.1.3"
  )

list(APPEND _IMPORT_CHECK_TARGETS fltk_gl_SHARED )
list(APPEND _IMPORT_CHECK_FILES_FOR_fltk_gl_SHARED "${_IMPORT_PREFIX}/lib/arm-linux-gnueabihf/libfltk_gl.so" )

# Create imported target fltk_gl
add_library(fltk_gl SHARED IMPORTED)

# Import target "fltk_gl" for configuration ""
set_property(TARGET fltk_gl APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(fltk_gl PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/arm-linux-gnueabihf/libfltk_gl.so"
  IMPORTED_SONAME_NOCONFIG "libfltk_gl.so.1.3"
  )

list(APPEND _IMPORT_CHECK_TARGETS fltk_gl )
list(APPEND _IMPORT_CHECK_FILES_FOR_fltk_gl "${_IMPORT_PREFIX}/lib/arm-linux-gnueabihf/libfltk_gl.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)

# Don't enforce the existence of fluid when asked to skip it.
# (See https://bugs.debian.org/cgi-bin/bugreport.cgi?bug=855040.)
if(FLTK_SKIP_FLUID)
  list(REMOVE_ITEM _IMPORT_CHECK_TARGETS fluid)
endif()
