# set(CMAKE_BUILD_TYPE Debug)
# set(CMAKE_CXX_FLAGS_DEBUG "-g -Wall -Wno-unused-local-typedefs -O3 -std=c++11")

# include_directories(${DIR_BASE_INCLUDE}  ${DIR_BOOST_INCLUDE})
# link_directories(${DIR_BASE_LIB} ${DIR_LUA_LIB})

# add_executable()
# target_link_libraries(test_base base gtest pthread rt crypto.a dl z)

# add_executable(test_dbo EXCLUDE_FROM_ALL
# test_dbo.cpp)
# target_link_libraries(test_dbo base gtest rt crypto.a dl pthread z)

# add_executable(test_cluster EXCLUDE_FROM_ALL
# test_cluster.cpp)
# target_link_libraries(test_cluster base gtest rt crypto.a dl pthread z)

# # 安装gtest步骤
# # sudo apt-get install libgtest-dev
# #
# # 由于gtest不提供编译好的.a库，因此需要按如下步骤自行编译
# # cd /usr/src/gtest
# # sudo mkdir build
# # cd build
# # sudo cmake ..
# # sudo make
# # sudo mv libg*.a /usr/lib