cmake_minimum_required(VERSION 3.17)
project(dataStructures)

set(CMAKE_CXX_STANDARD 14)

add_executable(dataStructures Node.h Node.cpp)

add_subdirectory(Lists)
add_subdirectory(Stack)