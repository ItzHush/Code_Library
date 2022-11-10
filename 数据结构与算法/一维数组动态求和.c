/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
/*输入：nums = [1,2,3,4]
输出：[1,3,6,10]
解释：动态和计算过程为 [1, 1+2, 1+2+3, 1+2+3+4] 。*/
int *runningSum(int *nums, int numsSize, int *returnSize)
{
    *returnSize = numsSize;
    for (int a = 1; a < numsSize; a++)
    {
        nums[a] += nums[a - 1];
    }
    *returnSize = numsSize;
    return nums;
}