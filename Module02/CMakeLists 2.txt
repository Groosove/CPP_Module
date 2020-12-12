cmake_minimum_required(VERSION 3.17.3)
set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Werror")
project(Module02)

add_executable(ex00 ex00/Fixed.cpp ex00/main.cpp)
add_executable(ex01 ex01/Fixed.cpp ex01/main.cpp)