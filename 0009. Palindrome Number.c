bool isPalindrome(int x){
    int a=0,x1;
    if(x<0) return false;
    x1=x;
    while(x!=0){
        if(abs(a)>INT_MAX/10) return 0;
        a=a*10+x%10;
        x=x/10;
        
    }
    if(x1==a)
        return true;
    else return false;
}