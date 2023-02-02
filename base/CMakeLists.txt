cmake_minimum_required(VERSION 3.16)

# 确定C++版本(先用17过渡 因为还不会20)
set(CMAKE_CXX_FLAGS_DEBUG "-g -Wall -O0 -std=c++17")

project(base C CXX)

add_subdirectory(base)
# 如果需要再引入测试
# add_subdirectory(test)
