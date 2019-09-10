set(vtkRenderingExternal_HEADERS_LOADED 1)
set(vtkRenderingExternal_HEADERS "ExternalVTKWidget;vtkExternalLight;vtkExternalOpenGLCamera;vtkExternalOpenGLRenderer;vtkExternalOpenGLRenderWindow")

foreach(header ${vtkRenderingExternal_HEADERS})
  set(vtkRenderingExternal_HEADER_${header}_EXISTS 1)
endforeach()




