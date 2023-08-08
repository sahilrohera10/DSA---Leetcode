//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    
    void bfs(vector<vector<char>>& grid , vector<vector<int>> &vis , int i , int j , int n , int m)
    {
        queue<pair<int , int>> q;
        q.push({i , j});
        
        vis[i][j] = 1 ;
        
        while(!q.empty())
        {
            int r = q.front().first;
            int c = q.front().second; 
            q.pop();
            
            for(int delrow = -1 ; delrow <=1 ; delrow++){
                for(int delcol = -1 ; delcol <= 1 ; delcol++)
                {
                    int nrow = r+delrow;
                    int ncol = c+delcol;
                    if(nrow >= 0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol] == '1' && !vis[nrow][ncol]){
                        vis[nrow][ncol] = 1;
                        q.push({nrow , ncol});
                    }
                }
            }
           
            // if(r-1 >= 0 && (grid[r-1][c] == '1' && vis[r-1][c] == 0)){
            // q.push({r-1 , c});
            // vis[r-1][c] = 1;}
            
            // if( r+1 < n && (grid[r+1][c] == '1' && vis[r+1][c] == 0)){
            // q.push({r+1 , c});
            // vis[r+1][c] = 1;}
            
            // if( c-1 >= 0 && (grid[r][c-1] == '1' && vis[r][c-1] == 0)){
            // q.push({r , c-1});
            // vis[r][c-1] = 1;}
            
            // if( c+1 < m && (grid[r][c+1] == '1' && vis[r][c+1] == 0)){
            // q.push({r , c+1});
            // vis[r][c+1] = 1;}
            
        }
    }
    
    
    
    
  public:
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int c = 0 ;
        vector<vector<int>> vis(n , vector<int> (m , 0));
        
        for(int i = 0 ;i<n ;i++){
            for(int j = 0 ; j<m ;j++){
                if(!vis[i][j] && grid[i][j] == '1') {
                    bfs(grid , vis , i , j , n , m);
                    c++;
                }
            }
        }
        return c;
        
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends