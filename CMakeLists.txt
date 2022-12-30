cmake_minimum_required(VERSION 3.16)
    if(COMMAND cmake_policy)
      cmake_policy(SET CMP0003 NEW)
    endif(COMMAND cmake_policy)


include("CMakeVar.txt")
project(base C CXX)

add_subdirectory(base)
add_subdirectory(test)
