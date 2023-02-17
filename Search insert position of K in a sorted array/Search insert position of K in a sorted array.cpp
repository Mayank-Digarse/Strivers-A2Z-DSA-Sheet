
class Solution{
    public:
    int searchInsertK(vector<int>Arr, int N, int k)
    {
        
        int s = 0, e = N-1;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(Arr[mid] == k){
                return mid;
            }
            else if(Arr[mid] > k){
                e = mid-1;
            }
            else{
                s = mid+1;
            }
            
            
        }
    }
};
