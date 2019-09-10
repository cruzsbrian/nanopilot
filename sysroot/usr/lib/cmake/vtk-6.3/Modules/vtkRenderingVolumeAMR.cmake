set(vtkRenderingVolumeAMR_LOADED 1)
set(vtkRenderingVolumeAMR_DEPENDS "vtkFiltersAMR;vtkParallelCore;vtkRenderingVolumeOpenGL")
set(vtkRenderingVolumeAMR_LIBRARIES "vtkRenderingVolumeAMR")
set(vtkRenderingVolumeAMR_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/vtk-6.3")
set(vtkRenderingVolumeAMR_LIBRARY_DIRS "")
set(vtkRenderingVolumeAMR_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}//usr/lib/arm-linux-gnueabihf")
set(vtkRenderingVolumeAMR_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkRenderingVolumeAMRHierarchy.txt")

