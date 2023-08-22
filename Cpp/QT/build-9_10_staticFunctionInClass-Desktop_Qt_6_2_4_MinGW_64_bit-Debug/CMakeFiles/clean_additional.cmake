# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "9_10_staticFunctionInClass_autogen"
  "CMakeFiles\\9_10_staticFunctionInClass_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\9_10_staticFunctionInClass_autogen.dir\\ParseCache.txt"
  )
endif()
