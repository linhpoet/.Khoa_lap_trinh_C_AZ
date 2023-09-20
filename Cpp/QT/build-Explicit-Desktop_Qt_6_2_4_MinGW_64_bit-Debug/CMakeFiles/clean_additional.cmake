# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Explicit_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Explicit_autogen.dir\\ParseCache.txt"
  "Explicit_autogen"
  )
endif()
