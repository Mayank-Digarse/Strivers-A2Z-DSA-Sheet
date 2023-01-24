class Solution
{
public:
    vector<long long> factorialNumbers(long long N)
    {
     vector<long long> ans;
     long long factorial =1;
     for(int i =1 ; i<=N; i++){
         factorial = factorial*i;
         if(factorial>N) break;
         ans.push_back(factorial);
     }
     return ans;
        
    
    }
};
