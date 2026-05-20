cmake_minimum_required(VERSION 3.30)
project(PPC C)

set(CMAKE_C_STANDARD 99)

add_subdirectory(pcl)
add_subdirectory(pac)
add_subdirectory(pel)

add_executable(main main.c)

target_link_libraries(main pcl)
target_link_libraries(main pac)
target_link_libraries(main pel)