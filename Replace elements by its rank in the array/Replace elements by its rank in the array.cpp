class Solution{
public:


    vector<int> replaceWithRank(vector<int> &arr, int N){
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    int p = 1;
    for(int i =0;i<N ;i++){
        pq.push(make_pair(arr[i] ,i));
    }
    for(int i =0  ;i<N; i++){
        int temp = pq.top().first,idx = pq.top().second;
        pq.pop();
        if(temp!= pq.top().first){
            arr[idx] = p++;
        }
        else {
            arr[idx] = p;
        }
    }
    return arr;


    }
};
