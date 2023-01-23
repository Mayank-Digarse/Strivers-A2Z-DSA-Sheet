
class Solution
{
	public:
		string is_palindrome(int n)
		{
		    int m = n; 
		    int sum = 0;
		    while(m>0){
		        int r = m%10;
		        sum = (sum*10)+r;
		        m = m/10;
		    }
		    if(n == sum){
		        return "Yes";
		    }
		  else{
		      return "No";
		  }
		    
		}
};
