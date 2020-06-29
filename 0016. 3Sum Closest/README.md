# [16.3Sum Closest](https://leetcode.com/problems/3sum-closest/)

## 题目

Given an array nums of n integers and an integer target, find three integers in nums such that the sum is closest to target. Return the sum of the three integers. You may assume that each input would have exactly one solution.

## 範例:

* Input: nums = [-1,2,1,-4], target = 1     
  Output: 2     
  Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).    
  
## 程式
c++
```cpp
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
       int ans,l,r,sum,sub,min=INT_MAX;
       sort(nums.begin(),nums.end());
       for(int i=0;i<nums.size()-2;i++){
           l=i+1;
           r=nums.size()-1;
           sum=nums[i]+nums[l]+nums[r];
           sub=abs(target-sum);          
           while(l<r){
                  if(sub<=min){
                      ans=sum;
                      min=sub;
                  }
                  
                  if(sum<target){
                      l++;
                  }
                  else if(sum>target){
                      r--;
                  }
                  else return target;
                  sum=nums[i]+nums[l]+nums[r];
                  sub=abs(target-sum);
           }
       }
       return ans;
    } 
};
```

