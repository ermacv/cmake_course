###############################################################################
# Minimal CMake version that is needed to process current project
cmake_minimum_required(VERSION 3.6)
###############################################################################
# Languages that are used in the project
enable_language(C)
###############################################################################
# Main project name
project(example_7 VERSION 0.56)
###############################################################################
include(${PROJECT_SOURCE_DIR}/functions/version.cmake)
###############################################################################
add_executable(${PROJECT_NAME})
target_sources(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/main.c)
target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_BINARY_DIR})
add_version_header(${PROJECT_NAME})
###############################################################################
