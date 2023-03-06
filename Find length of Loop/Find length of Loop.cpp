int countNodesinLoop(struct Node *head)
{
    // Code here
    if(head == NULL) return 0;
    Node* f = head;
    Node* s = head;

    while(f !=NULL && f->next != NULL){
        f = f->next->next;
        s = s->next;
        if(f == s){
        int cnt = 1;
        s = s->next;
        while(s!=f){
            cnt++;
            s=s->next;
        }
        return cnt;
        }
    }
      
return 0;
}
