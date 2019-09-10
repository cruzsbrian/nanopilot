package require -exact vtkcommoncore 6.3

foreach s {colors mccases backdrop grab} {
  source [file join [file dirname [info script]] "${s}.tcl"]
}

package provide vtktesting 6.3
