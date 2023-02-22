class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int i =0 , j =0;
        int x = 0;
       int arr[n+m];
        while(i<n && j<m){
            if(arr1[i] <arr2[j]){
                arr[x++] = arr1[i++];
             
            }
            else{
                arr[x++] = arr2[j++];
            }
            
        }
        while(i<n){
            arr[x++] = arr1[i++];
         
        }
        while(j<m){
            arr[x++] = arr2[j++];
           
        }
        
        return arr[k-1];
        
    }
};
