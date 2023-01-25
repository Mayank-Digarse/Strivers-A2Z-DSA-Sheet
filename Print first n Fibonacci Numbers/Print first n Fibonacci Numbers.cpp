
class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        if(n == 1){
            vector<long long> v;
            v.push_back(1);
            return v;
        }
        if(n == 2){
            vector<long long>v;
            v.push_back(1);
            v.push_back(1);
            return v;
        }
        vector<long long>v =printFibb(n-1);
        v.push_back(v[n-3]+v[n-2]);
        
        return v;
        
    }
};
