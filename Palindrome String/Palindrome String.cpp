class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    int i = 0;
	    int j = S.size()-1;
	    int ans = 1;
	 while(i<=j){
	     if(S[i]==S[j]){
	         i++;
	         j--;
	     }
	     else return 0;
	 }
	 return 1;
	}

};
