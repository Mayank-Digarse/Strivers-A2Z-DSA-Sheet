class Solution
{
    public:
    //Function to return the sorted array.
    vector <int> nearlySorted(int arr[], int num, int K){
        // Your code here
        priority_queue<int,vector<int>,greater<int>>q;
        vector<int>v;
            for(int i = 0;i<num;i++){
                if(q.size()>K){
                    v.push_back(q.top());
                    q.pop();
                }
                q.push(arr[i]);
            }
            while(q.size()){
                v.push_back(q.top());
                q.pop();
            }
            return v;
    }
};
