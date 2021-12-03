###############################################################################
add_library(print)
target_sources(print PRIVATE ${CMAKE_CURRENT_LIST_DIR}/src/print.c)
target_include_directories(print PUBLIC ${CMAKE_CURRENT_LIST_DIR}/inc)
###############################################################################
