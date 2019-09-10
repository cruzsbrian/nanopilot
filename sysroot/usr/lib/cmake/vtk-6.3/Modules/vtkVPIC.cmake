set(vtkVPIC_LOADED 1)
set(vtkVPIC_DEPENDS "vtkCommonCore;vtksys")
set(vtkVPIC_LIBRARIES "VPIC")
set(vtkVPIC_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/vtk-6.3")
set(vtkVPIC_LIBRARY_DIRS "")
set(vtkVPIC_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}//usr/lib/arm-linux-gnueabihf")
set(vtkVPIC_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkVPICHierarchy.txt")
set(vtkVPIC_EXCLUDE_FROM_WRAPPING 1)

