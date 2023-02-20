vector<int> find(int arr[], int n , int x )
{
    int l = 0; 
    int r = n-1;
    int mid ;
    vector<int>ans;
    while(l<=r){
        mid  = (r+l)/2;
        if(arr[mid] <x) l = mid+1;
        else r = mid-1;
    }
    ans.push_back(l);
    l = 0; 
    r = n-1;
    while(l<=r){
        mid = (r+l)/2;
        if(arr[mid] <= x) l = mid+1; 
        else r = mid-1;
    }
    ans.push_back(r);
    if(ans[0] > ans[1]) return {-1, -1};
    else return ans;
    
}
