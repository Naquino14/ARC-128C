cmake_minimum_required(VERSION 3.5.0)
project(ARC-128C VERSION 0.1.0 LANGUAGES C)

include_directories(ARC-128C ${CMAKE_SOURCE_DIR}/include)

add_library(ARC-128C ARC-128C.c)