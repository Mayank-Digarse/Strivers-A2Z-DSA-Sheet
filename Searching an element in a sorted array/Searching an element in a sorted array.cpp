class Solution{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int searchInSorted(int arr[], int N, int K) 
    { 
    
       // Your code here
       int ans = -1;
       for(int i = 0 ;i<N;i++){
           if(arr[i] == K){
               ans = 1;
           }
       }
       return ans;
    }
};
