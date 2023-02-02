#include <iostream>
#include <base/logger.h>

int main(int argc, char* argv[])
{
    // 开始读取配置加载模块

    // 加载redis
    // 加载mysql

    // 加载http

    // TODO 加载文件日志系统

    LOG_DEBUG("hello tiny web server\n ");
    LOG_WARN("hello tiny web server\n ");
    LOG_ERROR("hello tiny web server\n ");

    // LOG_PANIC("hello tiny web server\n ");

    // TS_LOG_DEBUG("hello tiny web server\n ");
    // TS_LOG_WARN("hello tiny web server\n ");
    // TS_LOG_ERROR("hello tiny web server\n ");
    // std::cout<< "hello tiny web server\n " << std::endl;

    return 0;

}