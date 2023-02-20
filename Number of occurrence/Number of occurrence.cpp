class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    int s = 0, e = n-1;
	    int p = -1 , q = -1;
	    while(s<=e){
	        int mid = s+(e-s)/2;
	        if(arr[mid]== x) {
	            p = mid;
	            e = mid-1;
	        }
	        else if(arr[mid] > x){
	            e = mid-1;
	        }
	        else{
	            s = mid+1;
	        }
	    }
	     s = 0; 
	     e = n-1;
	     while(s<=e){
	         int mid = s+(e-s)/2;
	         if(arr[mid] == x){
	             q = mid; 
	             s= mid+1;
	         }
	         else if(arr[mid] >x){
	             e = mid -1;
	         }
	         else {
	             s = mid+1;
	         }
	     }
	     if(p!=-1 or   q!= -1) return q-p+1;
	     return 0;
	}
};
