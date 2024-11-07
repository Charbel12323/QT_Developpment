# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/appC_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/appC_autogen.dir/ParseCache.txt"
  "appC_autogen"
  )
endif()
