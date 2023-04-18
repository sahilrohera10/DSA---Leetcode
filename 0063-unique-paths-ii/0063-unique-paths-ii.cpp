class Solution {
public:
    
    int find(int i , int j , vector<vector<int>>& obstacleGrid , vector<vector<int>>& dp)
    {
        if(i == 0 && j == 0 && obstacleGrid[i][j] != 1 ) return 1 ;
        if(i<0 || j< 0) return 0 ;
        
        if(obstacleGrid[i][j] == 1) return 0 ;
        
        if(dp[i][j] != -1) return dp[i][j];
        
        int up = find(i-1 , j , obstacleGrid , dp);
        int left = find(i , j-1 , obstacleGrid , dp);
        
        return dp[i][j] = up + left ;
    }
    
    
    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        cout<<m<<" "<<n ;
        vector<vector<int>> dp (m , vector<int> (n , -1)) ;
        
      return find(m-1 , n-1 , obstacleGrid , dp);
    }
};