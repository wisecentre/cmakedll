file (GLOB LIB_SRC "*.cpp")

include_directories (.)

# .lib or .a
# add_library(hidll ${LIB_SRC})

# .dll or .so
add_library(hidll SHARED ${LIB_SRC})

set_target_properties(hidll PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)
