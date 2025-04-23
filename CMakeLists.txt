cmake_minimum_required(VERSION 3.29)
project(Assignment_1)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(Assignment_1
        src/item_type.cpp
        src/stack.cpp
        src/main.cpp
        src/loops.cpp)
