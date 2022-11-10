#include <stdio.h>

int binarysearch(int *nums, int target, int left, int right)
{
    if ( left > right ) return -1;
    int mid = ( left + right ) / 2;
    if (nums[mid] == target) return mid;
    if (nums[mid] < target)
        return binarysearch(nums, target, mid + 1, right);
    else
        return binarysearch(nums, target, left, mid - 1);
}

int search (int *nums, int numsSize, int target)
{
    return binarysearch( nums, target, 0, numsSize-1);
}

