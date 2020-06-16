int maxSubArray(int* nums, int numsSize){
    int i,max=INT_MIN;
    if(numsSize==1) return nums[0];
    
    for(i=1;i<numsSize;i++){
        if((nums[i]+nums[i-1])>nums[i]){
            nums[i]=nums[i]+nums[i-1];

        }
    }
    for(i=0;i<numsSize;i++){
        if(nums[i]>max) max=nums[i];
    }
    
    return max;
}

