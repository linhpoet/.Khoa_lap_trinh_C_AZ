# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "8_9_Qobject_Class_autogen"
  "CMakeFiles\\8_9_Qobject_Class_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\8_9_Qobject_Class_autogen.dir\\ParseCache.txt"
  )
endif()
