# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\DifferentConnectionSyntaxes_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\DifferentConnectionSyntaxes_autogen.dir\\ParseCache.txt"
  "DifferentConnectionSyntaxes_autogen"
  )
endif()
