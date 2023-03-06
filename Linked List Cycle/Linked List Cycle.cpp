class Solution {
public:
    bool hasCycle(ListNode *head) {
      
       ListNode* fast = head;
       ListNode* slow = head;
         if(head == NULL) return false;
       while(fast != NULL && fast->next != NULL){
           fast =  fast->next->next;
           slow = slow->next;
              if(fast == slow) return true;
       }
     return false;

    }
};
