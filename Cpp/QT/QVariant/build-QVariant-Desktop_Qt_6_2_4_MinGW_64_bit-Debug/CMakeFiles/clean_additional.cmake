# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\QVariant_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\QVariant_autogen.dir\\ParseCache.txt"
  "QVariant_autogen"
  )
endif()
