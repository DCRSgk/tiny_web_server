set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS_DEBUG "-g -Wall -O0 -std=c++17")


# TODO 支持lua
# include_directories(${DIR_LUA_INCLUDE})

add_library(base SHARED
file.cpp
logger.cpp
)

