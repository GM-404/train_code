#ifndef BINARY_SEARCH_HH
#define BINARY_SEARCH_HH
#include <iostream>
#include <vector>

void bin_search();

class Solution_binary
{
public:
    int close_search(std::vector<int> &nums, int target);
    int ajar_search(std::vector<int> &nums, int target);
    int searchInsert(std::vector<int> &nums, int target);
    int searchInsert2(std::vector<int> &nums, int target);
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