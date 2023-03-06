class Solution {
public:
    ListNode* reverse(ListNode*head){
        if(head == NULL) return head;
        ListNode *p = NULL,*c = head ,*n = head->next;
        while(c!=NULL){
            c->next = p;
            p = c;
            c = n;
            if(n!=NULL) n = n->next;
        }
        return p;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* s = head;
        ListNode* f = head;
        while(f->next!=NULL && f->next->next!=NULL){
            f = f->next->next;
            s = s->next;
        }
        s->next = reverse(s->next);
        ListNode* start = head, *mid = s->next;
        while(mid !=NULL){
            if(start->val != mid->val){
            return false;
            }
            start = start->next;
            mid = mid->next;
        }
        return true;
    }
};
