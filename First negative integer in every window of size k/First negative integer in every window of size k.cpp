
vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
        long long int i = 0 , j= 0;
        vector<long long int>ans;
        queue<long long int>q;
        
        while(j<N){
            if(A[j] < 0){
                q.push(A[j]);
            }
            if(j-i+1 <K) j++;
            else if(j-i+1 == K){
                if(q.size() == 0){
                    ans.push_back(0);
                }
                else{
                    int data = q.front();
                    ans.push_back(data);
                    
                    if(A[i] == data) q.pop();
                }
                i++, j++;
            }
        }
        return ans;
 }
