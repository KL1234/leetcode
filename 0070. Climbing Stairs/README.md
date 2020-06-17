# [70.Climbing Stairs](https://leetcode.com/problems/climbing-stairs/)

## 题目
You are climbing a stair case. It takes n steps to reach to the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

***Note:*** Given n will be a positive integer.


## 範例:

* Input: 2    
  Output: 2    
  Explanation: There are two ways to climb to the top.    
  1. 1 step + 1 step    
  2. 2 steps  
  
* Input: 3    
  Output: 3    
  Explanation: There are three ways to climb to the top.    
  1. 1 step + 1 step + 1 step    
  2. 1 step + 2 steps    
  3. 2 steps + 1 step  
## 程式
```cpp
class Solution {
public:
    int climbStairs(int n){
        int temp[n+1];
        temp[0]=1;
        temp[1]=1;
        for(int i=2;i<=n;i++){
            temp[i]=temp[i-1]+temp[i-2];
        }
        return temp[n];
    }
};
```

