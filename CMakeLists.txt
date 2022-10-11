cmake_minimum_required(VERSION 3.23)
project(c_plus)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(
        c_plus
        _00_main.cpp
        _00_main.h
        _01_helloworld.cpp
        _01_helloworld.h
        _02_readinput.cpp
        _02_readinput.h
)
