class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        
        vector<int>ans;
        map<int, int>mp;
        for(int i =0 ;i<n; i++){
            mp[arr1[i]]++;
        }
        for(int i= 0; i<m;i++){
            mp[arr2[i]]++;
        }
        for(auto it = mp.begin() ; it!=mp.end(); it++){
            ans.push_back(it->first);
        }
       mp.clear();
        return ans;
    }
};
