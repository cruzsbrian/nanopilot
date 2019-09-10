# generated from catkin/cmake/template/pkgConfig.cmake.in

# append elements to a list and remove existing duplicates from the list
# copied from catkin/cmake/list_append_deduplicate.cmake to keep pkgConfig
# self contained
macro(_list_append_deduplicate listname)
  if(NOT "${ARGN}" STREQUAL "")
    if(${listname})
      list(REMOVE_ITEM ${listname} ${ARGN})
    endif()
    list(APPEND ${listname} ${ARGN})
  endif()
endmacro()

# append elements to a list if they are not already in the list
# copied from catkin/cmake/list_append_unique.cmake to keep pkgConfig
# self contained
macro(_list_append_unique listname)
  foreach(_item ${ARGN})
    list(FIND ${listname} ${_item} _index)
    if(_index EQUAL -1)
      list(APPEND ${listname} ${_item})
    endif()
  endforeach()
endmacro()

# pack a list of libraries with optional build configuration keywords
# copied from catkin/cmake/catkin_libraries.cmake to keep pkgConfig
# self contained
macro(_pack_libraries_with_build_configuration VAR)
  set(${VAR} "")
  set(_argn ${ARGN})
  list(LENGTH _argn _count)
  set(_index 0)
  while(${_index} LESS ${_count})
    list(GET _argn ${_index} lib)
    if("${lib}" MATCHES "^(debug|optimized|general)$")
      math(EXPR _index "${_index} + 1")
      if(${_index} EQUAL ${_count})
        message(FATAL_ERROR "_pack_libraries_with_build_configuration() the list of libraries '${ARGN}' ends with '${lib}' which is a build configuration keyword and must be followed by a library")
      endif()
      list(GET _argn ${_index} library)
      list(APPEND ${VAR} "${lib}${CATKIN_BUILD_CONFIGURATION_KEYWORD_SEPARATOR}${library}")
    else()
      list(APPEND ${VAR} "${lib}")
    endif()
    math(EXPR _index "${_index} + 1")
  endwhile()
endmacro()

# unpack a list of libraries with optional build configuration keyword prefixes
# copied from catkin/cmake/catkin_libraries.cmake to keep pkgConfig
# self contained
macro(_unpack_libraries_with_build_configuration VAR)
  set(${VAR} "")
  foreach(lib ${ARGN})
    string(REGEX REPLACE "^(debug|optimized|general)${CATKIN_BUILD_CONFIGURATION_KEYWORD_SEPARATOR}(.+)$" "\\1;\\2" lib "${lib}")
    list(APPEND ${VAR} "${lib}")
  endforeach()
endmacro()


if(pcl_ros_CONFIG_INCLUDED)
  return()
endif()
set(pcl_ros_CONFIG_INCLUDED TRUE)

# set variables for source/devel/install prefixes
if("FALSE" STREQUAL "TRUE")
  set(pcl_ros_SOURCE_PREFIX /tmp/binarydeb/ros-melodic-pcl-ros-1.6.2)
  set(pcl_ros_DEVEL_PREFIX /tmp/binarydeb/ros-melodic-pcl-ros-1.6.2/obj-arm-linux-gnueabihf/devel)
  set(pcl_ros_INSTALL_PREFIX "")
  set(pcl_ros_PREFIX ${pcl_ros_DEVEL_PREFIX})
else()
  set(pcl_ros_SOURCE_PREFIX "")
  set(pcl_ros_DEVEL_PREFIX "")
  set(pcl_ros_INSTALL_PREFIX /opt/ros/melodic)
  set(pcl_ros_PREFIX ${pcl_ros_INSTALL_PREFIX})
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "WARNING: package 'pcl_ros' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message("${_msg}")
endif()

# flag project as catkin-based to distinguish if a find_package()-ed project is a catkin project
set(pcl_ros_FOUND_CATKIN_PROJECT TRUE)

