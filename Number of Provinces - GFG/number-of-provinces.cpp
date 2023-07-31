//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  
      void dfs(int node ,int vis[], vector<int> adjls[])
    {
   
        vis[node] = 1;
        
        //traversing all the neigher nodes
        for(auto it : adjls[node]) {
            if(!vis[it]){
                dfs(it , vis , adjls);
            }
        }
        
    }
    // void dfs(int node, vector<int> adjLs[], int vis[]) {
    //     // mark the more as visited
    //     vis[node] = 1; 
    //     for(auto it: adjLs[node]) {
    //         if(!vis[it]) {
    //             dfs(it, adjLs, vis); 
    //         }
    //     }
    // }
  
  
    int numProvinces(vector<vector<int>> adj, int V) {
        //  int n = isConnected.size();
    
        vector<int> adjls[V];
        
        for(int i = 0 ;i<V ; i++)
        {
            for(int j = 0 ;j<V ; j++){
                if(adj[i][j] == 1 && i != j){
                    adjls[i].push_back(j);
                    adjls[j].push_back(i);
                }
            }
        }
        
      int vis[V] = {0}; 
        int c = 0 ;
        
        for(int i = 0 ; i<V ;i++)
        {
            if(!vis[i]){
                c++;
                dfs(i , vis , adjls);
            }
        }
        
        return c ;
    // vector<int> adjLs[V]; 
        
    //     // to change adjacency matrix to list 
    //     for(int i = 0;i<V;i++) {
    //         for(int j = 0;j<V;j++) {
    //             // self nodes are not considered
    //             if(adj[i][j] == 1 && i != j) {
    //                 adjLs[i].push_back(j); 
    //                 adjLs[j].push_back(i); 
    //             }
    //         }
    //     }
    //     int vis[V] = {0}; 
    //     int cnt = 0; 
    //     for(int i = 0;i<V;i++) {
    //         // if the node is not visited
    //         if(!vis[i]) {
    //             // counter to count the number of provinces 
    //             cnt++;
    //           dfs(i, adjLs, vis); 
    //         }
    //     }
    //     return cnt;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends