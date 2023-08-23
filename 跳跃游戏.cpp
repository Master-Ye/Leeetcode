class Solution
{
public:
    bool canJump(vector<int> &nums)
    {
        int cover = 0;
        if (nums.size() == 1)
            return true; // 只有⼀个元素，就是能达到
        for (int i = 0; i <= cover; i++)
        { // 注意这⾥是⼩于等于cover
            cover = max(i + nums[i], cover);
            if (cover >= nums.size() - 1)
                return true;
        }
        return false;
    }
};