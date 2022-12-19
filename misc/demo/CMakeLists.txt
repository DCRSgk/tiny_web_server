cmake_minimum_required(VERSION 3.16))

set(CMAKE_CXX_FLAGS_DEBUG "-g -Wall -O0 -std=c++17")

get_filename_component(ROOT_DIR ${CMAKE_CURRENT_LIST_DIR} PATH)

# it depands your
# include("${ROOT_DIR}/base/CMakeVar.txt")

project(demo CXX)

# 添加源代码路径
aux_source_directory(./src DIR_SRCS)

set(CMAKE_BUILD_TYPE Debug)
add_subdirectory(src)
