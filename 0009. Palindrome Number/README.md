# [9.Palindrome Number](https://leetcode.com/problems/palindrome-number/)

## 题目

Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.

範例:

* Input: 121     
  Output: true

* Input: -121      
  Output: false      
  Explanation: From left to right, it reads -121. From right to left      
  it becomes 121-. Therefore it is not a palindrome.
 
* Input: 10     
  Output: false    
  Explanation: Reads 01 from right to left. Therefore it is not a palindrome.

## 程式
```c
bool isPalindrome(int x){
    int a=0,x1;
    if(x<0) return false;
    x1=x;
    while(x!=0){
        if(abs(a)>INT_MAX/10) return 0;
        a=a*10+x%10;
        x=x/10;
        
    }
    if(x1==a)
        return true;
    else return false;
}
```

