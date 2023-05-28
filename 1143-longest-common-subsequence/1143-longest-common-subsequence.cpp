class Solution {
public:
    
//     int find(int i1 , int i2 , string text1 , string text2, vector<vector<int>> &dp)
//     {
//         //base case
//         if(i1<0 || i2<0) return 0;
    
//         if(dp[i1][i2] != -1) return dp[i1][i2];
        
//         //recursive case
//         if(text1[i1] == text2[i2])
//             return dp[i1][i2] = 1 + find(i1-1 , i2-1 , text1 , text2 , dp);
      
//         int first = find(i1-1 , i2 , text1 , text2 , dp) ;
//         int second =  find(i1 , i2-1 , text1 , text2 , dp);
        
//         return dp[i1][i2] = 0 + max(first , second);
//     }
  
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size();
        int m = text2.size();
        
        //optimising using memoization, still giving TLE
        // vector<vector<int>> dp(n , vector<int> (m , -1));
        
        //finally optimising using tabulation
        vector<vector<int>> dp(n+1 , vector<int> (m+1 , 0));
        
        for(int i = 0 ; i<=n ; i++){
           dp[i][0] = 0 ;
        }
          for(int i = 0 ; i<=m ; i++){
           dp[0][i] = 0 ;
        }
        
        for(int i1 = 1 ; i1<=n ; i1++){
            for(int i2 = 1 ; i2<=m ; i2++){
            if(text1[i1-1] == text2[i2-1]) dp[i1][i2] = 1 + dp[i1-1][i2-1] ;
            else {
                 int first = dp[i1-1][i2];
                
                 int second =  dp[i1][i2-1];

                 dp[i1][i2] = 0 + max(first , second);}
            }
        }

       int ans = dp[n][m];
        
        return ans ;
    }
};