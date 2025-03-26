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
int Solution_binary::searchInsert(std::vector<int> &nums, int target) // 暴力插入
{
    int left = 0;
    int right = nums.size() - 1;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[0] > target) // 目标值在数组所有元素之前
        {
            nums.insert(nums.begin(), target);
            std::cout << "after insert" << std::endl; // 打印出来插入后的数组
            for (int i = 0; i < nums.size(); i++)
            {
                std::cout << nums[i] << std::endl;
            }
            return 0;
        }
        else if (nums[i] == target) // 目标值在数组中等于某个元素
        {
            nums.insert(nums.begin() + i, target);
            std::cout << "after insert" << std::endl; // 打印出来插入后的数组
            for (int i = 0; i < nums.size(); i++)
            {
                std::cout << nums[i] << std::endl;
            }
            return i;
        }
        else if (nums[i] > target) // 目标值在数组中大于某个元素
        {
            nums.insert(nums.begin() + i, target);
            std::cout << "after insert" << std::endl; // 打印出来插入后的数组
            for (int i = 0; i < nums.size(); i++)
            {
                std::cout << nums[i] << std::endl;
            }
            return i;
        }
        else if (nums.size() < target) // 目标值在数组所有元素之后
        {
            nums.insert(nums.end(), target);
            std::cout << "after insert" << std::endl; // 打印出来插入后的数组
            for (int i = 0; i < nums.size(); i++)
            {
                std::cout << nums[i] << std::endl;
            }
            return nums.size() - 1;
        }
    }
    return -1;
}
int Solution_binary::searchInsert2(std::vector<int> &nums, int target) // 二分插入
{
    int left = 0;
    int right = nums.size() - 1;
    if (nums[0] > target) // 在头部
    {
        nums.insert(nums.begin(), target);
        std::cout << "after insert" << std::endl; // 打印出来插入后的数组
        for (int i = 0; i < nums.size(); i++)
        {
            std::cout << nums[i] << std::endl;
        }
        return 0;
    }
    if (nums[nums.size() - 1] < target) // 在尾部
    {
        nums.insert(nums.end(), target);
        std::cout << "after insert" << std::endl; // 打印出来插入后的数组
        for (int i = 0; i < nums.size(); i++)
        {
            std::cout << nums[i] << std::endl;
        }
        return nums.size() - 1;
    }
    while (left <= right)
    {
        int middle = left + ((right - left) >> 1);
        if (nums[middle] < target)
        {
            left = middle + 1;
        }
        else if (nums[middle] == target)
        {
            nums.insert(nums.begin() + middle, target);
            std::cout << "after insert" << std::endl; // 打印出来插入后的数组
            for (int i = 0; i < nums.size(); i++)
            {
                std::cout << nums[i] << std::endl;
            }
            return middle;
        }
        else if (nums[middle] > target)
        {
            right = middle - 1;
        }
        if (left >= right) // 没找到导致左右相反，证明已经寻找一遍
        {
            nums.insert(nums.begin() + middle, target);
            std::cout << "after insert" << std::endl; // 打印出来插入后的数组
            for (int i = 0; i < nums.size(); i++)
            {
                std::cout << nums[i] << std::endl;
            }
            return right + 1;
        }
    }

    return -1;
}
