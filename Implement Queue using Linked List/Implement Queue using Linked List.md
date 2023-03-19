
/* Structure of a node in Queue
struct QueueNode
{
    int data;
    QueueNode *next;
    QueueNode(int a)
    {
        data = a;
        next = NULL;
    }
};

And structure of MyQueue
struct MyQueue {
    QueueNode *front;
    QueueNode *rear;
    void push(int);
    int pop();
    MyQueue() {front = rear = NULL;}
}; */

//Function to push an element into the queue.
void MyQueue:: push(int x)
{
        // Your Code
        QueueNode* n =new QueueNode(x);
        if(rear == NULL){
            front = n;
            rear = n;
            return ;
        }
        else{
            
        
        rear->next =n;
        rear = n;
        }
        
}

//Function to pop front element from the queue.
int MyQueue :: pop()
{
        // Your Code 
        int temp = 0;
        if(front == NULL){
            return -1;
        }
        else {
            temp = front->data;
            front = front->next;
            if(front == NULL){
                rear = NULL;
            }
        }
        return temp;
        
}
