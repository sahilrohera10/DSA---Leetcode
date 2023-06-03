class Solution {
public:
    
    int find(int i , int j , string s , string t , vector<vector<int>> &dp)
    {
        //base case
        if(j<0) return 1;
        if(i<0) return 0;
        
        
        if(dp[i][j] != -1) return dp[i][j];
        //recursive case
        if(s[i] == t[j]) 
            return dp[i][j] = find(i-1 , j-1 ,s,t ,dp) + find(i-1 , j ,s,t , dp);
        
        else
            return dp[i][j] = find(i-1 , j , s,t , dp);
    }
    
    
    
    int numDistinct(string s, string t) {
        int n = s.size();
        int m = t.size();
        //memoization
        vector<vector<int>> dp(n , vector<int> (m+1 , -1));
        int ans = find(n-1 , m-1 , s,t , dp);
        
        return ans ;
    }
};