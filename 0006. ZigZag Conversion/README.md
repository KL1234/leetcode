# [6.ZigZag Conversion](https://leetcode.com/problems/zigzag-conversion/)

## 题目

The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

P   A   H   N
A P L S I I G
Y   I   R
And then read line by line: "PAHNAPLSIIGYIR"

Write the code that will take a string and make this conversion given a number of rows:

string convert(string s, int numRows);

## 範例:

* Input: s = "PAYPALISHIRING", numRows = 3     
  Output: "PAHNAPLSIIGYIR"     

* Input: s = "PAYPALISHIRING", numRows = 4       
  Output: "PINALSIGYAHRPI"     
  Explanation:    
  P     I    N     
  A   L S  I G     
  Y A   H R     
  P     I       

## 程式
```c
char * convert(char * s, int numRows){
    int i,l,kl,a,b,r,temp;
    static char ans[5000]={0};
    l=strlen(s);
    if(l==0) return "";
    if(numRows==1) return s;
    for(i=0;i<5000;i++){
        ans[i]=0;
    }
    kl=numRows*2-2;
    for(i=0,b=0,a=kl,temp=0,r=0;i<l;i++){
        if(r==0){
            ans[i]=s[temp];
            temp=temp+a;
            if(temp>=l) {
                r++;
                temp=r;
                b=b+2;
                a=kl-b;
           
                continue;
            }
        }
        else if(r==numRows-1){
            ans[i]=s[temp];
            temp=temp+kl;
            if(temp>=l) break;
        } 
        else{
            ans[i]=s[temp];
            temp=temp+a;
            if(temp>=l) {
                    r++;
                    temp=r;
                    b=b+2;
                    a=kl-b;
                continue;
                }
            i++;
            ans[i]=s[temp];
            temp=temp+b;
            if(temp>=l) {
                    r++;
                    temp=r;
                    b=b+2;
                    a=kl-b;
                continue;
                }
           
            }
    }
    return ans;
}
```

