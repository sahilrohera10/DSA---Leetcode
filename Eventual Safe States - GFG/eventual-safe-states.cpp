//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
   bool dfs(int i , vector<int> &vis , vector<int> &path , vector<int> adj[] , int check[])
   {
       check[i] = 0 ;
       vis[i] = 1;
       path[i] = 1;
       
       for(auto x : adj[i]){
           if(!vis[x]){
               if(dfs(x , vis , path , adj , check) == true ){
                   check[i] = 0 ;
                   return true;
                   
               }
               
           }else if(path[x]){
               check[i] = 0 ;
               return true;
               
           }
       }
       
       check[i] = 1;
       path[i] = 0 ;
       return false;
   }
  
  
    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
     
        vector<int> vis(V , 0);
        vector<int> path(V , 0);
        
        int check[V] = {0};
        vector<int> safenodes;
        
        for(int i = 0 ;i<V ; i++){
            if(!vis[i]){
              dfs(i , vis , path , adj , check) ;
            }
        }
        
        for(int i = 0 ;i<V ; i++){
           if(check[i] == 1)
            safenodes.push_back(i);
        }
        
        
        return safenodes;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {

        int V, E;
        cin >> V >> E;
        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        vector<int> safeNodes = obj.eventualSafeNodes(V, adj);
        for (auto i : safeNodes) {
            cout << i << " ";
        }
        cout << endl;
    }
}

// } Driver Code Ends