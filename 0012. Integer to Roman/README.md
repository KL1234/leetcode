# [12.Integer to Roman](https://leetcode.com/problems/integer-to-roman/)


## 题目

Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
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
Given an integer, convert it to a roman numeral. Input is guaranteed to be within the range from 1 to 3999.

##範例:

* Input: 3     
  Output: "III"      
* Input: 4     
  Output: "IV"   
* Input: 9     
  Output: "IX"      
* Input: 58     
  Output: "LVIII"      
  Explanation: L = 50, V = 5, III = 3.
* Input: 1994     
  Output: "MCMXCIV"       
  Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.

## 程式
```c
char * intToRoman(int num){
    int i=0,n=0,a;
    static char ans[20];
    for(i=0;i<20;i++){
        ans[i]=0;
    }
    if(num>=1000){
        for(i=0;i<(num/1000);i++){
            ans[n]='M';
            n++;
        }
        num=num%1000;
    }
    if(num>=100){
        a=num/100;
        if(a==9){
            ans[n]='C';
            n++;
            ans[n]='M';
            n++;
        }
        if(a==8){
            ans[n]='D';
            n++;
            ans[n]='C';
            n++;
            ans[n]='C';
            n++;
            ans[n]='C';
            n++;
        }
        if(a==7){
            ans[n]='D';
            n++;
            ans[n]='C';
            n++;
            ans[n]='C';
            n++;
        }
        if(a==6){
            ans[n]='D';
            n++;
            ans[n]='C';
            n++;
        }
        if(a==5){
            ans[n]='D';
            n++;
        }
        if(a==4){
            ans[n]='C';
            n++;
            ans[n]='D';
            n++;
        }
        if(a==3){
            ans[n]='C';
            n++;
            ans[n]='C';
            n++;
            ans[n]='C';
            n++;
        }
        if(a==2){
            ans[n]='C';
            n++;
            ans[n]='C';
            n++;
        }
        if(a==1){
            ans[n]='C';
            n++;
        }
        num=num%100;
        }    
        if(num>=10){
            a=num/10;
            if(a==9){
                ans[n]='X';
                n++;
                ans[n]='C';
                n++;
            }
            if(a==8){
                ans[n]='L';
                n++;
                ans[n]='X';
                n++;
                ans[n]='X';
                n++;
                ans[n]='X';
                n++;
            }
            if(a==7){
                ans[n]='L';
                n++;
                ans[n]='X';
                n++;
                ans[n]='X';
                n++;
            }
            if(a==6){
                ans[n]='L';
                n++;
                ans[n]='X';
                n++;
            }
            if(a==5){
                ans[n]='L';
                n++;
            }
            if(a==4){
                ans[n]='X';
                n++;
                ans[n]='L';
                n++;
            }
            if(a==3){
                ans[n]='X';
                n++;
                ans[n]='X';
                n++;
                ans[n]='X';
                n++;
            }
            if(a==2){
                ans[n]='X';
                n++;
                ans[n]='X';
                n++;
            }
            if(a==1){
                ans[n]='X';
                n++;
            }
            num=num%10;
        }
        if(num<10){
            if(num==9){
                ans[n]='I';
                n++;
                ans[n]='X';
                n++;
            }
            if(num==8){
                ans[n]='V';
                n++;
                ans[n]='I';
                n++;
                ans[n]='I';
                n++;
                ans[n]='I';
                n++;
            }
            if(num==7){
                ans[n]='V';
                n++;
                ans[n]='I';
                n++;
                ans[n]='I';
                n++;
            }
            if(num==6){
                ans[n]='V';
                n++;
                ans[n]='I';
                n++;
            }
            if(num==5){
                ans[n]='V';
                n++;
            }
            if(num==4){
                ans[n]='I';
                n++;
                ans[n]='V';
                n++;
            }
            if(num==3){
                ans[n]='I';
                n++;
                ans[n]='I';
                n++;
                ans[n]='I';
                n++;
            }
            if(num==2){
                ans[n]='I';
                n++;
                ans[n]='I';
                n++;
            }
            if(num==1){
                ans[n]='I';
                n++;
            }
        }
    
   
    return ans;
}
```

