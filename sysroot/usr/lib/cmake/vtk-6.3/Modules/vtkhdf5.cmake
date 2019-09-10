set(vtkhdf5_LOADED 1)
set(vtkhdf5_DEPENDS "vtkzlib")
set(vtkhdf5_LIBRARIES "/usr/lib/arm-linux-gnueabihf/hdf5/openmpi/libhdf5.so;/usr/lib/arm-linux-gnueabihf/libsz.so;/usr/lib/arm-linux-gnueabihf/libz.so;/usr/lib/arm-linux-gnueabihf/libdl.so;/usr/lib/arm-linux-gnueabihf/libm.so;/usr/lib/arm-linux-gnueabihf/openmpi/lib/libmpi.so")
set(vtkhdf5_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/vtk-6.3;/usr/include/hdf5/openmpi;/usr/lib/arm-linux-gnueabihf/openmpi/include/openmpi;/usr/lib/arm-linux-gnueabihf/openmpi/include/openmpi/opal/mca/event/libevent2022/libevent;/usr/lib/arm-linux-gnueabihf/openmpi/include/openmpi/opal/mca/event/libevent2022/libevent/include;/usr/lib/arm-linux-gnueabihf/openmpi/include")
set(vtkhdf5_LIBRARY_DIRS "")
set(vtkhdf5_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}//usr/lib/arm-linux-gnueabihf")
set(vtkhdf5_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkhdf5Hierarchy.txt")
set(vtkhdf5_EXCLUDE_FROM_WRAPPING 1)

