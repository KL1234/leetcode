char* magic(char* ans,int n,int i){
    int a=0,count=1,r; //r 現在算到哪 count 技術
    char temp[10000]={0};
    if(n==i){  
        return ans;
    }
     
    for(r=0,a=0;r<strlen(ans);r++){
        if(ans[r]==ans[r+1]){
            count++;
        }
        else{
            temp[a]=count+'0';
            a++;
            temp[a]=ans[r];
            a++;
            count=1;
        }
    }
    

   // printf("#%s----%d----%d#",temp,n,i+1);
    return magic(temp,n,i+1); 
}

char * countAndSay(int n){
    return magic("1",n,1);
}