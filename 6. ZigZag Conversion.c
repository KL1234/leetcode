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