# [67.Add Binary](https://leetcode.com/problems/add-binary/)

## 题目
Given two binary strings, return their sum (also a binary string).

The input strings are both ***non-empty*** and contains only characters 1 or 0.


## 範例:

* Input: a = "11", b = "1"    
  Output: "100"

* Input: a = "1010", b = "1011"    
  Output: "10101"
  
## 程式
c++
```cpp
class Solution {
public:
    string addBinary(string a, string b) {
        string ans;
        int ia=a.size()-1,ib=b.size()-1,c=0;
        if(ia>ib) ans=a;
        else ans=b;
        for(c=ans.size()-1;c>=0 && ia>=0 && ib>=0;c--,ia--,ib--){
           ans[c]=(a[ia]-'0')+(b[ib]-'0')+'0'; 
        }
        for(c=ans.size()-1;c>=0;c--){
           if(ans[c]=='2'){
               if(c==0){
                   ans.erase(0, 1);
                   ans="10"+ans;
                   break;
               }
               ans[c]='0';
               ans[c-1]+=1;
           }
           if(ans[c]=='3'){
               if(c==0){
                   ans.erase(0, 1);
                   ans="11"+ans;
                   break;
               }
               ans[c]='1';
               ans[c-1]+=1;
           }
        }
        
        
        return ans;
    }
};
```

