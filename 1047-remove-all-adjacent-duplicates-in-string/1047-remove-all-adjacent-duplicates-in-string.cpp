class Solution {
public:

    string removeDuplicates(string s) {
         // stack<char> st;
         string ans = "";
         int n = s.size();
         int i = 0 ;
        while(i<n){
            // if(st.size()==0) st.push(s[i]);
            
            if(ans.size() > 0 && s[i] == ans[ans.size()-1]){
                ans.pop_back();
            
            }else {
                ans.push_back(s[i]);
            }
            
            i++;
        }
        
        return ans;
    }
};