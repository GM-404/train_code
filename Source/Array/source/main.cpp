#include <iostream>
#include "log.hh"
#include "basic.hh"
#include "binary_search.hh"
int main()
{
    // 设置日志等级
    LOG log;
    log.SetLevel(log.LOG_LEVEL_Info); // 写不写都一样，默认是Info

    /*
    这里是basic
    basic();
    */

    // 这里是是二分查找
    // bin_search();
    Solution_binary solution_binary;
    std::vector<int> nums = {0, 1, 2, 2, 2, 2, 6, 7, 8};
    // int loc = solution_binary.close_search(nums, 5);
    // std::cout << loc << std::endl;
    // int loc2 = solution_binary.ajar_search(nums, 10);
    // std::cout << loc2 << std::endl;
    // int loc3 = solution_binary.searchInsert(nums, 1);
    // std::cout << "insert loc:" << loc3 << std::endl;
    // int loc4 = solution_binary.searchInsert2(nums, 1);
    // std::cout << "insert loc:" << loc4 << std::endl;
    int loc5 = solution_binary.find_left_borader(nums, 2);
    std::cout << "left loc:" << loc5 << std::endl;
    int loc6 = solution_binary.find_right_borader(nums, 2);
    std::cout << "right loc:" << loc6 << std::endl;
    return 0;
}