###############################################################################
# Minimal CMake version that is needed to process current project
cmake_minimum_required(VERSION 3.6)
###############################################################################
# Languages that are used in the project
enable_language(C)
###############################################################################
# Main project name
project(example_8)
###############################################################################
set(target_src
    ${PROJECT_SOURCE_DIR}/main.c
    ${PROJECT_SOURCE_DIR}/print_lib/src/print.c
)

set(target_public_inc
    ${PROJECT_SOURCE_DIR}
    ${PROJECT_SOURCE_DIR}/print_lib/inc
)

add_executable(${PROJECT_NAME})
target_sources(${PROJECT_NAME} PRIVATE ${target_src})
target_include_directories(${PROJECT_NAME} PRIVATE ${target_public_inc})
###############################################################################
