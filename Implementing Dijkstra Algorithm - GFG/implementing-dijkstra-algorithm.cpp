//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        
        // USING PRIORITY QUEUE
        
        //  priority_queue <pair<int , int>, vector<pair<int  ,int>>, greater<pair<int  , int>> > pq;
         
         
        //  vector<int> dis(V , 1e9);
         
        //  pq.push({0 , S});
         
        //  dis[S] = 0 ; 
         
        //  while(!pq.empty())
        //  {
        //      int dist = pq.top().first;
        //      int node = pq.top().second;
        //      pq.pop();
             
        //      for(auto x : adj[node])
        //      {
        //          if(dist + x[1] < dis[x[0]]){
        //             dis[x[0]] = dist + x[1];
        //             pq.push({dist + x[1] , x[0]});
        //          }
        //      }
        //  }
         
         
        //  return dis;
        
        
        // NOW USING SET DATA STRUCTURE 
        
        set<pair<int , int>> st;
        st.insert({0 , S});
        
        vector<int> dis(V , 1e8);
        dis[S] = 0 ;
        
        while(!st.empty()){
            
            auto it = *(st.begin());
            int dist = it.first;
            int node = it.second;
            st.erase(it);
            
            for(auto x : adj[node])
            {
                if(dist + x[1] < dis[x[0]]){
                    if(dis[x[0]] != 1e8){
                        st.erase({dis[x[0]] , x[0]});
                    }
                    
                    dis[x[0]] = dist + x[1];
                    st.insert({dist+x[1] , x[0]});
                }
            }
            
        }
        
        return dis;
         
    }
};


//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        int S;
        cin>>S;
        
        Solution obj;
    	vector<int> res = obj.dijkstra(V, adj, S);
    	
    	for(int i=0; i<V; i++)
    	    cout<<res[i]<<" ";
    	cout<<endl;
    }

    return 0;
}


// } Driver Code Ends