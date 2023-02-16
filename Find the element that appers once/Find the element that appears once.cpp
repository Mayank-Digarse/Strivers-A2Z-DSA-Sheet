class Solution{
public:	
	int search(int A[], int N){
	    //code
	    unordered_map<int ,int>mp;
	    for(int i =0 ;i<N; i++){
	        mp[A[i]]++;
	    }
	    for (auto& it : mp){
	        if(it.second == 1) return it.first;
	    }
	    
	}
};
