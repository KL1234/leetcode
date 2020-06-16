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
