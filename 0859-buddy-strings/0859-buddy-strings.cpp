class Solution {
public:
  
    bool buddyStrings(string s, string goal) {
        map<char , int> m1;
        map<char , int> m2;
        
        int n = s.size() , m = goal.size();
        
        if(n!=m) return false;
        int c = 0 ;
        int i = 0;
        while(i<n)
        {
            if(s[i] != goal[i]) c++;
            m1[s[i]]++;
            m2[goal[i]]++;
            i++;
        }
        
        if(m1!=m2) return false;
        
        if(m1==m2 && s==goal){
            if(m1.size()==n) return false;
            else return true;
        }
        
        if(c==0 || c==2) return true;
        
        return false;
        
    }
};