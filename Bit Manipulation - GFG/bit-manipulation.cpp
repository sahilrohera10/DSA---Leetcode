//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void bitManipulation(int num, int i) {
        
        // getting the ith bit
        int mask = 1<<i-1;
        int ans = mask&num;
        
        if(ans == 0) cout<<0<<" ";
        else cout<<1<<" ";
        
        //seting the ith bit
        int ans1 = mask | num;
        cout<<ans1<<" ";
        
        
        //clearing the ith bit
        mask = ~mask;
        int ans2 = mask&num;
        cout<<ans2;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n >> i;
        Solution ob;
        ob.bitManipulation(n, i);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends