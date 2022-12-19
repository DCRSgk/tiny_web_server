# 定义最低版本
cmake_minimum_required(VERSION 3.16 FATAL_ERROR)

# 定义项目名称 语言
project(use_google_test CXX)

# 必须指定版本,不然ptherad会有冲突 = =
set(CMAKE_CXX_FLAGS "${CAMKE_CXX_FLAGS} -std=c++11 -pthread")
# 引入 gtest的头文件和静态库
# include_directories(../../../../base/gtest DIR_INC)
# link_directories(../../../lib)

# target_link_libraries(google_test libgtest.a libgtest_main.a)

# # 额外库(举一个例子 可以加更多)
# add_library(sum_integers sum_integers.cpp)

# mian
add_executable(use_google_test main.cpp)

# 把东西链接到一起
target_link_libraries(use_google_test libgtest.a libgtest_main.a)