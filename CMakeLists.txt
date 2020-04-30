cmake_minimum_required(VERSION 3.15)
project(CS50 C)
set(CMAKE_C_STANDARD 99)

add_executable(caesar caesar.c substitution.c cash.c)
add_executable(bubble-sort bubble-sort.c)
add_executable(selection-sort selection-sort.c)
add_executable(linear-search linear-search.c)
