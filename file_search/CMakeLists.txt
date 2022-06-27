cmake_minimum_required(VERSION 3.20)
project(file_search)

set(CMAKE_CXX_STANDARD 17)

add_executable(file_search main.cpp)

target_link_libraries(file_search stdc++fs)
