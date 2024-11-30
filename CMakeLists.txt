cmake_minimum_required(VERSION 3.10)

project(rk2)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_COMPILER /usr/bin/clang++)

add_executable(build
main.cpp)
