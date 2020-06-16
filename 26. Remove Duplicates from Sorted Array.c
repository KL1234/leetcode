int removeDuplicates(int* nums, int numsSize){
    int i,r=0;
    for(i=0,r=0;i<numsSize;i++){
        if(i+1==numsSize) {nums[r]=nums[i]; r++; break;}
        if(nums[i+1]!=nums[i]){
             nums[r]=nums[i];
             r++;
        }
    }
    
    return r;
}

