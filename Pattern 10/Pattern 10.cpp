class Solution{
public:
    void printTriangle(int n) {
        // code here
        for(int i = 0; i<n; i++){
            for(int j = 0; j<i+1; j++){
                cout<<"* ";
            }
            cout<<endl;
        }
        for(int i = n-1; i>0 ; i--){
            for(int j = i ; j>0; j--){
                cout<<"* ";
            }
            cout<<endl;
        }
    }
};
