# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "114_Q_Property_autogen"
  "CMakeFiles\\114_Q_Property_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\114_Q_Property_autogen.dir\\ParseCache.txt"
  )
endif()
