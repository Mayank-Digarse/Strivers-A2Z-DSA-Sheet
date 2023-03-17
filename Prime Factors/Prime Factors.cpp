class Solution{
	public:
	vector<int>AllPrimeFactors(int N) {
	    // Code here
	    vector<int>ans;
	    for(int i = 2;i<=N; i++){
	        while(N%i== 0){
	            ans.push_back(i);
	            N=N/i;
	        }
	    }
	    sort( ans.begin(), ans.end() );
        ans.erase( unique( ans.begin(), ans.end() ), ans.end() );
	    return ans;
	}
};
