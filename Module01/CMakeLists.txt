cmake_minimum_required(VERSION 3.17.3)
project(Module01)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Werror")

add_executable(ex00 ex00/Pony.cpp ex00/main.cpp)
add_executable(ex01 ex01/ex01.cpp)
add_executable(ex02 ex02/ZombieEvent.cpp ex02/Zombie.cpp ex02/main.cpp)
add_executable(ex03 ex03/main.cpp ex03/ZombieHorde.cpp ex03/Zombie.cpp)
add_executable(ex04 ex04/ex04.cpp)
add_executable(ex05 ex05/Human.cpp ex05/Human.hpp ex05/Brain.cpp ex05/Brain.hpp ex05/main.cpp)
add_executable(ex06 ex06/Weapon.cpp ex06/HumanA.cpp ex06/HumanB.cpp ex06/main.cpp)
add_executable(ex07 ex07/main.cpp ex07/Replace.cpp ex07/Replace.hpp)