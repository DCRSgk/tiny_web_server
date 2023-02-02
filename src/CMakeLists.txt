cmake_minimum_required(VERSION 3.16)

set(CMAKE_BUILD_TYPE Debug)

# 确定C++版本(先用17过渡 因为还不会20)
set(CMAKE_CXX_FLAGS_DEBUG "-g -Wall -O0 -std=c++17")

# 设置base路径
get_filename_component(ROOT_DIR ${CMAKE_CURRENT_LIST_DIR} PATH)
message("1、${ROOT_DIR}/base/CMakeVar.txt")
include("${ROOT_DIR}/base/CMakeVar.txt")

# 编译base
project(main C CXX)

add_executable(main
main.cpp)

# 指定base路径
include_directories(${CMAKE_CURRENT_LIST_DIR})

include_directories(${DIR_BASE_INCLUDE})
link_directories(${DIR_BASE_LIB})

# 链接
target_link_libraries(main base)