#ifndef BINARY_SEARCH_HH
#define BINARY_SEARCH_HH
#include <iostream>
#include <vector>

void bin_search();

class Solution_binary
{
public:
    int close_search(std::vector<int> &nums, int target);  // 二分查找闭区间
    int ajar_search(std::vector<int> &nums, int target);   // 二分查找开区间
    int searchInsert(std::vector<int> &nums, int target);  // 暴力插入
    int searchInsert2(std::vector<int> &nums, int target); // 二分插入
    int find_border(std::vector<int> &nums, int target);   // 找到左右边界
    int find_left_borader(std::vector<int> &nums, int target);
    int find_right_borader(std::vector<int> &nums, int target);
};
#endif

/*
// 这里是是二分查找
// bin_search();
Solution_binary solution_binary;
std::vector<int> nums = {0, 1, 2, 3, 4, 5, 6, 7, 8};
int loc = solution_binary.close_search(nums, 5);
std::cout << loc << std::endl;
int loc2 = solution_binary.ajar_search(nums, 10);
std::cout << loc2 << std::endl;
*/