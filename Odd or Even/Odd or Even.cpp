class Solution{   
public:
    string oddEven(int N){
        // code here 
        string e = "even";
        string o = "odd";
        int mask = 1;
        if(N&mask) return o;
        else return e;
    }
};
