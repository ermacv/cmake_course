###############################################################################
# Minimal CMake version that is needed to process current project
cmake_minimum_required(VERSION 3.6)
###############################################################################
# Languages that are used in the project
enable_language(C)
###############################################################################
# Main project name
project(example_10)
###############################################################################
add_executable(${PROJECT_NAME})
target_sources(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/main.c)
###############################################################################
if(USER_ADD_DEFINE)
    target_compile_definitions(${PROJECT_NAME} PRIVATE SOME_DEFINITION)
endif()
###############################################################################
