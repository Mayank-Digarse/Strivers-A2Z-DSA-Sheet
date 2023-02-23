class Solution {
  public:
    string removeOuter(string& s) {
        // code here
        string res = "";
        int j =0;
        for(int i =0;i<s.length();i++){
            if(s[i] == 41) j--;
            if(j!= 0) res = res+s[i];
            if(s[i] == 40) j++;
        }
        return res;
    }
};
