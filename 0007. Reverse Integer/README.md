# [7.Reverse Integer](https://leetcode.com/problems/reverse-integer/)

## 题目

Given a 32-bit signed integer, reverse digits of an integer.

## 範例:

* Input: 123       
  Output: 321

* Input: -123      
  Output: -321      
## 程式
```c
int reverse(int x){
    int a=0;
    while(x!=0){
        if(abs(a)>INT_MAX/10) return 0;
        a=a*10+x%10;
        x=x/10;
        
    }
    return a;
}
```

