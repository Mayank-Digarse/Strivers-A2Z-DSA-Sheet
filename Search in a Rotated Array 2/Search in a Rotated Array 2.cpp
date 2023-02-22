class Solution {
  public:
    bool Search(int N, vector<int>& A, int Key) {
        // Code here
        int l = 0;
        int h = N-1;
        int mid;
        while(l<=h){
            mid = l+(h-l)/2;
            if(A[mid] == Key) return true;
            if((A[l] == A[mid]) && (A[h] == A[mid])){
                l++;
                h--;
            }
          
           else if(A[l]<=A[mid]){
                if(A[l]<=Key && A[mid]>Key){
                    h = mid-1;
                }
                else
                l = mid+1;
            }
            else{
                if(A[mid]<Key && A[h]>=Key){
                    l = mid+1;
                }
                
                else
                h = mid-1;
                
            }
           
        }
        return false;
    }
};
