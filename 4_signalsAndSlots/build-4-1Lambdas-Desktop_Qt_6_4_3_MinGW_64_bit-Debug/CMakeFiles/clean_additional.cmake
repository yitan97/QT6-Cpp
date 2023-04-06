# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "4-1Lambdas_autogen"
  "CMakeFiles\\4-1Lambdas_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\4-1Lambdas_autogen.dir\\ParseCache.txt"
  )
endif()
