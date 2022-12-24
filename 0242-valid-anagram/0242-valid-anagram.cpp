class Solution {
public:
    bool isAnagram(string s, string t) {
        
        int l1 = s.length();
        int l2 = t.length();
        
        if(l1 != l2){
            return false;
        }
        
        map<char , int> m1;
        map<char , int> m2;
        
        for(int i = 0 ;i<l1 ; i++){
            m1[s[i]]++;
        }
        
        
        for(int i = 0 ;i<l2 ; i++){
            m2[t[i]]++;
        }
        
        for(auto x : m1){
           if(m2[x.first] != x.second){
               return false;
           } 
        }
        
        return true;
        
    }
};