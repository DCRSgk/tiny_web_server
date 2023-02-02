
set(CMAKE_CXX_FLAGS_DEBUG "-g -Wall -O0 -Wno-unused-local-typedefs -std=c++11 -Wl,-rpath,../lib")



# 指定base路径
include_directories(${DIR_BASE_INCLUDE})
link_directories(${DIR_BASE_LIB})

# 指定需要编译的文件
add_executable(test
main.cpp)

# 链接
target_link_libraries(test base)