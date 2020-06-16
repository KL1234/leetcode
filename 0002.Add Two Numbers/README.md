## 题目地址

https://leetcode.com/problems/add-two-numbers/

## 题目

You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.     

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

範例:

* Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)    
  Output: 7 -> 0 -> 8     
  Explanation: 342 + 465 = 807.     

## 程式
```c
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode* l3;
    int r=0;
    l3=l1;
    while(1){
        if(r==1){r=0;l1->val++;}
        l1->val=l1->val+l2->val;
        if(l1->val>=10) {
            l1->val=l1->val-10;
            r=1;
        }
       if(l1->next==NULL && l2->next==NULL){
           if(r==1){
            l1->next=(struct ListNode*)malloc(sizeof(struct ListNode));
            l1=l1->next;
            l1->next=NULL;
            l1->val=1;
           }
           break;
       }
       if(l1->next==NULL){
            l1->next=(struct ListNode*)malloc(sizeof(struct ListNode));
            l1=l1->next;
            l1->next=NULL;
            l1->val=0;
       }
       else
            l1=l1->next;
       if(l2->next==NULL){
           l2->val=0;
       }
       else
            l2=l2->next;      
       
    }
        
    return l3;
}
```

