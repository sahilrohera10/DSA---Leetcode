class Solution {
public:
    
    bool find(int i , int j , string &p , string &s,  vector<vector<int>>& dp)
    {
        //base case
        if(i<0 && j<0) return true;
        if(i<0 && j>=0) return false;
        if(j<0 && i>=0) {
            for(int k = 0 ;k<=i ; k++) {
                if(p[k] != '*') return false;
            }
            
            return true;
        }
        
        if(dp[i][j] != -1) return dp[i][j];
        //recursive case
        if(p[i] == s[j]  || p[i] == '?') return dp[i][j] = find(i-1,j-1,p,s ,dp);
        
        if(p[i] == '*') {
           return dp[i][j] = find(i-1 , j , p, s , dp) || find(i , j-1 , p , s , dp);
        }
        
        return dp[i][j] = false;
    }
        
        
        
        
    bool isMatch(string s, string p) {
        int n = p.size();
        int m = s.size();
        
        //optimising using memoization
        vector<vector<int>> dp(n , vector<int> (m, -1));
        
        bool ans = find(n-1 , m-1 , p , s , dp);
        
        return ans;
    }
};