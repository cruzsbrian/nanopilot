set(vtktiff_LOADED 1)
set(vtktiff_DEPENDS "vtkjpeg;vtkzlib")
set(vtktiff_LIBRARIES "/usr/lib/arm-linux-gnueabihf/libtiff.so")
set(vtktiff_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/vtk-6.3;/usr/include/arm-linux-gnueabihf")
set(vtktiff_LIBRARY_DIRS "")
set(vtktiff_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}//usr/lib/arm-linux-gnueabihf")
set(vtktiff_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtktiffHierarchy.txt")
set(vtktiff_EXCLUDE_FROM_WRAPPING 1)

