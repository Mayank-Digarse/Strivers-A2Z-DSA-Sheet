class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i = 0; i<n; i++){
            char ch = i+'A';
            for(int j = 0; j<=i; j++){
                cout<<ch;
            }
            cout<<endl;
        }
    }
};
