int minSubArrayLen(int target, int* nums, int numsSize){
int left=0;
int right=0;
int sum=0;
int result=INT32_MAX;
int subLength=0;
while(right<numsSize)
{sum+=nums[right];
while(sum>=target)
{
    subLength=right-left+1;
     result = result < subLength ? result : subLength;
     sum-=nums[left];
     left++;
}
right++;

}
return result==INT32_MAX?0:result;
}