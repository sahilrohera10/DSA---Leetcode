//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  
      void dfs(int i , vector<int>& vis , stack<int> &st, vector<pair<int , int>> adj[] )
      {
          vis[i] = 1;
          
          for(auto x : adj[i])
          {
              if(!vis[x.first]) dfs(x.first , vis , st , adj);
          }
          
          st.push(i);
          
      }
  
  
     vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
         
        // basically here we need to follow two given steps to find out the shortest distance between
        //the given src node 0, to every other node in the graph
        
        // step 0 (we hvae given the 2d matrix of edges so we need to build a adj list first)
        
        vector<pair<int , int>> adj[N];
        
        for(int i = 0 ;i<M ; i++)
        {
            adj[edges[i][0]].push_back({edges[i][1] , edges[i][2]});
        }
        
        // Step 1 : perform toposort on the graph and build the toposort stack using DFS
        vector<int> vis(N , 0);
        stack<int> st;
        
        for(int i = 0 ;i<N ; i++)
        {
            if(!vis[i]){
                dfs(i , vis , st , adj);
            }
        }
        
        
        // Step 2 : now take out the nodes one by one from the stack and relax the nodes
 
        vector<int> dis(N , 1e8);
        dis[0] = 0 ;
        
        while(!st.empty()){
            int top = st.top();
            st.pop();
           
            for(auto x : adj[top]){ 
                if(dis[top] + x.second < dis[x.first]) dis[x.first] = dis[top] + x.second;
            }
        }
        
    
        
        for(int i = 0 ;i<N ; i++){
            if(dis[i] == 1e8) dis[i] = -1;
        }
        
        return dis;
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        for(int i=0; i<m; ++i){
            vector<int> temp;
            for(int j=0; j<3; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }
        Solution obj;
        vector<int> res = obj.shortestPath(n, m, edges);
        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends