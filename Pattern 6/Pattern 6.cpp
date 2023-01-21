class Solution{
public:
	
	void printTriangle(int n) {
	    // code here
	    for(int i = n; i>0; i--){
	        for(int j = 1; j<=i ; j++){
	            cout<<j<<" ";
	        }
	        cout<<endl;
	    }
	}
};
