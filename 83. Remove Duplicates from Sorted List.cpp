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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* ptr = head;
        ListNode* cur = head;
        
        while(ptr!=NULL){
            while(cur->val == ptr->val){
                if(cur->next==NULL) break;
                cur=cur->next;
            }
            if(cur->next==nullptr && cur->val == ptr->val){ptr->next=NULL; break;}
            ptr->next=cur;
            ptr=ptr->next;
        }
        
        return head;
    }
};