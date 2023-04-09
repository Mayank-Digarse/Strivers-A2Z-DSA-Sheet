class Solution {
public:

    int lengthOfLongestSubstring(string s) {
      if(s.length() == 0) return 0;
      unordered_map<char,int >mp;
        int i = 0;
        int j = 0;
        int mx = INT_MIN;

        while(j<s.length()){
            mp[s[j]]++;
            if(mp.size() == j-i+1){
                mx = max(mx,j-i+1);
              
            }
            else if(mp.size() <j-i+1){
                while(mp.size() <j-i+1){
                  mp[s[i]]--;
                 if(mp[i] == 0){
                mp.erase(s[i]);
            }
            i++;
                }
            }
           j++;
            
        }
        return mx;
    }
};
