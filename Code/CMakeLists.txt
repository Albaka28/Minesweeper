cmake_minimum_required(VERSION 3.20)
project(Minesweeper)

add_subdirectory(Logik)
add_subdirectory(Optik)

add_executable(main.cpp)