# 安装gtest步骤
> sudo apt-get install libgtest-dev
> 由于gtest不提供编译好的.a库，因此需要按如下步骤自行编译
> cd /usr/src/gtest
> sudo mkdir build
> cd build
> sudo cmake ..
> 这里查看下生成的地方（编译的时候有提示 Ubuntu 20.04的位置为 `/usr/src/googletest`
> cd /usr/src/googletest
> sudo mkdir build
> cd build
> sudo cmake ..
> sudo make
> cd lib
> sudo mv libg*.a /usr/lib

# btw
> 我把库编好放在项目里了 desu()