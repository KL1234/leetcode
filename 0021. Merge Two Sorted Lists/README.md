# [21.Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/)

## 题目
Merge two sorted linked lists and return it as a new ***sorted*** list. The new list should be made by splicing together the nodes of the first two lists.


## 範例:

* Input: 1->2->4, 1->3->4    
  Output: 1->1->2->3->4->4
  
## 程式
c++
```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==nullptr && l2==nullptr){return nullptr;}
        ListNode* head = new ListNode();
        ListNode* ptr=head;
        while(1){
            if(l1==NULL){    
                ptr->val=l2->val;
                l2=l2->next;
            } 
            else if(l2==NULL ){
                ptr->val=l1->val;
                l1=l1->next;
            }
            else{
                if(l1->val > l2->val ){
                    ptr->val=l2->val;
                    l2=l2->next;
                }
                else{
                     ptr->val=l1->val;
                    l1=l1->next;
                }
            }
            if(l1==nullptr && l2==nullptr){ptr=NULL; break;}
            ptr->next=new ListNode();
            ptr=ptr->next;
        }        
        
        return head;
    }
};
```

