function(add_version_header target)
    configure_file(${CMAKE_CURRENT_FUNCTION_LIST_DIR}/header_version.h.in ${CMAKE_BINARY_DIR}/header_version.h)
    target_include_directories(${target} PRIVATE ${CMAKE_BINARY_DIR})
endfunction()
