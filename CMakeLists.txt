cmake_minimum_required(VERSION 3.20)
project(untitled2)

set(CMAKE_CXX_STANDARD 14)
configure_file(input.txt input.txt)
add_executable(untitled2 main.cpp)
