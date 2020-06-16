int lengthOfLongestSubstring(char * s){
    int nums[128];
    int i,max=0,flag=0;
    memset(nums,-1,128*4);    
    if(strlen(s)==1) return 1;
    for(i=0;i<strlen(s);i++){
        if(nums[s[i]]>=flag){
            if((i-flag)>max){
                max=i-flag;
            }
            flag=nums[s[i]]+1;
        }
        nums[s[i]]=i; 
    }    
    if((i-flag)>max){
                max=i-flag;
            }
    return max;
}