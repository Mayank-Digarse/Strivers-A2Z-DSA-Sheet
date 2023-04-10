vector<int> findSpiral(Node *root)
{
    //Your code here
    if(root == NULL){
        return {};
    }
    vector<int>res;
    queue<Node*>q;
    q.push(root);
    int j =0 ;
    while(!q.empty()){
        vector<int>v;
        int n = q.size();
        for(int i = 0;i<n;i++){
            Node*temp = q.front();
            q.pop();
            v.push_back(temp->data);
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
        if(j %2 == 0){
            reverse(v.begin(),v.end());
        }
        for(int i = 0;i<v.size(); i++){
            res.push_back(v[i]);
        }
        j++;
        
    }
    return res;
    
    
}
