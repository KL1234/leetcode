/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int * ans = malloc(sizeof(int) * 2);
    int i,j,r=0;
    for(i=0;i<numsSize;i++){
        for(j=i+1;j<numsSize;j++){     
            if((nums[i]+nums[j])==target){
                ans[0]=i;
                ans[1]=j;
                r=1;
                break;
            }
        if(r==1) break;
        }    
    }  
    *returnSize=2;
    return ans;
}