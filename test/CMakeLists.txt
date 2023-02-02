cmake_minimum_required(VERSION 3.16)

set(CMAKE_BUILD_TYPE Debug)

# 确定C++版本(先用17过渡 因为还不会20)
set(CMAKE_CXX_FLAGS_DEBUG "-g -Wall -O0 -std=c++17")

get_filename_component(ROOT_DIR ${CMAKE_CURRENT_LIST_DIR} PATH)
include("${ROOT_DIR}/base/CMakeVar.txt")

# 编译test
project(test CXX)


set(CMAKE_BUILD_TYPE Debug)

# 添加src
add_subdirectory(src)
