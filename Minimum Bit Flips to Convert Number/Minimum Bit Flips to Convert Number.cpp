class Solution {
public:
    int minBitFlips(int start, int goal) {
        int diff = start^goal;
        int cnt = 0;
        while(diff){
            if(diff&1){
                cnt++;
            }
            diff = diff>>1;
        }
        return cnt;
    }
};
