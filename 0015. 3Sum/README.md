# [15.3Sum](https://leetcode.com/problems/3sum/)

## 题目

Given an array nums of n integers, are there elements a, b, c in nums such that a + b + c = 0? Find all unique triplets in the array which gives the sum of zero.

Note:

The solution set must not contain duplicate triplets.

## 範例:

* Given array nums = [-1, 0, 1, 2, -1, -4],       
  A solution set is:      
  [
    [-1, 0, 1],
    [-1, -1, 2]
  ]
  
## 程式
c++
```cpp
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) { 
       int basic; 
       vector<int> ans;
       vector<vector<int>> Allans;
       if(nums.size()<3) return Allans;
       sort(nums.begin(),nums.end());
       for(int i=0,left,right;i<nums.size()-2;i++){
           if(i!=0 && nums[i]==nums[i-1]){
               continue;
           }
           basic=nums[i]*-1;
           for(left=i+1,right=nums.size()-1;left<right;){
                if((nums[left]+nums[right])>basic){
                    right--;
                }
                else if((nums[left]+nums[right])<basic){
                    left++;
                }
                else{
                    ans.push_back(basic*-1);
                    ans.push_back(nums[left]);
                    ans.push_back(nums[right]);
                    Allans.push_back(ans);
                    while(left<right && nums[right-1]==nums[right]){
                        right--;
                    }
                    while(left<right && nums[left+1]==nums[left]){
                        left++;
                    }
                    right--;
                    left++;
                    ans.clear();
                }
           }
       } 
       return Allans;
    }
};
```

