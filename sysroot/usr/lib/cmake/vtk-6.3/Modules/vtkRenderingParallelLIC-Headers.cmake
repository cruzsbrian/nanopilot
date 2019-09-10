set(vtkRenderingParallelLIC_HEADERS_LOADED 1)
set(vtkRenderingParallelLIC_HEADERS "vtkParallelTimer;vtkRenderingParallelLICObjectFactory;vtkPSurfaceLICPainter")

foreach(header ${vtkRenderingParallelLIC_HEADERS})
  set(vtkRenderingParallelLIC_HEADER_${header}_EXISTS 1)
endforeach()




