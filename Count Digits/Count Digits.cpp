class Solution{
public:
    int evenlyDivides(int N){
        //code here
        int temp = N;
        int count = 0;
        while(temp>0){
            int last_digit = temp%10;
            if( last_digit >0 &&N%last_digit == 0 ){
                count++;
            }
            temp = temp/10;
        }
        return count;
    }
};
