cmake_minimum_required(VERSION 3.28)
project(Critical_Thinking)

set(CMAKE_CXX_STANDARD 17)

add_executable(Critical_Thinking main.cpp
        File.h
        File.cpp
        Input.cpp
        Input.h
        String.cpp
        String.h)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/CSC450_CT5_mod5.txt
        DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/CSC450-mod5-reverse.txt
        DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
