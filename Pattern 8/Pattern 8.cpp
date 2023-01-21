
// } Driver Code Ends
class Solution{
public:
	
	void printTriangle(int n) {
	    // code here
	    for(int i = 0; i<n; i++){
	        for(int j =0 ; j<i ; j++){
	            cout<<" ";
	        }
	        for(int j = 0 ; j<2*n-(2*i+1);j++){
	            cout<<"*";
	        }
	        for(int j = 0; j<n-i-1; j++){
	            cout<<" ";
	        }
	        cout<<endl;
	    }
	}
};
