class Solution {
public:
    
    int find(int i , int j , vector<vector<int>>& matrix , vector<vector<int>>& dp ){
        if(j<0 || j >= matrix[0].size()) return 1e9 ;
        if(i==0) return matrix[i][j];
        if(dp[i][j] != -1) return dp[i][j];
        int up = matrix[i][j] + find(i-1 , j , matrix , dp);
        int upLeft = matrix[i][j] + find(i-1 , j-1 , matrix , dp);
        int upRight = matrix[i][j] + find(i-1 , j+1 , matrix , dp);
        
        return dp[i][j] = min(up , min(upLeft , upRight)) ;
    }
    
    
    
    
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> dp(n , vector<int> (m , -1)) ;
        int mini = 1e9 ;
        for(int j = 0 ; j < m ; j++){
          mini = min(mini , find(n-1 , j , matrix , dp) ) ;
            for(int i = 0 ; i<n ; i++){
                for(int k = 0 ; k<m ; k++){
                    dp[i][k] = -1 ;
                }
            }
        }
        
        return mini ;
    }
};