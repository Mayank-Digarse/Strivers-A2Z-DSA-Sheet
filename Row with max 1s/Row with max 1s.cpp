class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int max = 0;
	    int ans = -1;
	    for(int i = 0;i<n;i++){
	        int cnt = 0;
	        for(int j =0 ;j<m;j++){
	            if(arr[i][j]==1){
	                cnt++;
	            }
	        }
	        if(cnt >max){
	            max = cnt;
	            ans = i;
	        }
	    }
	    return ans ;
	}

};
