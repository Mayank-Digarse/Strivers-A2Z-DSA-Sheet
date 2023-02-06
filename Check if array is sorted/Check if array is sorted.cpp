
class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        // code here
        bool ans= true;
        for(int i = 1;i<n; i++){
            if(arr[i-1]>arr[i]){
                ans = false;
            }
        }
        return ans;
        
    }
};
