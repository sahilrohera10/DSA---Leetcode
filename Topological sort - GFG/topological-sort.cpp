//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends




// topo sort using DFS

// class Solution
// {
//     void dfs(int i , vector<int>& vis , stack<int>& st , vector<int> adj[])
//     {
//         vis[i] = 1;
        
//         for(auto x : adj[i]){
//             if(!vis[x]){
//                 dfs(x , vis , st , adj);
//             }
//         }
//         st.push(i);
//     }
    
// 	public:
// 	//Function to return list containing vertices in Topological order. 
// 	vector<int> topoSort(int V, vector<int> adj[]) 
// 	{
	    
// 	    vector<int> vis(V , 0);
// 	    stack<int> st ; 
	    
// 	    for(int i  = 0 ;i<V ; i++){
// 	        if(!vis[i]){
// 	            dfs(i , vis , st , adj);
// 	        }
// 	    }
	    
// 	    vector<int> ans ;
// 	    while(!st.empty()){
// 	        int t = st.top();
// 	        ans.push_back(t);
// 	        st.pop();
// 	    }
	    
// 	    return ans;
	    
// 	}
// };


// Topo sort using BFS || Kahn's Algorithm
class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    
	   int indegree[V] = {0};
	   
	   for(int i = 0 ; i<V ; i++)       // preparing our indegrees
	   {
	       	   for(auto x : adj[i]){
	               indegree[x]++;
	            }
	   
	   }
	   
	   queue<int> q;
	   
	   for(int i = 0 ; i<V ; i++)
	   {
	       if(indegree[i] == 0) q.push(i);
	   }

         vector<int> ans;
         
         while(!q.empty())
         {
             int f = q.front();
             q.pop();
             
             for(auto x : adj[f]){
                 indegree[x]--;
                 if(indegree[x] == 0){
                     q.push(x);
                 }
             }
             
             ans.push_back(f);
         }
	   
	   return ans;
	    
	}
};


















//{ Driver Code Starts.

/*  Function to check if elements returned by user
*   contains the elements in topological sorted form
*   V: number of vertices
*   *res: array containing elements in topological sorted form
*   adj[]: graph input
*/
int check(int V, vector <int> &res, vector<int> adj[]) {
    
    if(V!=res.size())
    return 0;
    
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> E >> N;
        int u, v;

        vector<int> adj[N];

        for (int i = 0; i < E; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
        }
        
        Solution obj;
        vector <int> res = obj.topoSort(N, adj);

        cout << check(N, res, adj) << endl;
    }
    
    return 0;
}
// } Driver Code Ends