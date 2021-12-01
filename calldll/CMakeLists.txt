include_directories ("${PROJECT_SOURCE_DIR}/hidll")

add_executable (calldll main.cpp)

target_link_libraries (calldll  hidll)

set_target_properties(calldll PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)
