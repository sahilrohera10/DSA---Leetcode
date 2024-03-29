//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
  
  void bfs(vector<vector<int>> &grid , vector<vector<int>> &vis, queue<pair<int , int>>& q){

      int n = grid.size();
      int m = grid[0].size();
      
      while(!q.empty()){
      int row = q.front().first;
      int col = q.front().second;
      vis[row][col] = 1 ;
      q.pop();
      
      int delr[] = {-1, 0, 1, 0};
      int delc[] = {0 , 1 , 0 , -1};
      for(int i = 0 ;i<4 ; i++){
          int nr = row+delr[i];
          int nc = col+delc[i];
          
          if(nr>=0 && nr<n && nc>=0 && nc<m && grid[nr][nc] == 1 && !vis[nr][nc]){
              q.push({nr,nc});

          }
      }
          
      }
  }
  
    int numberOfEnclaves(vector<vector<int>> &grid) {
        // we can also use dfs algo but here will use bfs algo
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n , vector<int> (m , 0));
         queue<pair<int , int>> q;
        int j = 0 ;
        while(j<m){
            if(grid[0][j] == 1 && !vis[0][j])
              q.push({0 , j});
            if(grid[n-1][j] == 1 && !vis[n-1][j])
              q.push({n-1,j});
              
              j++;
        }
        int i = 0 ;
        while(i<n){
            if(grid[i][0]==1 && !vis[i][0])
               q.push({i,0});
            if(grid[i][m-1] == 1 && !vis[i][m-1])
               q.push({i,m-1});
               
               i++;
        }
        
        bfs(grid , vis , q);
        
        int c = 0 ;
        for(int i = 0 ; i< n ;i++){
            for(int j = 0 ;j<m ; j++){
                if(grid[i][j] == 1 && !vis[i][j])
                   c++;
            }
        }
        
        return c;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.numberOfEnclaves(grid) << endl;
    }
}
// } Driver Code Ends