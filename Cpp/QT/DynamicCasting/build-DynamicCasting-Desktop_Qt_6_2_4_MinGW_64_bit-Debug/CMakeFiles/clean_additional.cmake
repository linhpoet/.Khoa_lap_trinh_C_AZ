# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\DynamicCasting_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\DynamicCasting_autogen.dir\\ParseCache.txt"
  "DynamicCasting_autogen"
  )
endif()
