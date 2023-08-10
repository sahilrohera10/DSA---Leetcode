//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:


    void dfs( vector<vector<char>>& mat , vector<vector<int>>& vis , int r  , int c ,
    int delrow[] , int delcol[])
    {
        vis[r][c] = 1 ;
        int n = mat.size();
        int m = mat[0].size();
        
   
        for(int k = 0 ;k<4 ; k++){
            int nrow = r+delrow[k];
            int ncol = c+delcol[k];
            
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && mat[nrow][ncol] == 'O' 
            && !vis[nrow][ncol]){
                dfs(mat , vis , nrow , ncol , delrow , delcol);
            }
        }
    }
    
    
    

    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        vector<vector<int>> vis(n , vector<int> (m , 0));
        // vector<vector<char>> ans = mat;
        int delrow[] = {-1 , 0 , 1, 0};
        int delcol[] = {0 , 1 , 0 , -1};
        
        int i = 0 ;
        while(i<m){
            if(mat[0][i] == 'O' && !vis[0][i]) dfs(mat , vis , 0 , i , delrow , delcol);
            if(mat[n-1][i] == 'O' && !vis[n-1][i] ) dfs(mat , vis , n-1 , i , delrow , delcol );
            i++;
        }
        i=0;
        while(i<n){
            if(mat[i][0] == 'O' && !vis[i][0]) dfs(mat , vis , i , 0 , delrow , delcol );
            if(mat[i][m-1] == 'O' && !vis[i][m-1]) dfs(mat , vis , i , m-1  , delrow , delcol);
            i++;
        }
      
     
        
        for(int i = 0 ;i< n ; i++){
            for(int j = 0 ; j<m ;j++){
                if(mat[i][j] == 'O' && vis[i][j]==0){
                    mat[i][j] = 'X';
                }
            }
        }
       return mat;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends