//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:

bool check(map<char , int> &m1 , map<char , int> &m2)
{
    if(m1.size() != m2.size()) return false;
    for(x : m1){
        if(m2[x.first] != x.second) return false;
    }
    
    return true;
}

	int search(string pat, string txt) {
	   int k = pat.size();
	   map<char , int> m1 ;
	   map<char , int> m2 ;
	   
	   for(int i : pat){
	       m1[i]++;
	   }
	   
	   
	   
	   int i = 0 ;
	   int j = 0 ;
	   int c = 0 ;
	   int n = txt.size();
	   
	   while(j<n)
	   {
	       m2[txt[j]]++;
	       
	       if(j-i+1 < k)
	         j++;

	       else if(j-i+1 == k){
	           if(check(m1 ,m2)) c++;
	           
	           m2[txt[i]]--;
	           if(m2[txt[i]] == 0) m2.erase(txt[i]);
	           
	           i++;
	           j++;

	       }
	   }
	   
	   return c ;
	   
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends