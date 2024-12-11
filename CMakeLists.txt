cmake_minimum_required(VERSION 3.28)
project(one_line_memory_game)

set(CMAKE_CXX_STANDARD 17)

add_executable(one_line_memory_game main.cpp
        Player.h
        Player.cpp
        GameBoard.h
        GameBoard.cpp
        GameManage.h
        GameManage.cpp)
