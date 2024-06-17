cmake_minimum_required(VERSION 3.26)
project(point-in-square)

set(CMAKE_CXX_STANDARD 23)

add_executable(point-in-square main.cpp
        Point.h
        Point.cpp
        Square.cpp
        Square.h)
