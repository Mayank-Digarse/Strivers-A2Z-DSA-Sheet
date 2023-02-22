class Solution{
    public:
  
    
    int search(int A[], int l, int h, int key){
        // l: The starting index
        // h: The ending index, you have to search the key in this range
        
        //complete the function here
        while(l<=h){
            int mid = l+(h-l)/2;
            if(A[mid]==key ) return mid;
            if(A[l]<A[mid]){
                if(A[l]<= key && A[mid]>key) {
                    h = mid-1;
                    
                }
                else l = mid+1;
            }
            else{
                if(A[mid] <key && A[h]>=key) {
                    l = mid+1;
                }
                else h = mid-1;
            }
        }
        return -1;
        
    }
};
