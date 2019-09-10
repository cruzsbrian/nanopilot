set(vtkpng_LOADED 1)
set(vtkpng_DEPENDS "vtkzlib")
set(vtkpng_LIBRARIES "/usr/lib/arm-linux-gnueabihf/libpng.so;/usr/lib/arm-linux-gnueabihf/libz.so")
set(vtkpng_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/vtk-6.3;/usr/include;/usr/include")
set(vtkpng_LIBRARY_DIRS "")
set(vtkpng_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}//usr/lib/arm-linux-gnueabihf")
set(vtkpng_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkpngHierarchy.txt")
set(vtkpng_EXCLUDE_FROM_WRAPPING 1)

