
struct node *newNode(int data) {
  struct node *node = (struct node *)malloc(sizeof(struct node));

  node->data = data;

  node->left = NULL;
  node->right = NULL;
  return (node);
}*/

class Solution{
public:

    void create_tree(node* root0, vector<int> &vec){
        //Your code goes here
        queue<node*>q;
        q.push(root0);
        for(int i =1 ;i<vec.size() ;i+=2){
            auto temp = q.front();
            q.pop();
            temp->left = newNode(vec[i]);
            q.push(temp->left);
            temp->right = newNode(vec[i+1]);
            q.push(temp->right);
        }
        
    }

};
