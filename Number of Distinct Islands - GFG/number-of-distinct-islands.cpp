//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
  void dfs(vector<vector<int>>& grid , vector<vector<int>>& vis , int r , int c,
            int delr[] , int delc[] , vector<pair<int , int>> &vec 
            , int br , int bc) {
                vis[r][c] = 1;
                vec.push_back({r-br , c-bc});
                int n = grid.size();
                int m = grid[0].size();
                
                for(int i = 0 ;i<4 ; i++){
                    int nr = r+delr[i];
                    int nc = c+delc[i];
                    
                    if(nr>=0 && nr<n && nc>=0 && nc<m && grid[nr][nc]==1 
                    && !vis[nr][nc]){
                        dfs(grid , vis , nr , nc , delr , delc , vec , br , bc);
                    }
                }
            }
  
  
    int countDistinctIslands(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n , vector<int> (m , 0));
        
        set<vector<pair<int , int>>> s;
        
        int delr[] = {-1 , 0 , 1 , 0};
        int delc[] = {0 , 1 , 0 , -1};
        
        for(int i = 0 ;i<n ; i++){
            for(int j = 0 ; j<m ; j++){
                if(grid[i][j]==1 && !vis[i][j]){
                    vector<pair<int , int>> vec;
                    dfs(grid , vis , i , j , delr , delc , vec , i , j);
                    s.insert(vec);
                }
            }
        }
        
        return s.size();
        
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
        cout << obj.countDistinctIslands(grid) << endl;
    }
}
// } Driver Code Ends