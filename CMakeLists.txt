project(CMakeTemplate)
include_directories(include/)
file(GLOB_RECURSE MATH_LIB_SRC
        src/*.c
        )
add_library(matrix STATIC ${MATH_LIB_SRC})
add_executable(demo example/main.c)
target_link_libraries(demo matrix)