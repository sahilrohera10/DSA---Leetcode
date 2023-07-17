//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // so i am solving this problem using sliding window technique
      long sum = 0 ;
      int i = 0 , j = 0 ;
      long maxi = -1e8;
      while(j<N){
          if(j-i+1 <= K){
              sum = sum + Arr[j];
              j++;
          }else{
              maxi = max(maxi , sum);
              sum =  sum-Arr[i]+Arr[j];
              i++;
              j++;
          }
      }
      maxi = max(maxi , sum);
      return maxi;

    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends