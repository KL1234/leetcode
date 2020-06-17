# [20.Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)

## 题目
Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Note that an empty string is also considered valid.


## 範例:

* Input: "()"     
  Output: true
  
* Input: "()[]{}"    
  Output: true
  
* Input: "(]"     
  Output: false
  
* Input: "([)]"    
  Output: false
  
* Input: "{[]}"      
  Output: true
## 程式
```c
int magic(char* s){
    int l,i,r=0;
    l=strlen(s);
    for(i=0;i<l;i++){
        if(s[i]!='0') r++;
    }
    return r;
    
}
bool isValid(char * s){
    int i,l,r=0,l2;
    char temp[100000]={0};
    while(1){
        
        l=strlen(s);
        l2=l;
        for(i=0;i<l;i++){
            if(s[i]=='(' && s[i+1]==')') {
                s[i]='0'; s[i+1]='0';
                i++;
                l2-=2;
                continue;
            }
            if(s[i]=='{' && s[i+1]=='}') {
                s[i]='0'; s[i+1]='0';
                 i++;
                l2-=2;
                continue;
            }
            if(s[i]=='[' && s[i+1]==']') {
                s[i]='0'; s[i+1]='0';
                 i++;
                l2-=2;
                continue;
            }        
        }
        for(i=0,r=0;r<l2;i++){
            if(s[i]!='0'){
                temp[r]=s[i];
                r++;
            }
        } 
        
        if(magic(s)==0)
                    break;   
        if(magic(s)%2==1)
                    return false;   
        if(strcmp(s, temp)==0) break;
        strcpy(s, temp); 
       for(i=0;i<100000;i++){
           temp[i]=0;
       }
        
    }
    
    for(i=0,r=0;i<l;i++){
       if(s[i]!='0') r++;
    }
    if(r==0) return true;

    return false;
}
```

