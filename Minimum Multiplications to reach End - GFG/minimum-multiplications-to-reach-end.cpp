//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minimumMultiplications(vector<int>& arr, int start, int end) {
         queue<pair<int  , int>> q;
   // steps , node


   vector<int> dis(100000 , 1e8);

   dis[start] = 0 ;
   q.push({0 , start});


   while(!q.empty())
   {
       int steps = q.front().first;
       int node = q.front().second;
       q.pop();
       
       if(node == end) return steps;

       
       for(auto x : arr){
           int m = (node*x)%100000;
           if(dis[m] > steps+1){
               dis[m] = steps+1;
               q.push({dis[m] , m});
           }
       }

   }

   return -1;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int start, end;
        cin >> start >> end;
        Solution obj;
        cout << obj.minimumMultiplications(arr, start, end) << endl;
    }
}

// } Driver Code Ends