# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "105_AutoMemManage_autogen"
  "CMakeFiles\\105_AutoMemManage_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\105_AutoMemManage_autogen.dir\\ParseCache.txt"
  )
endif()
