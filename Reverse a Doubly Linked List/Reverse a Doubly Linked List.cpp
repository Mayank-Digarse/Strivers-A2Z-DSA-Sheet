Node* reverseDLL(Node * head)
{
    //Your code here
    while(head->next != NULL) head = head->next;
    
   Node*root = new Node(head->data);
   Node*R = root;
    while(head->prev != NULL)
    {
       root->next = new Node(head->prev->data);
       root->next->prev = root;
       root = root->next;
       head = head->prev;
    }
    return R;
}
