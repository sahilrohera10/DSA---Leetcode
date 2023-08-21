//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
    public:
    string findOrder(string dict[], int N, int k) {
        //map all the k char in a map from 0 to k
        map<int , char> mp;
        
        for(int i = 0 ; i<k ;i++)
        {
            mp[i] = (char)97+i;
           
        }
        
        
        //now build the adj list of the graph using these string as folows:
        
        // take every two consecutive pairs of strings and figure out why this string has
        //come first in the order, hence which alphabet comes first.
        
        vector<int> adj[k] ;
        
        for(int i = 0 ; i<N-1 ; i++)
        {
            int j = 0 ;
            while(j<dict[i].size())
            {
                if(dict[i][j] == dict[i+1][j]) j++;
                else{
                    adj[dict[i][j] - 97].push_back(dict[i+1][j] - 97);
                    break;
                }
            }
        }
        
        vector<int> indegree(k , 0);
        
        for(int i = 0 ;i<k ;i++){
            for(auto x : adj[i]){
                indegree[x]++;
            }
        }
        
        queue<int> q;
        
        for(int i = 0 ;i<k ;i++)
        {
            if(indegree[i]==0) q.push(i);
        }
        
        vector<int> topo ;
        
        while(!q.empty()){
            
            int f = q.front();
            q.pop();
            topo.push_back(f);
            
            for(auto x : adj[f])
            {
                indegree[x]--;
                if(indegree[x] == 0) q.push(x);
            }
        }
        
        string ans = "";
        
        for(auto x : topo){
            ans = ans + mp[x];
        }
      
        return ans;
        
        
    }
};

//{ Driver Code Starts.
string order;
bool f(string a, string b) {
    int p1 = 0;
    int p2 = 0;
    for (int i = 0; i < min(a.size(), b.size()) and p1 == p2; i++) {
        p1 = order.find(a[i]);
        p2 = order.find(b[i]);
        //	cout<<p1<<" "<<p2<<endl;
    }

    if (p1 == p2 and a.size() != b.size()) return a.size() < b.size();

    return p1 < p2;
}

// Driver program to test above functions
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;
        string dict[N];
        for (int i = 0; i < N; i++) cin >> dict[i];
        
        Solution obj;
        string ans = obj.findOrder(dict, N, K);
        order = "";
        for (int i = 0; i < ans.size(); i++) order += ans[i];

        string temp[N];
        std::copy(dict, dict + N, temp);
        sort(temp, temp + N, f);

        bool f = true;
        for (int i = 0; i < N; i++)
            if (dict[i] != temp[i]) f = false;

        if(f)cout << 1;
        else cout << 0;
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends