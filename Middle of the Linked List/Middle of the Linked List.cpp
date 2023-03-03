class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode*small = head;
        ListNode*large = head;
        if(large == NULL || large->next == NULL){
            return small;
        }
        while(large != NULL && large->next !=NULL){
            small = small->next;
            large = large->next->next;
        }
        return small;
    }
};
