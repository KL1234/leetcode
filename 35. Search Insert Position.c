int searchInsert(int* nums, int numsSize, int target){
int i=0;
    if(target==0) return 0;
    for(i=0;i<numsSize;i++){
        if(nums[i]>=target) return i;
    }
    return i;
}