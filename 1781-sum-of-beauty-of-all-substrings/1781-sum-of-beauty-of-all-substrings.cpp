class Solution {
public:
    
//     long long findBeauty(string temp){
//         map<char , int> m ;
//         int n = temp.size();
        
//         for(int i = 0 ; i< n ; i++){

//             m[temp[i]]++;
//         }
//         long long max = INT_MIN ;
//         long long min = INT_MAX;
//         for(auto x : m){

//             if(x.second > max) max = x.second ;
//             if(x.second < min) min = x.second ;   
//         }
        

        
//         return max - min ;
//     }
    
//    void subString(string s, int n , long long &ans) 
// {
//        string temp = "";
//     for (int i = 0; i < n; i++) 
//         for (int len = 1; len <= n - i; len++)
//              ans = ans + findBeauty(s.substr(i,len));

       
// }
    
    
    int beautySum(string s) {
        
        //approach 1 (using map outside in another function) -> TLE
        
        // long long ans = 0 ;
        // int n = s.length();
        // subString(s,n,ans);
        
        //appraoch 2 (using map inside)
        int n = s.size();
        map<char , int> m ;
        int max = 0 ;
        int min = 5000;
        int ans = 0 ;
        for(int i = 0 ; i< n ; i++){
       
            for(int j = i ; j<n ;j++){
    
                m[s[j]]++;
            
        
            
            for(auto x : m){
                if(x.second > max) max = x.second;
                if(x.second < min) min = x.second;
            }
            ans = ans + max - min ;
                     max = 0 ; min = 5000;
            }
            m.clear();
        }
        
        
        return ans ;
        
    }
};