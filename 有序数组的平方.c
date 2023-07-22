/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *sortedSquares(int *nums, int numsSize, int *returnSize)
{
    int *result = (int *)malloc(sizeof(int) * numsSize);
    *returnSize = numsSize;
    int left = 0;
    int right = numsSize - 1;
    int temp = numsSize - 1;
    while (temp >= 0)
    {
        if (nums[left] * nums[left] >= nums[right] * nums[right])
        {
            result[temp] = nums[left] * nums[left];
            left++;
            temp--;
        }
        else if (nums[left] * nums[left] < nums[right] * nums[right])
        {
            result[temp] = nums[right] * nums[right];
            right--;
            temp--;
        }
    }
    return result;
} // 给你一个按 非递减顺序 排序的整数数组 nums，返回 每个数字的平方 组成的新数组，要求也按 非递减顺序 排序。