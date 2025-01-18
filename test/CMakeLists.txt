cmake_minimum_required(VERSION 3.5.0)
project(ARC-128C-test VERSION 0.1.0 LANGUAGES C)

add_executable(ARC-128C-test test.c)
include_directories(ARC-128C-test ${CMAKE_SOURCE_DIR}/include)
target_link_libraries(ARC-128C-test ${CMAKE_SOURCE_DIR}/build/src/libARC-128C.a)