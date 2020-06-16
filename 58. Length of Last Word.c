

int lengthOfLastWord(char * s){
    int len=strlen(s);
    int n=0;
    for(int i=len-1;i>=0;i--){
        if(s[i]!=' ') n++;
        else if(s[i]==' ' && n!=0){
           break;
        }

    }
    return n;    
}
