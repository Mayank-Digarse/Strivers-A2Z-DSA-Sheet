class Solution {
  public:
    void printTriangle(int n) {
        // code here
        int num = 1;
        for(int i = 1; i<=n; i++){
            for(int j = 1; j <= i; j++){
                cout<<num<<" "; 
                num=num+1;
            }
            cout<<endl;
        }
        
    }
};
