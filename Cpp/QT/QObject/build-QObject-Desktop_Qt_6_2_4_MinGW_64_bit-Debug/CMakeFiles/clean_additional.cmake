# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\QObject_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\QObject_autogen.dir\\ParseCache.txt"
  "QObject_autogen"
  )
endif()
