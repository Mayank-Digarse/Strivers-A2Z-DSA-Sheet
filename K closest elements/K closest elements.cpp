class Solution {
  public:
    vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
        // code here
        priority_queue<pair<int,int>>maxh;
        vector<int>v;
        for(int i = 0 ;i<n; i++){
            
           if(x-arr[i] != 0){
               maxh.push({abs(x-arr[i]) , arr[i]});
               if(maxh.size() >k+1){
                   maxh.pop();
               }
           }
            
        }
        while(maxh.size()){
            v.push_back(maxh.top().second);
            maxh.pop();
        }
        reverse(v.begin() , v.end());
        for(int i =0;i<v.size()-1; i++){
            if(abs(x-v[i]) == abs(x-v[i+1])){
                if(v[i] <v[i+1]){
                    swap(v[i] , v[i+1]);
                }
            }
        }
        if(v.size() !=k){
            v.pop_back();
        }
        return v;
    }
};
