class Solution {
public:
    int find(string s , string t){
                 int n = s.size();
                 int m = t.size();
 
        vector<vector<int>> dp(n+1 , vector<int> (m+1 , 0));
        
        for(int i = 0 ; i<=n ; i++){
           dp[i][0] = 0 ;
        }
          for(int i = 0 ; i<=m ; i++){
           dp[0][i] = 0 ;
        }
        
        for(int i1 = 1 ; i1<=n ; i1++){
            for(int i2 = 1 ; i2<=m ; i2++){
            if(s[i1-1] == t[i2-1]) dp[i1][i2] = 1 + dp[i1-1][i2-1] ;
            else {
                 int first = dp[i1-1][i2];
                
                 int second =  dp[i1][i2-1];

                 dp[i1][i2] = 0 + max(first , second);}
            }
        }

       return dp[n][m];

    }
    int longestPalindromeSubseq(string s) {
       string t = s;
        reverse(t.begin() , t.end());
        int ans = find(s,t);
        
        return ans;
        
    }
};