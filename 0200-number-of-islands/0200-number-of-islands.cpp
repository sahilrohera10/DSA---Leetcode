class Solution {
public:
    
    void bfs(vector<vector<char>>& grid , vector<vector<int>>& vis , int i , int j , int n , int m)
    {
        vis[i][j] = 1 ;
        queue<pair<int , int>> q ;
        q.push({i , j});
        
        while(!q.empty())
        {
            int r = q.front().first;
            int c = q.front().second;
            q.pop();
            
             if(r-1 >= 0 && (grid[r-1][c] == '1' && vis[r-1][c] == 0)){
            q.push({r-1 , c});
            vis[r-1][c] = 1;}
            
            if( r+1 < n && (grid[r+1][c] == '1' && vis[r+1][c] == 0)){
            q.push({r+1 , c});
            vis[r+1][c] = 1;}
            
            if( c-1 >= 0 && (grid[r][c-1] == '1' && vis[r][c-1] == 0)){
            q.push({r , c-1});
            vis[r][c-1] = 1;}
            
            if( c+1 < m && (grid[r][c+1] == '1' && vis[r][c+1] == 0)){
            q.push({r , c+1});
            vis[r][c+1] = 1;}
        }
    }
    
    
    int numIslands(vector<vector<char>>& grid) {
        
        
        // inshort we need to find out the number of connected components within the given matrix
        // we will use bfs for traversal
        // and will be requiring a vis 2d array of same size 
        
        int n = grid.size();
        int m = grid[0].size();
        
        vector<vector<int>> vis(n , vector<int> (m ,0));
        int c = 0;
        for(int i = 0 ;i<n ; i++)
        {
            for(int j = 0 ; j<m ; j++)
            {
                if(!vis[i][j] && grid[i][j] == '1')
                {
                    bfs(grid , vis , i , j , n , m);
                    c++;
                }
            }
        }
        
        return c ;
    }
};