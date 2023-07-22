int minSubArrayLen(int target, int *nums, int numsSize)
{
    int left = 0;
    int right = 0;
    int sum = 0;
    int result = INT32_MAX;
    int subLength = 0;
    while (right < numsSize)
    {
        sum += nums[right];
        while (sum >= target)
        {
            subLength = right - left + 1;
            result = result < subLength ? result : subLength;
            sum -= nums[left];
            left++;
        }
        right++;
    }
    return result == INT32_MAX ? 0 : result;
}
// 给定一个含有 n 个正整数的数组和一个正整数 target 。

找出该数组中满足其和 ≥ target 的长度最小的 连续子数组 [numsl, numsl + 1, ..., numsr - 1, numsr] ，并返回其长度。如果不存在符合条件的子数组，返回 0 。

 

    来源：力扣（LeetCode）
        链接：https : // leetcode.cn/problems/minimum-size-subarray-sum
                      著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。