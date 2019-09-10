set(vtkPython_LOADED 1)
set(vtkPython_DEPENDS "")
set(vtkPython_LIBRARIES "/usr/lib/arm-linux-gnueabihf/libpython2.7.so")
set(vtkPython_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/vtk-6.3;/usr/include/python2.7")
set(vtkPython_LIBRARY_DIRS "")
set(vtkPython_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}//usr/lib/arm-linux-gnueabihf")
set(vtkPython_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkPythonHierarchy.txt")
set(vtkPython_EXCLUDE_FROM_WRAPPING 1)

