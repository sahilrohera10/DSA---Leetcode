//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int find(string s , int i , int j)
	{
	    if(i>j) return 1;
	    
	    if(s[i] != s[j]) return 0;
	    
	    return find(s , i+1 , j-1);
	}
	
	int isPalindrome(string S)
	{
	    int n = S.size();
	   // return find(S , 0 , n-1);
	   int i=0 , j=n-1 ;
	   while(j>i){
	       if(S[i] != S[j]) return 0;
	       
	       i++;
	       j--;
	   }
	   
	   return 1;
	    
	}

};

//{ Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends