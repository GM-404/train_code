#include <iostream>
#include "log.hh"
#include "basic.hh"
int main()
{
    // 设置日志等级
    LOG log;
    log.SetLevel(log.LOG_LEVEL_Info); // 写不写都一样，默认是Info
    // 这里是basic
    basic();
}