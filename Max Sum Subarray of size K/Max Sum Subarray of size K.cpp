#include<bits/stdc++.h> 

class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        long long i = 0;
        long long j = 0;
        long long sum = 0;
        long long maxSum = 0;
        long long maxi = INT_MIN;
        while(j<N){
            sum+=Arr[j];
            if((j-i+1) == K){
                maxi = max(maxi ,sum);
                sum -=Arr[i];
                j++;
                i++;
            }
            else{
                j++;
            }
        }
      return maxi;
    }
};
