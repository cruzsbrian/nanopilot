set(vtkIOMySQL_LOADED 1)
set(vtkIOMySQL_DEPENDS "vtkCommonDataModel;vtkIOSQL;vtksys")
set(vtkIOMySQL_LIBRARIES "vtkIOMySQL")
set(vtkIOMySQL_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/vtk-6.3")
set(vtkIOMySQL_LIBRARY_DIRS "")
set(vtkIOMySQL_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}//usr/lib/arm-linux-gnueabihf")
set(vtkIOMySQL_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkIOMySQLHierarchy.txt")
set(vtkIOMySQL_IMPLEMENTS "vtkIOSQL")

