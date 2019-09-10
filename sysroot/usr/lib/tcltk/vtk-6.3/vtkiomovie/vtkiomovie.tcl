package require -exact vtkbase 6.3

if {[info commands ::vtk::init::require_package] != ""} {
  if {[::vtk::init::require_package vtkIOMovieTCL 6.3]} {
    package provide vtkiomovie 6.3
  }
} else {
  puts stderr "Warning: Your TCLLIBPATH points to the VTK source tree. \
 Support for this is deprecated in VTK 4.2, and will be removed in a\
 future version.  Please point TCLLIBPATH to\
 {VTK_BINARY_DIR}/Wrapping/Tcl<config>, where <config>\
 is the build configuration.  The <config> value is empty for most\
 platforms, and /Debug, /Release, etc. for Visual Studio builds. \
 After this is done, you no longer need to set PATH or LD_LIBRARY_PATH\
 to point to the VTK build tree."
  if {[info commands vtkObject] != "" ||
    [::vtk::load_component vtkIOMovieTCL] == ""} {
    package provide vtkiomovie 6.3
  }
}
