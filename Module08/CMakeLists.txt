cmake_minimum_required(VERSION 3.17.3)
project(Module08)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Werror")

add_executable(ex00 ex00/main.cpp)
add_executable(ex01 ex01/span.cpp ex01/main.cpp)
add_executable(ex03 ex02/Mutantstack.cpp ex02/Mutantstack.hpp ex02/main.cpp)