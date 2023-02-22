class Solution{
public:
    int findMin(int arr[], int n){
        //complete the function here
        int s = 0;
        int e = n-1;
        int mid ;
        while(s<=e){
            mid = s+(e-s)/2;
            if(arr[s] <= arr[e]){
                return arr[s];
            }
            if(arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1]){
                return arr[mid+1];
            }
            else if(arr[mid] <arr[mid-1] && arr[mid] <arr[mid+1]){
                return arr[mid];
            }
            else if(arr[mid] >arr[s]){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }
    }
};
