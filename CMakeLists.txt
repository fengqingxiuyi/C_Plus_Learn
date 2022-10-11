cmake_minimum_required(VERSION 3.23)
project(c_plus)

set(CMAKE_CXX_STANDARD 14)

include_directories(helloworld)

add_executable(c_plus
        helloworld/helloworld.cpp
        helloworld/helloworld.h)
