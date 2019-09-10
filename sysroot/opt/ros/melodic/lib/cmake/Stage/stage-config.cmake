# - Config file for Stage
# It defines the following variables:
#    STAGE_INCLUDE_DIRS - Stage Include directories
#    STAGE_LIBRARIES    - Stage link libraries

set(STAGE_INCLUDE_DIRS "/opt/ros/melodic/include/Stage-4.3"
  "/usr/lib/fltk;/usr/include"
  "/usr/include")
list(REMOVE_DUPLICATES STAGE_INCLUDE_DIRS)
set(STAGE_LIBRARIES
  "${stage_DIR}/../../../lib/libstage.so.4.3.0"
  "fltk_images;fltk_forms;fltk_gl;/usr/lib/arm-linux-gnueabihf/libGL.so;fltk;/usr/lib/arm-linux-gnueabihf/libSM.so;/usr/lib/arm-linux-gnueabihf/libICE.so;/usr/lib/arm-linux-gnueabihf/libX11.so;/usr/lib/arm-linux-gnueabihf/libXext.so;/usr/lib/arm-linux-gnueabihf/libm.so"
  "")

