# [88.Merge Sorted Array](https://leetcode.com/problems/merge-sorted-array/)

## 题目
Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.

***Note:***
* The number of elements initialized in nums1 and nums2 are m and n respectively.
* You may assume that nums1 has enough space (size that is greater or equal to m + n) to hold additional elements from nums2.


## 範例:

* nums1 = [1,2,3,0,0,0], m = 3    
  nums2 = [2,5,6],       n = 3    
  
  Output: [1,2,2,3,5,6]
 
  
## 程式
c++
```cpp
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i,j;
        for(i=0;i<n;i++)
            nums1[m+i]=nums2[i];
        if(m!=0){
            for(i=m;i<m+n;i++){
                for(j=i;j>0 && nums1[j-1]>nums1[j];j--){
                    swap(nums1,j-1,j);
                    cout<<nums1[0];    
                }
                
            }
        }
    }
    void swap(vector<int>& nums1,int m,int n){  //m、n要交換的位子
        int temp;
        temp = nums1[m];
        nums1[m]=nums1[n];
        nums1[n]=temp;
    }
};
```

