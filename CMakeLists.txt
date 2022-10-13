cmake_minimum_required(VERSION 3.23)
project(c_plus)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(01)
include_directories(02)
include_directories(03)

add_executable(c_plus
        01/HelloWorld.cpp
        01/HelloWorld.h
        02/ReadInput.cpp
        02/ReadInput.h
        03/TicketMachine.cpp
        03/TicketMachine.h
        04/Friend.cpp
        04/Friend.h
        main.cpp
        main.h)
