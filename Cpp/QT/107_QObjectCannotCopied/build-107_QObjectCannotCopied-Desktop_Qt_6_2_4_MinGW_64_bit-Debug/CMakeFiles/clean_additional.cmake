# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "107_QObjectCannotCopied_autogen"
  "CMakeFiles\\107_QObjectCannotCopied_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\107_QObjectCannotCopied_autogen.dir\\ParseCache.txt"
  )
endif()
