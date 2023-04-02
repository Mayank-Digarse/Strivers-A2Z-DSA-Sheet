class Solution
{
    public:
    //Function to return k largest elements from an array.
    vector<int> kLargest(int arr[], int n, int k)
    {
        // code here
        vector<int>v;
        priority_queue<int , vector<int>, greater<int>> q ;

        for(int i = 0;i<n; i++){
            q.push(arr[i]);
            if(q.size() >k){
                q.pop();
            }
        }
        for(int i= 0;i<k;i++){
            v.push_back(q.top());
            q.pop();
        }
    reverse(v.begin(),v.end());
    return v;
    }
};
