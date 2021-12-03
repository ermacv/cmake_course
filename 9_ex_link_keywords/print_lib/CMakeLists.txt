###############################################################################
# Minimal CMake version that is needed to process current project
cmake_minimum_required(VERSION 3.6)
###############################################################################
# Languages that are used in the project
enable_language(C)
###############################################################################
# Main project name
project(print)
###############################################################################
add_library(${PROJECT_NAME}_interface INTERFACE)
target_include_directories(${PROJECT_NAME}_interface INTERFACE ${PROJECT_SOURCE_DIR}/inc)
###############################################################################
add_library(${PROJECT_NAME}_1 STATIC EXCLUDE_FROM_ALL)
target_sources(${PROJECT_NAME}_1 PRIVATE ${PROJECT_SOURCE_DIR}/src/print_1.c)
target_link_libraries(${PROJECT_NAME}_1 PUBLIC ${PROJECT_NAME}_interface)
# target_include_directories(${PROJECT_NAME}_1 PUBLIC ${PROJECT_SOURCE_DIR}/inc)
###############################################################################
add_library(${PROJECT_NAME}_2 STATIC EXCLUDE_FROM_ALL)
target_sources(${PROJECT_NAME}_2 PRIVATE ${PROJECT_SOURCE_DIR}/src/print_2.c)
target_link_libraries(${PROJECT_NAME}_2 PUBLIC ${PROJECT_NAME}_interface)
# target_include_directories(${PROJECT_NAME}_2 PUBLIC ${PROJECT_SOURCE_DIR}/inc)
###############################################################################
add_library(${PROJECT_NAME}_3 STATIC EXCLUDE_FROM_ALL)
target_sources(${PROJECT_NAME}_3 PRIVATE ${PROJECT_SOURCE_DIR}/src/print_3.c)
target_link_libraries(${PROJECT_NAME}_3 PUBLIC ${PROJECT_NAME}_interface)
# target_include_directories(${PROJECT_NAME}_3 PUBLIC ${PROJECT_SOURCE_DIR}/inc)
###############################################################################
