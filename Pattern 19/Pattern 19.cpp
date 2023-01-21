class Solution {
  public:
    void printTriangle(int n) {
        // code here
        int star = 0;
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n-i; j++){
                cout<<"*";
            }
            for(int j = 0; j<star; j++){
                cout<<" ";
            }
            for(int j = 0; j<n-i; j++){
                cout<<"*";
            }
            star +=2;
            cout<<endl;
        }
         star = 2*n-2; 
         for(int i = 1; i<=n; i++){
            for(int j = 1; j<=i; j++){
                cout<<"*";
            }
            for(int j = 0; j<star; j++){
                cout<<" ";
            }
            for(int j = 1; j<=i; j++){
                cout<<"*";
            }
            star -=2;
            cout<<endl;
        }
    }
};
