class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int lar1 = arr[0] , lar2 = -1;
	    for(int i = 1; i<n; i++){
	        if(arr[i]>lar1){
	            lar1=arr[i];
	        }
	    }
	    for(int i = 0; i<n; i++ ){
	        if(arr[i]!=lar1 && arr[i]>lar2){
	            lar2 = arr[i];
	        }
	    }
	    return lar2;
	}
};
