//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    
   int bfs(vector<vector<int>>& grid , vector<vector<int>>& temp , int n , int m)
    {
        queue<pair<pair<int , int> , int>> q;
        for(int i = 0 ; i< n ; i++){
            for(int j = 0 ; j<m ;j++){
                if(grid[i][j] == 2){
                    // temp[i][j] = 2 ;
                    q.push({{i,j} , 0});
                } 
            }
        }
        
        int maxtime = 0 ;
        int delrow[] = {-1 , 1 , 0 , 0} ;
        int delcol[] = {0 , 0 , -1 , 1} ;
        
        while(!q.empty())
        {
            int r = q.front().first.first;
            int c = q.front().first.second;
            int t = q.front().second;
            maxtime = max(maxtime , t);
            q.pop();
            int nrow = 0 ,  ncol = 0;
            for(int i = 0 ;i< 4 ;i++){
                nrow = r+delrow[i];
                ncol = c+delcol[i];
                
                if(nrow >= 0 && nrow<n && ncol >= 0 && ncol <m && grid[nrow][ncol] == 1 && temp[nrow][ncol] != 2){
                    q.push({{nrow , ncol} , t+1});
                    temp[nrow][ncol] = 2;
                }
            }
            
            
            
        }
        
        
        return maxtime;
        
    }
    
    
    
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> temp = grid;
        
        
       int ans = bfs(grid , temp , n , m);
       
       for(int i = 0 ;i<n ; i++){
            for(int j = 0 ;j <m ;j++){
                if(temp[i][j] == 1) return -1;
            }
        }
        
        
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends