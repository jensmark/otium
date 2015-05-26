cmake_minimum_required(VERSION 3.1)
project(otium)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
SET(INCLUDE_DIR "${PROJECT_SOURCE_DIR}/otium" CACHE PATH " ")

add_subdirectory(src)

