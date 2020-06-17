# [58.Length of Last Word](https://leetcode.com/problems/length-of-last-word/)

## 题目
Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word (last word means the last appearing word if we loop from left to right) in the string.

If the last word does not exist, return 0.

Note: A word is defined as a ***maximal substring*** consisting of non-space characters only.


## 範例:

* Input: "Hello World"    
  Output: 5
  
## 程式
c
```c
int lengthOfLastWord(char * s){
    int len=strlen(s);
    int n=0;
    for(int i=len-1;i>=0;i--){
        if(s[i]!=' ') n++;
        else if(s[i]==' ' && n!=0){
           break;
        }

    }
    return n;    
}
```

