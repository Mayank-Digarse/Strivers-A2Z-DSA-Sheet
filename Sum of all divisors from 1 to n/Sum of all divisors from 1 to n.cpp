class Solution
{
public:
    long long sumOfDivisors(int N)
    {
        // Write Your Code here
       long long sum = 0;
       long long div;
       for(int i = 1; i<=N; i++){
         div = N/i;
          sum = sum+div*i;
           
       }
       return sum;
    }
};
