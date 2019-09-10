set(vtkIOODBC_LOADED 1)
set(vtkIOODBC_DEPENDS "vtkCommonDataModel;vtkIOSQL;vtksys")
set(vtkIOODBC_LIBRARIES "vtkIOODBC")
set(vtkIOODBC_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/vtk-6.3")
set(vtkIOODBC_LIBRARY_DIRS "")
set(vtkIOODBC_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}//usr/lib/arm-linux-gnueabihf")
set(vtkIOODBC_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkIOODBCHierarchy.txt")

