set(vtkParallelMPI_LOADED 1)
set(vtkParallelMPI_DEPENDS "vtkParallelCore")
set(vtkParallelMPI_LIBRARIES "vtkParallelMPI")
set(vtkParallelMPI_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/vtk-6.3;/usr/lib/arm-linux-gnueabihf/openmpi/include/openmpi;/usr/lib/arm-linux-gnueabihf/openmpi/include/openmpi/opal/mca/event/libevent2022/libevent;/usr/lib/arm-linux-gnueabihf/openmpi/include/openmpi/opal/mca/event/libevent2022/libevent/include;/usr/lib/arm-linux-gnueabihf/openmpi/include")
set(vtkParallelMPI_LIBRARY_DIRS "")
set(vtkParallelMPI_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}//usr/lib/arm-linux-gnueabihf")
set(vtkParallelMPI_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkParallelMPIHierarchy.txt")

