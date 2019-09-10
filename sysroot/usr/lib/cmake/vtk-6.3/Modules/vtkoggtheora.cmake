set(vtkoggtheora_LOADED 1)
set(vtkoggtheora_DEPENDS "")
set(vtkoggtheora_LIBRARIES "/usr/lib/arm-linux-gnueabihf/libtheoraenc.so;/usr/lib/arm-linux-gnueabihf/libtheoradec.so;/usr/lib/arm-linux-gnueabihf/libogg.so")
set(vtkoggtheora_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/vtk-6.3;/usr/include;/usr/include")
set(vtkoggtheora_LIBRARY_DIRS "")
set(vtkoggtheora_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}//usr/lib/arm-linux-gnueabihf")
set(vtkoggtheora_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkoggtheoraHierarchy.txt")
set(vtkoggtheora_EXCLUDE_FROM_WRAPPING 1)

