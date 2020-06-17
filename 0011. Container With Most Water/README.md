# [11.Container With Most Water](https://leetcode.com/problems/remove-duplicates-from-sorted-list/)

## 题目

Given n non-negative integers a1, a2, ..., an , where each represents a point at coordinate     
(i, ai).n vertical lines are drawn such that the two endpoints of line i is at (i, ai) and (i, 0).    
Find two lines, which together with x-axis forms a container, such that the container contains    
the most water.   

Note: You may not slant the container and n is at least 2.

## 範例:

* Input: [1,8,6,2,5,4,8,3,7]     
  Output: 49

## 程式
```c
int maxArea(int* height, int heightSize){
    int i,j,max=0,min;
    for(i=0;i<heightSize;i++){
        for(j=heightSize-1;j>i;j--){
            if(height[j]<height[heightSize-1]) continue;
            
            if(height[i]>height[j]){
                min=height[j];
            }
            else min=height[i];
            if((j-i)*min>max){
                max=(j-i)*min;
            }
        }
    }
    return max;
}
```

