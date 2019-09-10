# Visualization Toolkit (VTK) Tcl package configuration.

package ifneeded vtkinit {6.3} {
  namespace eval ::vtk::init {
    proc load_library_package {libName libPath {libPrefix {lib}}} {
      #first try to load a static package, then try the shared package.
      if {[catch "load {} $libName"]} {
        set libExt [info sharedlibextension]
        set currentDirectory [pwd]
 append libPath /arm-linux-gnueabihf
        set libFile [file join $libPath "$libPrefix$libName-6.3$libExt"]
        if {[catch "cd {$libPath}; load {$libFile}" errorMessage]} {
          puts $errorMessage
        }
        cd $currentDirectory
      }
    }
    proc require_package {name {version {6.3}}} {
      if {[catch "package require -exact $name $version" errorMessage]} {
        puts $errorMessage
        return 0
      } else {
        return 1
      }
    }
    set version {6.3}
    set kits {}
    foreach kit { base  CommonCore CommonMath CommonMisc CommonSystem CommonTransforms CommonDataModel CommonColor CommonExecutionModel FiltersCore CommonComputationalGeometry FiltersGeneral ImagingCore ImagingFourier FiltersStatistics FiltersExtraction InfovisCore FiltersGeometry FiltersSources RenderingCore RenderingFreeType RenderingContextIID ChartsCore IOCore IOGeometry IOXMLParser IOXML DomainsChemistry IOLegacy ParallelCore FiltersAMR FiltersFlowPaths FiltersGeneric ImagingSources FiltersHybrid FiltersHyperTree ImagingGeneral FiltersImaging FiltersModeling FiltersParallel ParallelMPI FiltersParallelFlowPaths FiltersParallelGeometry FiltersParallelImaging FiltersParallelMPI FiltersParallelStatistics FiltersProgrammable FiltersReebGraph FiltersSMP FiltersSelection FiltersTexture FiltersVerdict InteractionStyle IOImage ImagingHybrid RenderingOpenGL IOSQL InfovisBoostGraphAlgorithms InfovisLayout RenderingLabel ImagingColor RenderingAnnotation RenderingVolume InteractionWidgets ViewsCore ViewsInfovis GeovisCore IOAMR IOEnSight IOExodus RenderingContextOpenGL RenderingGLtoPS IOExport IOMovie IOFFMPEG IOGDAL IOGeoJSON IOImport IOInfovis IOLSDyna IOMINC IOMPIImage IONetCDF IOParallel IOMPIParallel IOMySQL IOODBC IOPLY IOParallelExodus IOParallelLSDyna IOParallelNetCDF IOParallelXML IOPostgreSQL IOVPIC IOVideo IOXdmfII ImagingMath ImagingMorphological ImagingStatistics ImagingStencil InteractionImage PythonInterpreter RenderingExternal RenderingImage RenderingLIC RenderingLOD RenderingMatplotlib RenderingParallel RenderingParallelLIC RenderingQt RenderingTk RenderingVolumeOpenGL RenderingVolumeAMR TestingRendering ViewsContextIID ViewsGeovis } {
      lappend kits [string tolower "${kit}"]
    }
  }
  package provide vtkinit {6.3}
}

foreach kit {  CommonCore CommonMath CommonMisc CommonSystem CommonTransforms CommonDataModel CommonColor CommonExecutionModel FiltersCore CommonComputationalGeometry FiltersGeneral ImagingCore ImagingFourier FiltersStatistics FiltersExtraction InfovisCore FiltersGeometry FiltersSources RenderingCore RenderingFreeType RenderingContextIID ChartsCore IOCore IOGeometry IOXMLParser IOXML DomainsChemistry IOLegacy ParallelCore FiltersAMR FiltersFlowPaths FiltersGeneric ImagingSources FiltersHybrid FiltersHyperTree ImagingGeneral FiltersImaging FiltersModeling FiltersParallel ParallelMPI FiltersParallelFlowPaths FiltersParallelGeometry FiltersParallelImaging FiltersParallelMPI FiltersParallelStatistics FiltersProgrammable FiltersReebGraph FiltersSMP FiltersSelection FiltersTexture FiltersVerdict InteractionStyle IOImage ImagingHybrid RenderingOpenGL IOSQL InfovisBoostGraphAlgorithms InfovisLayout RenderingLabel ImagingColor RenderingAnnotation RenderingVolume InteractionWidgets ViewsCore ViewsInfovis GeovisCore IOAMR IOEnSight IOExodus RenderingContextOpenGL RenderingGLtoPS IOExport IOMovie IOFFMPEG IOGDAL IOGeoJSON IOImport IOInfovis IOLSDyna IOMINC IOMPIImage IONetCDF IOParallel IOMPIParallel IOMySQL IOODBC IOPLY IOParallelExodus IOParallelLSDyna IOParallelNetCDF IOParallelXML IOPostgreSQL IOVPIC IOVideo IOXdmfII ImagingMath ImagingMorphological ImagingStatistics ImagingStencil InteractionImage PythonInterpreter RenderingExternal RenderingImage RenderingLIC RenderingLOD RenderingMatplotlib RenderingParallel RenderingParallelLIC RenderingQt RenderingTk RenderingVolumeOpenGL RenderingVolumeAMR TestingRendering ViewsContextIID ViewsGeovis } {
  package ifneeded "vtk${kit}TCL" {6.3} "
    package require -exact vtkinit {6.3}
    ::vtk::init::load_library_package {vtk${kit}TCL} {[file dirname [file dirname [file dirname [info script]]]]}
  "
  package ifneeded "vtk[string tolower ${kit}]" {6.3} "
    package require -exact vtkinit {6.3}
    if {\[catch {source \[file join {[file dirname [info script]]} {vtk[string tolower ${kit}]} {vtk[string tolower ${kit}].tcl}\]} errorMessage\]} {
      puts \$errorMessage
    }
  "
}

foreach src {vtk vtkbase vtkinteraction vtktesting} {
  package ifneeded ${src} {6.3} "
    package require -exact vtkinit {6.3}
    if {\[catch {source \[file join {[file dirname [info script]]} {$src} {$src.tcl}\]} errorMessage\]} {
      puts \$errorMessage
    }
  "
}
