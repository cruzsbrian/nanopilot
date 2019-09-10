set(vtkParallelMPI4Py_LOADED 1)
set(vtkParallelMPI4Py_DEPENDS "vtkParallelMPI;vtkPython")
set(vtkParallelMPI4Py_LIBRARIES "vtkParallelMPI4Py")
set(vtkParallelMPI4Py_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/vtk-6.3;/usr/lib/arm-linux-gnueabihf/openmpi/include/openmpi;/usr/lib/arm-linux-gnueabihf/openmpi/include/openmpi/opal/mca/event/libevent2022/libevent;/usr/lib/arm-linux-gnueabihf/openmpi/include/openmpi/opal/mca/event/libevent2022/libevent/include;/usr/lib/arm-linux-gnueabihf/openmpi/include")
set(vtkParallelMPI4Py_LIBRARY_DIRS "")
set(vtkParallelMPI4Py_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}//usr/lib/arm-linux-gnueabihf")
set(vtkParallelMPI4Py_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkParallelMPI4PyHierarchy.txt")

