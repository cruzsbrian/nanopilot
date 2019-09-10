set(vtknetcdf_LOADED 1)
set(vtknetcdf_DEPENDS "vtkhdf5")
set(vtknetcdf_LIBRARIES "/usr/lib/arm-linux-gnueabihf/libnetcdf_c++.so;/usr/lib/arm-linux-gnueabihf/libnetcdf.so")
set(vtknetcdf_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/vtk-6.3;/usr/include;/usr/include")
set(vtknetcdf_LIBRARY_DIRS "")
set(vtknetcdf_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}//usr/lib/arm-linux-gnueabihf")
set(vtknetcdf_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtknetcdfHierarchy.txt")
set(vtknetcdf_EXCLUDE_FROM_WRAPPING 1)