if(NOT "include;/usr/include;/usr/include/eigen3;/usr/include/pcl-1.8;/usr/include/vtk-6.3;/usr/include/freetype2;/usr/lib/arm-linux-gnueabihf/openmpi/include/openmpi;/usr/lib/arm-linux-gnueabihf/openmpi/include/openmpi/opal/mca/event/libevent2022/libevent;/usr/lib/arm-linux-gnueabihf/openmpi/include/openmpi/opal/mca/event/libevent2022/libevent/include;/usr/lib/arm-linux-gnueabihf/openmpi/include;/usr/include/python2.7;/usr/include/arm-linux-gnueabihf;/usr/include/hdf5/openmpi;/usr/include/libxml2;/usr/include/jsoncpp;/usr/include/tcl;/usr/include/ni;/usr/include/openni2 " STREQUAL " ")
  set(pcl_ros_INCLUDE_DIRS "")
  set(_include_dirs "include;/usr/include;/usr/include/eigen3;/usr/include/pcl-1.8;/usr/include/vtk-6.3;/usr/include/freetype2;/usr/lib/arm-linux-gnueabihf/openmpi/include/openmpi;/usr/lib/arm-linux-gnueabihf/openmpi/include/openmpi/opal/mca/event/libevent2022/libevent;/usr/lib/arm-linux-gnueabihf/openmpi/include/openmpi/opal/mca/event/libevent2022/libevent/include;/usr/lib/arm-linux-gnueabihf/openmpi/include;/usr/include/python2.7;/usr/include/arm-linux-gnueabihf;/usr/include/hdf5/openmpi;/usr/include/libxml2;/usr/include/jsoncpp;/usr/include/tcl;/usr/include/ni;/usr/include/openni2")
  if(NOT "https://github.com/ros-perception/perception_pcl/issues " STREQUAL " ")
    set(_report "Check the issue tracker 'https://github.com/ros-perception/perception_pcl/issues' and consider creating a ticket if the problem has not been reported yet.")
  elseif(NOT "http://ros.org/wiki/perception_pcl " STREQUAL " ")
    set(_report "Check the website 'http://ros.org/wiki/perception_pcl' for information and consider reporting the problem.")
  else()
    set(_report "Report the problem to the maintainer 'Paul Bovbel <paul@bovbel.com>, Kentaro Wada <www.kentaro.wada@gmail.com>' and request to fix the problem.")
  endif()
  foreach(idir ${_include_dirs})
    if(IS_ABSOLUTE ${idir} AND IS_DIRECTORY ${idir})
      set(include ${idir})
    elseif("${idir} " STREQUAL "include ")
      get_filename_component(include "${pcl_ros_DIR}/../../../include" ABSOLUTE)
      if(NOT IS_DIRECTORY ${include})
        message(FATAL_ERROR "Project 'pcl_ros' specifies '${idir}' as an include dir, which is not found.  It does not exist in '${include}'.  ${_report}")
      endif()
    else()
      message(FATAL_ERROR "Project 'pcl_ros' specifies '${idir}' as an include dir, which is not found.  It does neither exist as an absolute directory nor in '/opt/ros/melodic/${idir}'.  ${_report}")
    endif()
    _list_append_unique(pcl_ros_INCLUDE_DIRS ${include})
  endforeach()
endif()

