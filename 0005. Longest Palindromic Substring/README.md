# [5.Longest Palindromic Substring](https://leetcode.com/problems/longest-palindromic-substring)

## 题目

Given a string s, find the longest palindromic substring in s. You may assume that the maximum length of s is 1000.

## 範例:

*  Input: "babad"   
   Output: "bab"    
   Note: "aba" is also a valid answer.    

* Input: "cbbd"     
  Output: "bb"    

## 程式
```c
char * longestPalindrome(char * s){
    int i=1,max=0,head=0,tail=0,th=0,tt=0,i2=0;
    static char ans[1500]={0};
    for(i=0;i<1500;i++){
        ans[i]=0;
    }
    
    if(strlen(s)==0) return "";
    if(strlen(s)==1) return s;
    if(strlen(s)==2){
        if(s[0]==s[1]){
            return s;
        }
         else{
             ans[0]=s[0]; 
             return ans;
         }
        
    }
    
        for(i=1;i<strlen(s)-1;i++){
             head=i;
             tail=i;
            while(s[tail+1]==s[tail]){
                tail++;
                if(tail==strlen(s)-1) break;
            }
            while(s[head-1]==s[head]){
                head--;
                if(head==0) break;
            }
            if(tail!=strlen(s)-1){
                   if(head!=0){
                     while(s[(head-1)]==s[(tail+1)]){
                         head--;
                         tail++;

                         if(head==0) break;
                         if(tail==(strlen(s)-1)) break;
                     }
                   }
            }
              if((tail-head)+1>max){
                  max=tail-head+1;
                  th=head;
                  tt=tail;
                   
              }          
       }  
    if(th==tt) {ans[0]=s[0]; return ans;}
    
    for(i2=0,i=th;i<=tt;i++,i2++){
        ans[i2]=s[i];   
      
    }
   
    return ans;
}

```

