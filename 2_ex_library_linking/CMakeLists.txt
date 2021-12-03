###############################################################################
# Minimal CMake version that is needed to process current project
cmake_minimum_required(VERSION 3.6)
###############################################################################
# Languages that are used in the project
enable_language(C)
###############################################################################
# Main project name
project(example_2)
###############################################################################
add_executable(${PROJECT_NAME})
target_sources(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/main.c)
target_link_libraries(${PROJECT_NAME} PRIVATE print)
###############################################################################
add_library(print)
target_sources(print PRIVATE ${PROJECT_SOURCE_DIR}/print_lib/src/print.c)
target_include_directories(print PUBLIC ${PROJECT_SOURCE_DIR}/print_lib/inc)
###############################################################################