set(libraries "pcl_ros_filters;pcl_ros_io;pcl_ros_tf;optimized;/usr/lib/arm-linux-gnueabihf/libpcl_common.so;debug;/usr/lib/arm-linux-gnueabihf/libpcl_common.so;optimized;/usr/lib/arm-linux-gnueabihf/libpcl_kdtree.so;debug;/usr/lib/arm-linux-gnueabihf/libpcl_kdtree.so;optimized;/usr/lib/arm-linux-gnueabihf/libpcl_octree.so;debug;/usr/lib/arm-linux-gnueabihf/libpcl_octree.so;optimized;/usr/lib/arm-linux-gnueabihf/libpcl_search.so;debug;/usr/lib/arm-linux-gnueabihf/libpcl_search.so;optimized;/usr/lib/arm-linux-gnueabihf/libpcl_features.so;debug;/usr/lib/arm-linux-gnueabihf/libpcl_features.so;optimized;/usr/lib/arm-linux-gnueabihf/libpcl_sample_consensus.so;debug;/usr/lib/arm-linux-gnueabihf/libpcl_sample_consensus.so;optimized;/usr/lib/arm-linux-gnueabihf/libpcl_filters.so;debug;/usr/lib/arm-linux-gnueabihf/libpcl_filters.so;optimized;/usr/lib/arm-linux-gnueabihf/libpcl_io.so;debug;/usr/lib/arm-linux-gnueabihf/libpcl_io.so;optimized;/usr/lib/arm-linux-gnueabihf/libpcl_ml.so;debug;/usr/lib/arm-linux-gnueabihf/libpcl_ml.so;optimized;/usr/lib/arm-linux-gnueabihf/libpcl_segmentation.so;debug;/usr/lib/arm-linux-gnueabihf/libpcl_segmentation.so;optimized;/usr/lib/arm-linux-gnueabihf/libpcl_surface.so;debug;/usr/lib/arm-linux-gnueabihf/libpcl_surface.so;/usr/lib/arm-linux-gnueabihf/libboost_system.so;/usr/lib/arm-linux-gnueabihf/libboost_filesystem.so;/usr/lib/arm-linux-gnueabihf/libboost_thread.so;/usr/lib/arm-linux-gnueabihf/libboost_date_time.so;/usr/lib/arm-linux-gnueabihf/libboost_iostreams.so;/usr/lib/arm-linux-gnueabihf/libboost_serialization.so;/usr/lib/arm-linux-gnueabihf/libboost_chrono.so;/usr/lib/arm-linux-gnueabihf/libboost_atomic.so;/usr/lib/arm-linux-gnueabihf/libboost_regex.so;/usr/lib/arm-linux-gnueabihf/libpthread.so;optimized;/usr/lib/arm-linux-gnueabihf/libqhull.so;debug;/usr/lib/arm-linux-gnueabihf/libqhull.so;/usr/lib/libOpenNI.so;/usr/lib/libOpenNI2.so;optimized;/usr/lib/arm-linux-gnueabihf/libflann_cpp_s.a;debug;/usr/lib/arm-linux-gnueabihf/libflann_cpp_s.a;/usr/lib/arm-linux-gnueabihf/libvtkChartsCore-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkCommonColor-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkCommonDataModel-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkCommonMath-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkCommonCore-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtksys-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkCommonMisc-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkCommonSystem-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkCommonTransforms-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkInfovisCore-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkFiltersExtraction-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkCommonExecutionModel-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkFiltersCore-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkFiltersGeneral-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkCommonComputationalGeometry-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkFiltersStatistics-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkImagingFourier-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkImagingCore-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkalglib-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkRenderingContext2D-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkRenderingCore-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkFiltersGeometry-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkFiltersSources-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkRenderingFreeType-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libfreetype.so;/usr/lib/arm-linux-gnueabihf/libz.so;/usr/lib/arm-linux-gnueabihf/libvtkftgl-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkDICOMParser-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkDomainsChemistry-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkIOXML-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkIOGeometry-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkIOCore-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkIOXMLParser-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libexpat.so;/usr/lib/arm-linux-gnueabihf/libvtkFiltersAMR-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkParallelCore-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkIOLegacy-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkFiltersFlowPaths-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkFiltersGeneric-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkFiltersHybrid-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkImagingSources-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkFiltersHyperTree-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkFiltersImaging-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkImagingGeneral-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkFiltersModeling-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkFiltersParallel-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkFiltersParallelFlowPaths-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkParallelMPI-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkFiltersParallelGeometry-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkFiltersParallelImaging-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkFiltersParallelMPI-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkFiltersParallelStatistics-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkFiltersProgrammable-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkFiltersPython-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libpython2.7.so;/usr/lib/arm-linux-gnueabihf/libvtkWrappingPython27Core-6.3.so.6.3.0;/usr/lib/libvtkWrappingTools-6.3.a;/usr/lib/arm-linux-gnueabihf/libvtkFiltersReebGraph-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkFiltersSMP-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkFiltersSelection-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkFiltersTexture-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkFiltersVerdict-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkverdict-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkGeovisCore-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkInfovisLayout-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkImagingHybrid-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkIOImage-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkmetaio-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libjpeg.so;/usr/lib/arm-linux-gnueabihf/libpng.so;/usr/lib/arm-linux-gnueabihf/libtiff.so;/usr/lib/arm-linux-gnueabihf/libvtkInfovisBoostGraphAlgorithms-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkInteractionStyle-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkInteractionWidgets-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkRenderingAnnotation-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkImagingColor-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkRenderingVolume-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkViewsCore-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libproj.so;/usr/lib/arm-linux-gnueabihf/libvtkIOAMR-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/hdf5/openmpi/libhdf5.so;/usr/lib/arm-linux-gnueabihf/libsz.so;/usr/lib/arm-linux-gnueabihf/libdl.so;/usr/lib/arm-linux-gnueabihf/libm.so;/usr/lib/arm-linux-gnueabihf/openmpi/lib/libmpi.so;/usr/lib/arm-linux-gnueabihf/libvtkIOEnSight-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkIOExodus-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkexoIIc-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libnetcdf_c++.so;/usr/lib/arm-linux-gnueabihf/libnetcdf.so;/usr/lib/arm-linux-gnueabihf/libvtkIOExport-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkRenderingGL2PS-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkRenderingContextOpenGL-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkRenderingOpenGL-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libgl2ps.so;/usr/lib/arm-linux-gnueabihf/libvtkRenderingLabel-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkIOFFMPEG-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkIOMovie-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libtheoraenc.so;/usr/lib/arm-linux-gnueabihf/libtheoradec.so;/usr/lib/arm-linux-gnueabihf/libogg.so;/usr/lib/arm-linux-gnueabihf/libvtkIOGDAL-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkIOGeoJSON-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkIOImport-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkIOInfovis-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libxml2.so;/usr/lib/arm-linux-gnueabihf/libvtkIOLSDyna-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkIOMINC-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkIOMPIImage-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkIOMPIParallel-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkIOParallel-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkIONetCDF-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libjsoncpp.so;/usr/lib/arm-linux-gnueabihf/libvtkIOMySQL-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkIOSQL-6.3.so.6.3.0;sqlite3;/usr/lib/arm-linux-gnueabihf/libvtkIOODBC-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkIOPLY-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkIOParallelExodus-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkIOParallelLSDyna-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkIOParallelNetCDF-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkIOParallelXML-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkIOPostgreSQL-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkIOVPIC-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkVPIC-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkIOVideo-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkIOXdmf2-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkxdmf2-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkImagingMath-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkImagingMorphological-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkImagingStatistics-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkImagingStencil-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkInteractionImage-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkLocalExample-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkParallelMPI4Py-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkPythonInterpreter-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkRenderingExternal-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkRenderingFreeTypeFontConfig-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkRenderingImage-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkRenderingLIC-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkRenderingLOD-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkRenderingMatplotlib-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkRenderingParallel-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkRenderingParallelLIC-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkRenderingVolumeAMR-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkRenderingVolumeOpenGL-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkTestingGenericBridge-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkTestingIOSQL-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkTestingRendering-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkViewsContext2D-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkViewsGeovis-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkViewsInfovis-6.3.so.6.3.0;/usr/lib/arm-linux-gnueabihf/libvtkWrappingJava-6.3.so.6.3.0")
foreach(library ${libraries})
  # keep build configuration keywords, target names and absolute libraries as-is
  if("${library}" MATCHES "^(debug|optimized|general)$")
    list(APPEND pcl_ros_LIBRARIES ${library})
  elseif(TARGET ${library})
    list(APPEND pcl_ros_LIBRARIES ${library})
  elseif(IS_ABSOLUTE ${library})
    list(APPEND pcl_ros_LIBRARIES ${library})
  else()
    set(lib_path "")
    set(lib "${library}-NOTFOUND")
    # since the path where the library is found is returned we have to iterate over the paths manually
    foreach(path /opt/ros/melodic/lib;/opt/ros/melodic/lib)
      find_library(lib ${library}
        PATHS ${path}
        NO_DEFAULT_PATH NO_CMAKE_FIND_ROOT_PATH)
      if(lib)
        set(lib_path ${path})
        break()
      endif()
    endforeach()
    if(lib)
      _list_append_unique(pcl_ros_LIBRARY_DIRS ${lib_path})
      list(APPEND pcl_ros_LIBRARIES ${lib})
    else()
      # as a fall back for non-catkin libraries try to search globally
      find_library(lib ${library})
      if(NOT lib)
        message(FATAL_ERROR "Project '${PROJECT_NAME}' tried to find library '${library}'.  The library is neither a target nor built/installed properly.  Did you compile project 'pcl_ros'?  Did you find_package() it before the subdirectory containing its code is included?")
      endif()
      list(APPEND pcl_ros_LIBRARIES ${lib})
    endif()
  endif()
