
int missingNumber(int A[], int N)
{
    int sn = (N*(N+1))/2;
    int sum  = 0;
    for(int i = 0 ;i<N-1; i++){
        sum+=A[i];
    }
    
    int ans = sn-sum;
    return ans;
    
}
