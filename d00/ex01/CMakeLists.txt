cmake_minimum_required(VERSION 3.15)
project(ex01)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(ex01
        Phonebook.cpp
        Phonebook.hpp)
