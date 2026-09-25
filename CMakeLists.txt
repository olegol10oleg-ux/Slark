cmake_minimum_required(VERSION 4.2)
project(slark)

set(CMAKE_CXX_STANDARD 20)

add_executable(slark src/main.cpp
        src/DarkPact.cpp
        src/DarkPact.h
        src/Pounce.cpp
        src/Pounce.h)
