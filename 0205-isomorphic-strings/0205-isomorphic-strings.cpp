class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char , char> m;
        
        int n = s.size();
        int n1 = t.size();
        
        if(n != n1) return false;
        
        int i = 0 ;
         while(i<n)
         {
         
            if( m[s[i]] && m[s[i]] != t[i]) return false ;
            
             else 
             {
                 // if(m[t[i]] && m[t[i]] != s[i]) return false ;
              // if(m[t[i]] == t[i]) return false;
                 for(auto x : m){
                     if(x.second == t[i] && x.first != s[i]) return false;
                 }
                     m[s[i]] = t[i] ;
                      // m[t[i]] = s[i];
                     i++; 
             }
            
         }
        
        
        return true;
    }
};