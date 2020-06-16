## 题目地址

https://leetcode.com/problems/two-sum/

## 题目

Given an array of integers, return ***indices*** of the two numbers such that they add up to a specific target.

You may assume that each input would have ***exactly*** one solution, and you may not use the same element twice.

範例:

* Given nums = [2, 7, 11, 15], target = 9,    
  Because nums[0] + nums[1] = 2 + 7 = 9,   
  return [0, 1]. 

## 程式
```c
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int * ans = malloc(sizeof(int) * 2);
    int i,j,r=0;
    for(i=0;i<numsSize;i++){
        for(j=i+1;j<numsSize;j++){     
            if((nums[i]+nums[j])==target){
                ans[0]=i;
                ans[1]=j;
                r=1;
                break;
            }
        if(r==1) break;
        }    
    }  
    *returnSize=2;
    return ans;
}
```

