# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\QStringList_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\QStringList_autogen.dir\\ParseCache.txt"
  "QStringList_autogen"
  )
endif()
