int strStr(char* haystack, char* needle) {
    int i=0;
    int j=1;
    int res,tmp;
    int flag=0;
    
    if (!needle[0])
        return 0;
 
    while (haystack[i]) {
        flag=0;
        j=1;
        if (needle[0]==haystack[i]) { 
            res=i;
            tmp=i+1;
            while (needle[j]) {
                if (needle[j] && !haystack[tmp])
                    return -1;
                if (needle[j]==haystack[tmp]) {
                    tmp++;
                    j++;
                }
                else {
                    flag=1;
                    break;
                }
            }
            if (flag==0)
            return res;
            
        }
        i++;
       
    }
    return -1;
    
}
