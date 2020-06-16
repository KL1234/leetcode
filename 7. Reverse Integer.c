int reverse(int x){
    int a=0;
    while(x!=0){
        if(abs(a)>INT_MAX/10) return 0;
        a=a*10+x%10;
        x=x/10;
        
    }
    return a;
}