endforeach()

set(pcl_ros_EXPORTED_TARGETS "pcl_ros_gencfg")
# create dummy targets for exported code generation targets to make life of users easier
foreach(t ${pcl_ros_EXPORTED_TARGETS})
  if(NOT TARGET ${t})
    add_custom_target(${t})
  endif()
endforeach()

set(depends "dynamic_reconfigure;message_filters;nodelet;nodelet_topic_tools;pcl_conversions;pcl_msgs;rosbag;roscpp;sensor_msgs;std_msgs;tf")
foreach(depend ${depends})
  string(REPLACE " " ";" depend_list ${depend})
  # the package name of the dependency must be kept in a unique variable so that it is not overwritten in recursive calls
  list(GET depend_list 0 pcl_ros_dep)
  list(LENGTH depend_list count)
  if(${count} EQUAL 1)
    # simple dependencies must only be find_package()-ed once
    if(NOT ${pcl_ros_dep}_FOUND)
      find_package(${pcl_ros_dep} REQUIRED NO_MODULE)
    endif()
  else()
    # dependencies with components must be find_package()-ed again
    list(REMOVE_AT depend_list 0)
    find_package(${pcl_ros_dep} REQUIRED NO_MODULE ${depend_list})
  endif()
  _list_append_unique(pcl_ros_INCLUDE_DIRS ${${pcl_ros_dep}_INCLUDE_DIRS})

  # merge build configuration keywords with library names to correctly deduplicate
  _pack_libraries_with_build_configuration(pcl_ros_LIBRARIES ${pcl_ros_LIBRARIES})
  _pack_libraries_with_build_configuration(_libraries ${${pcl_ros_dep}_LIBRARIES})
  _list_append_deduplicate(pcl_ros_LIBRARIES ${_libraries})
  # undo build configuration keyword merging after deduplication
  _unpack_libraries_with_build_configuration(pcl_ros_LIBRARIES ${pcl_ros_LIBRARIES})

  _list_append_unique(pcl_ros_LIBRARY_DIRS ${${pcl_ros_dep}_LIBRARY_DIRS})
  list(APPEND pcl_ros_EXPORTED_TARGETS ${${pcl_ros_dep}_EXPORTED_TARGETS})
endforeach()

set(pkg_cfg_extras "")
foreach(extra ${pkg_cfg_extras})
  if(NOT IS_ABSOLUTE ${extra})
    set(extra ${pcl_ros_DIR}/${extra})
  endif()
  include(${extra})
endforeach()
