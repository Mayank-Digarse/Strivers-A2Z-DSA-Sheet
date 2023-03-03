class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL) return NULL;
        ListNode* p = NULL;
        ListNode* c = head;
        ListNode* n = head->next;
        while(c!=NULL){
            c->next = p;
            p = c;
            c = n;
            if(n!=NULL) n = n->next;

        }
        return p;
    }
};
