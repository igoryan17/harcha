cmake_minimum_required(VERSION 3.1)
project(CBstack)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    CBtester.c
    Implem.c
    Stack.h)

add_executable(CBstack ${SOURCE_FILES})