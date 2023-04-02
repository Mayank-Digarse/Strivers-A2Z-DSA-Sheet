
class Solution{
public:
    void hapify(vector<int> &v,int n,int i ){
          int left = 2*i+1;
        int right = 2*i+2;
        int la = i;
        if(left <n and v[left]>v[la]){
            la = left;
        }
        if(right<n and v[right]>v[la]){
            la = right;
        }
        if(la!=i){
            swap(v[i] ,v[la]);
            hapify(v,n,la);
        }
    }

    void convertMinToMaxHeap(vector<int> &arr, int N){
      for(int i = (N/2)-1 ; i>=0 ;i--){
          hapify(arr,N,i);
      }
    }
    
};
