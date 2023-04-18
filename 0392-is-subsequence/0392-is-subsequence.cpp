class Solution {
public:
    bool find(string s , string t , int i , int j){
        if(i == s.size()){
            return true ;
        }
        int  k ;
        for(k = j ; k < t.size() ; k++)
        {
            if(s[i] == t[k]){
                break ;
            }
        }
        if(k == t.size())return false ;
        
        return find(s , t , i+1 , k+1);
        
    }
    
    bool isSubsequence(string s, string t) {
      return find(s , t , 0 , 0);
    }
};