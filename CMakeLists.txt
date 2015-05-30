cmake_minimum_required(VERSION 3.1)
project(otium)

# Use C++11
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

# Cache the include dir for later
SET(INCLUDE_DIR "${PROJECT_SOURCE_DIR}/otium" CACHE PATH " ")

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Add src directory
add_subdirectory(src)

# Install the header files
install(DIRECTORY otium DESTINATION otium/include/ FILES_MATCHING PATTERN "*.h")
