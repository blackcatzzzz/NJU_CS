cmake_minimum_required(VERSION 3.9)
project(firstProj)

if(USE_32BITS)
    message(STATUS "using 32bits")
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -m32")

    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -m32")

else()
endif(USE_32BITS)

set(CMAKE_CXX_STANDARD 11)

add_executable(firstProj main.cpp)