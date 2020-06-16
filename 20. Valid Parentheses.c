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