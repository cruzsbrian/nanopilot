set(vtkfreetype_LOADED 1)
set(vtkfreetype_DEPENDS "vtkzlib")
set(vtkfreetype_LIBRARIES "/usr/lib/arm-linux-gnueabihf/libfreetype.so")
set(vtkfreetype_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/vtk-6.3;/usr/include/freetype2")
set(vtkfreetype_LIBRARY_DIRS "")
set(vtkfreetype_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}//usr/lib/arm-linux-gnueabihf")
set(vtkfreetype_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkfreetypeHierarchy.txt")
set(vtkfreetype_EXCLUDE_FROM_WRAPPING 1)

