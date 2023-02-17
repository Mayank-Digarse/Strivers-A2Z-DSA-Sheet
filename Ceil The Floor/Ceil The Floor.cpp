pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
    int ceil = -1;
    int floor = -1;
    int mini = INT_MIN , maxa = INT_MAX;
    
    for(int i= 0;i<n; i++){
        if(arr[i] <= x && arr[i] >mini){
            mini = arr[i];
            ceil = arr[i];
        }
        if(arr[i]>= x && arr[i]< maxa){
            maxa = arr[i];
            floor = arr[i];
        }
    }
    pair<int, int>p;
    p=make_pair(ceil, floor);
    return p;
}
