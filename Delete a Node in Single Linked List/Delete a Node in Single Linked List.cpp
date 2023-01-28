
/* Link list Node 
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

/*You are required to complete below method*/
Node* deleteNode(Node *head,int x)
{
   if(x == 1){
       head = head->next;
       return head;
   }
   else{
      Node* prev = head;
       Node* temp = head->next;
       int cnt = 2;
       while(temp !=NULL){
       if(cnt == x){
           prev->next = temp->next;
           return head;
       }
       cnt++;
       prev = temp;
       temp = temp->next;
       }
   }
    return head;
}
