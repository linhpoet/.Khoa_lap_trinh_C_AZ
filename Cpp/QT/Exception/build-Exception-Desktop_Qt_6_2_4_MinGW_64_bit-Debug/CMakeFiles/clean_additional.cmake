# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Exception_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Exception_autogen.dir\\ParseCache.txt"
  "Exception_autogen"
  )
endif()
