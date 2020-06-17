# [66.Plus One](https://leetcode.com/problems/plus-one/)

## 题目
Given a ***non-empty*** array of digits representing a non-negative integer, plus one to the integer.

The digits are stored such that the most significant digit is at the head of the list, and each element in the array contain a single digit.

You may assume the integer does not contain any leading zero, except the number 0 itself.


## 範例:

* Input: [1,2,3]    
  Output: [1,2,4]    
  Explanation: The array represents the integer 123. 

* Input: [4,3,2,1]    
  Output: [4,3,2,2]    
  Explanation: The array represents the integer 4321.
  
## 程式
c++
```cpp
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>::iterator ptr;
        for(int i=digits.size()-1;i>=0;i--){
               if(digits[i]==9){
                   digits[i]=0;
               }
               else{
                   digits[i]=digits[i]+1;
                   return digits;
               }
        }
        if(digits.front()==0) digits.insert(digits.begin(),1);
       
        return digits;
    }
};
```

