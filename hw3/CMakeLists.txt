cmake_minimum_required(VERSION 2.8)
project(Homework3)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c99 -Wall -Wextra -Wshadow")

set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -O0 -g")

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/CMakeModules/")

if (UNIX)
    include_directories("/usr/include/") # For CLion to recognize check.h
endif (UNIX)

enable_testing()
add_subdirectory(tests)
