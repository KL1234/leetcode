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