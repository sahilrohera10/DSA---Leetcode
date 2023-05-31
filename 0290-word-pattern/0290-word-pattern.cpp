class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char , string> mp;
        map<string , char> mp2;
        int n = pattern.size();
        int sz = s.size();
        int j = 0 ;
        for(int i = 0 ; i<n ; i++){
            string temp = "";
         
            while(s[j] != ' ' && j<sz){
                temp = temp+s[j];
                j++;
            }
      
            j++;
            cout<<temp<<" ";
         
                if(mp.count(pattern[i]) && mp[pattern[i]] != temp)
                return false;
              else if (mp.count(pattern[i]) && mp[pattern[i]] == temp) {
             
                  continue;}
            
            if(mp2.count(temp) && mp2[temp] != pattern[i]) return false;
            
            mp[pattern[i]] = temp;
            mp2[temp] = pattern[i];
        }
        cout<<sz<<" "<<j;
            if(j-1 != sz) return false;
        
        return true;
    }
};