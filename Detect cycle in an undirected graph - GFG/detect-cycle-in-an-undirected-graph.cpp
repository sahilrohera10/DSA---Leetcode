//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
 bool bfs( vector<int> &vis ,  vector<int> adj[] , int src){
      
       queue<pair<int , int>> q; // will store current node with its parent node, 
                                 // from where it has been come from
        
        q.push({src , -1}); 
        
        vis[src] = 1;
        
        while(!q.empty())
        {
            int n = q.front().first;
            int parent = q.front().second;
            q.pop();
            
            
            for(auto x : adj[n]){
                if(!vis[x]){
                    q.push({x , n});
                    vis[x] = 1;
                }
                else if(vis[x] == 1 && x!=parent){
                    return true;
                }
            }
            
            
        }
        
        return false;
  }
  
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
   
        vector<int> vis (V , 0);
        
        
        // if there are multiple components present in the graph
        for(int i = 0 ; i< V ;i++){
            if(!vis[i]){
               if (bfs(vis , adj , i) == true){
                   return true;
               }
            }
        }
        
       
        return false;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends