cmake_minimum_required(VERSION 3.17.3)
project(Module01)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Werror")

add_executable(ex00 ex00/FragTrap.cpp ex00/main.cpp)
add_executable(ex01 ex01/FragTrap.cpp ex01/main.cpp ex01/ScavTrap.cpp)
add_executable(ex02 ex02/FragTrap.cpp ex02/main.cpp ex02/ScavTrap.cpp ex02/ClapTrap.cpp)
add_executable(ex03 ex03/FragTrap.cpp ex03/main.cpp ex03/ScavTrap.cpp ex03/ClapTrap.cpp ex03/NinjaTrap.cpp)
add_executable(ex04 ex04/FragTrap.cpp ex04/main.cpp ex04/ScavTrap.cpp ex04/ClapTrap.cpp ex04/NinjaTrap.cpp ex04/SuperTrap.cpp)