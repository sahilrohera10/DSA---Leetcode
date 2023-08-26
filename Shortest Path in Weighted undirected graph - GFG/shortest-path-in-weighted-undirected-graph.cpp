//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
        vector<pair<int , int>> adj[n+1];
        
        for(auto x : edges)
        {
            adj[x[0]].push_back({x[1] , x[2]});
            adj[x[1]].push_back({x[0] , x[2]});
        }
        
        
       priority_queue <pair<int , int>, vector<pair<int , int>>, greater<pair<int , int>> > pq;
    
       pq.push({0 , 1});
       
       vector<int> dis(n+1 , 1e8);
       dis[1] = 0 ;
       
       vector<int> parent(n+1);
       for(int i = 0 ; i<=n ; i++){
           parent[i] = i ;
       }
       
       while(!pq.empty())
       {
           int node = pq.top().second;
           int dist = pq.top().first;
           
           pq.pop();
           
           for(auto x : adj[node]){
               if(dist + x.second < dis[x.first]){
                   dis[x.first] = dist + x.second;
                   pq.push({dis[x.first] , x.first});
                   parent[x.first] = node;
               }
           }
       }
       
       if(dis[n] == 1e8) return {-1};
       
       vector<int> ans;
       
       int node = n ;
       while(parent[node] != node){
           ans.push_back(node);
           node = parent[node];
       }
        
        ans.push_back(1);
        
        reverse(ans.begin() , ans.end());
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
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