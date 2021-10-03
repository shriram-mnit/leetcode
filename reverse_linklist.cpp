class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode* tmp=head->next;
        ListNode *newHead=reverseList(head->next);
        tmp->next=head;
        head->next=NULL;
        return newHead;
        
    }
};
