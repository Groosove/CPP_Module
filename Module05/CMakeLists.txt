cmake_minimum_required(VERSION 3.17.3)
project(Module05)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Werror")

add_executable(ex00 ex00/Bureaucrat.cpp ex00/main.cpp)
add_executable(ex01 ex01/Bureaucrat.cpp ex01/main.cpp ex01/Form.cpp ex01/Form.hpp)