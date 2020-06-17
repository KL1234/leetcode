# [35.Search Insert Position](https://leetcode.com/problems/search-insert-position/)

## 题目
Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You may assume no duplicates in the array.


## 範例:

* Input: [1,3,5,6], 5    
  Output: 2
 
* Input: [1,3,5,6], 2    
  Output: 1
  
* Input: [1,3,5,6], 7    
  Output: 4
 
* Input: [1,3,5,6], 0     
  Output: 0
  
## 程式
```c
int searchInsert(int* nums, int numsSize, int target){
int i=0;
    if(target==0) return 0;
    for(i=0;i<numsSize;i++){
        if(nums[i]>=target) return i;
    }
    return i;
}
```

