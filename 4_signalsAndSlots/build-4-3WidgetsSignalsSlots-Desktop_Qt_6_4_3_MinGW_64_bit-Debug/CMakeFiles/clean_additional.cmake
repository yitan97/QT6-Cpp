# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "4-3WidgetsSignalsSlots_autogen"
  "CMakeFiles\\4-3WidgetsSignalsSlots_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\4-3WidgetsSignalsSlots_autogen.dir\\ParseCache.txt"
  )
endif()
