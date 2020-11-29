cmake_minimum_required(VERSION 3.17.3)
project(Module01)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Werror")

add_executable(ex00 ex00/FragTrap.cpp ex00/FragTrap.hpp ex00/main.cpp)