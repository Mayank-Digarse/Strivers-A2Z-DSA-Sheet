class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	    int i = 0 , j = 0;
	    while(i<n && j<n){
	        if(arr[j]!= 0){
	            swap(arr[i++] , arr[j++]);
	            
	        }
	        else if(arr[j]== 0)j++;
	    }
	}
};
