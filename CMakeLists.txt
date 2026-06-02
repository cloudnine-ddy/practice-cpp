cmake_minimum_required(VERSION 3.20)

project(practice_cpp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(lesson01_hello_world lessons/01_hello_world/main.cpp)
add_executable(lesson02_variables lessons/02_variables/main.cpp)
add_executable(lesson03_console_input lessons/03_console_input/main.cpp)
add_executable(lesson04_operators lessons/04_operators/main.cpp)

