#include <iostream>
#include "log.hh"
#include "basic.hh"
#include "binary_search.hh"
int main()
{
    // 设置日志等级
    LOG log;
    log.SetLevel(log.LOG_LEVEL_Info); // 写不写都一样，默认是Info

    return 0;
}