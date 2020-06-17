# [53.Maximum Subarray](https://leetcode.com/problems/maximum-subarray/)

## 题目
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.


## 範例:

* Input: [-2,1,-3,4,-1,2,1,-5,4],    
  Output: 6
  Explanation: [4,-1,2,1] has the largest sum = 6.
  
## 程式
c
```c
int maxSubArray(int* nums, int numsSize){
    int i,max=INT_MIN;
    if(numsSize==1) return nums[0];
    
    for(i=1;i<numsSize;i++){
        if((nums[i]+nums[i-1])>nums[i]){
            nums[i]=nums[i]+nums[i-1];

        }
    }
    for(i=0;i<numsSize;i++){
        if(nums[i]>max) max=nums[i];
    }
    
    return max;
}
```

