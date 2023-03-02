class Solution
{
    public:
    Node* deleteNode(Node *head_ref, int x)
    {
      //Your code here
      if(x==1){
          Node*temp = head_ref;
          temp->next->prev = NULL;
          head_ref = temp->next;
          temp->next = NULL;
          delete temp;
      }
      else{
          int cnt = 1; 
          Node*prev = NULL;
          Node*cur = head_ref;
          while(cnt<x){
              prev = cur;
              cur = cur->next;
              cnt++;
          }
          cur->prev = NULL;
          prev->next = cur->next;
          cur ->next = NULL;
          delete cur;
      }
      return head_ref;
    }
};
