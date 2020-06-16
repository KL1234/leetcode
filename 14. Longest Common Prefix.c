void *magic(char* s1, char* s2,char *a){
    int l=0;
    int i=0;
    
    if(strlen(s1)<strlen(s2)) l=strlen(s1);
    else l=strlen(s2);
    
    i=0;
  
    while(i<l){
        if(s1[i]==s2[i]){
            a[i]=s1[i];
        }
        else break;
         
        i++;
    }
 

    return;
}

char * longestCommonPrefix(char ** strs, int strsSize){
    static char ans[1000];
    int i,i2;
    if (strsSize==1) return strs[0];
    for(i=0;i<strsSize-1;i++){
        for(i2=0;i2<1000;i2++){
            ans[i2]=0;
         }
        
        magic(strs[i],strs[i+1],ans);
        strcpy(strs[i+1],ans);
      
    }
    return &ans[0];
}