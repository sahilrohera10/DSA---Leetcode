class Solution {
public:
    int find(int i1 ,int j1 ,int i2 ,int j2 , int m ,vector<vector<int>>& grid ,  vector<vector<vector<int>>>& dp )
    {
        if(j1<0 ||j1>m || j2<0 || j2>m) return -1e8;
        if(dp[i1][j1][j2] != -1) return dp[i1][j1][j2];
        if( i1 == grid.size()-1){
            if(j1==j2) return grid[i1][j1];
            else return grid[i1][j1] + grid[i2][j2];}
        int maxi = 0 ;
        for(int d1 = -1 ; d1<=1 ; d1++){
            for(int d2 = -1 ; d2<=1 ; d2++){
            if(j1==j2) maxi = max(maxi , grid[i1][j1] + find(i1+1 , j1+d1 ,                  i2+1 , j2+d2 , m ,grid , dp));
            else maxi = max(maxi , grid[i1][j1] + grid[i2][j2] + find(i1+1 ,                             j1+d1 , i2+1 , j2+d2 , m , grid , dp));
            }
        }
        
        return dp[i1][j1][j2] = maxi ;
    }

    
    int cherryPickup(vector<vector<int>>& grid) {
        int m = grid[0].size();
        int n = grid.size();
        vector<vector<vector<int>>> dp(n , vector<vector<int>>(m , vector<int> (m , -1)));
        return find(0 , 0 , 0 , m-1 , m-1 , grid , dp);
    }
};