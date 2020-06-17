# [13.Roman to Integer](https://leetcode.com/problems/roman-to-integer/)

## 题目
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

**Symbol**       **Value**
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, two is written as II in Roman numeral, just two one's added together. Twelve is written as, XII, which is simply X + II. The number twenty seven is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer. Input is guaranteed to be within the range from 1 to 3999.

## 範例:

* Input: "III"     
  Output: 3    
  
* Input: "IV"   
  Output: 4    

* Input: "IX"    
  Output: 9    

## 程式
c
```c
int magic(char a)
{
    if(a=='I') return 1;
    if(a=='V') return 5;
    if(a=='X') return 10;
    if(a=='L') return 50;
    if(a=='C') return 100;
    if(a=='D') return 500;
    if(a=='M') return 1000;
    return 0;
}
int romanToInt(char * s){
  int ans=0,l,i=0;
  l=strlen(s);
  for(i=0;i<l;i++){
      if(magic(s[i+1])>magic(s[i])){
          ans=ans+magic(s[i+1])-magic(s[i]);
          i++;
          continue;
      }
      ans=ans+magic(s[i]);
  }
  
return ans;
}
```

