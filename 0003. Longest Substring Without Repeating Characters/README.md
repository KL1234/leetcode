# [3.Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/)

## 题目

Given a string, find the length of the ***longest substring*** without repeating characters.

## 範例:

* Input: "abcabcbb"   
  Output: 3     
  Explanation: The answer is "abc", with the length of 3.     

* Input: "bbbbb"     
  Output: 1      
  Explanation: The answer is "b", with the length of 1.      
  
* Input: "pwwkew"    
  Output: 3    
  Explanation: The answer is "wke", with the length of 3.     
  Note that the answer must be a substring, "pwke" is a subsequence and not a substring.

## 程式
c
```c
int lengthOfLongestSubstring(char * s){
    int nums[128];
    int i,max=0,flag=0;
    memset(nums,-1,128*4);    
    if(strlen(s)==1) return 1;
    for(i=0;i<strlen(s);i++){
        if(nums[s[i]]>=flag){
            if((i-flag)>max){
                max=i-flag;
            }
            flag=nums[s[i]]+1;
        }
        nums[s[i]]=i; 
    }    
    if((i-flag)>max){
                max=i-flag;
            }
    return max;
}
```

