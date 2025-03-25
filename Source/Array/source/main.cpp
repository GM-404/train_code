#include <iostream>
#include "log.hh"

int main()
{
    std::cout << "Hello World!\n";
    LOG log;
    log.SetLevel(log.LOG_LEVEL_Info); // 写不写都一样，默认是Info
}