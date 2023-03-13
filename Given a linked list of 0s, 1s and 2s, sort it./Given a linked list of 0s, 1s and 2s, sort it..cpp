class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
       int cnt0 = 0;
       int cnt1 = 0;
       int cnt2 = 0;
       Node*temp = head;
       while(temp!= NULL){
          if(temp->data== 0){
              cnt0++;
          }
          else if(temp->data == 1)
          {
              cnt1++;
          }
          else if(temp->data == 2){ cnt2++;
          }
          temp = temp->next;
       }
       temp = head;
        while(cnt0>0){
            temp->data = 0;
            temp = temp->next;
            cnt0--;
        }
         while(cnt1>0){
            temp->data = 1;
            temp = temp->next;
            cnt1--;
        }
         while(cnt2>0){
            temp->data = 2;
            temp = temp->next;
            cnt2--;
        }
        
       return head;
       
    
    }
};
