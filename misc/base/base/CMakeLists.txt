set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS_DEBUG "-g -Wall -O0 -std=c++11")

set(DIR_BASE_ROOT ${CMAKE_CURRENT_LIST_DIR})

set(DIR_BASE_INCLUDE "${DIR_BASE_ROOT}")
set(DIR_BASE_LIB "${DIR_BASE_ROOT}/build/base")

set(DIR_LUA_INCLUDE "${DIR_BASE_ROOT}/base/3rd/lua")

set(DIR_FLATBUFFERS_INCLUDE "${DIR_BASE_ROOT}/base/3rd/flatbuffers/include")


#include some lib if you have
set(

)

#include your file
add_library(

)

