#include "binary_search.hh"
#include <vector>
void bin_search()
{
    int nums[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target = 5;
    std::cout << "Start finding the target:" << target << std::endl;
    for (int i = 0; i < 10; i++) // 顺序查找
    {
        if (nums[i] == target)
        {
            std::cout << "find " << "uuid:" << i << std::endl;
            return;
        }
    }
    std::cout << "not find" << std::endl;
};
// 二分查找
int Solution_binary::close_search(std::vector<int> &nums, int target)
{
    int left = 0;
    int right = nums.size() - 1;
    while (left <= right) // 当left==right，区间[left, right]依然有效，所以用 <=
    {
        int mid = left + (right - left) / 2; // 防止溢出 等同于(left + right)/2
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1; // 没找到
}
int Solution_binary::ajar_search(std::vector<int> &nums, int target)
{
    int left = 0;
    int right = nums.size(); // 定义target在左闭右开的区间里，即：[left, right)
    while (left < right)
    {                                              // 因为left == right的时候，在[left, right)是无效的空间，所以使用 <
        int middle = left + ((right - left) >> 1); // 使用右移运算符 >> 对区间长度进行除以 2 的操作。
        if (nums[middle] > target)
        {
            right = middle; // target 在左区间，在[left, middle)中
        }
        else if (nums[middle] < target)
        {
            left = middle + 1; // target 在右区间，在[middle + 1, right)中
        }
        else
        {                  // nums[middle] == target
            return middle; // 数组中找到目标值，直接返回下标
        }
    }
    // 未找到目标值
    return -1;
}