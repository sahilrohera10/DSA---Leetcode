class Solution {
public:
    bool isValid(string s) {
        
        stack<char> st ;
        char top ;
        
        for(int i = 0 ; i< s.length() ; i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
            }else{
                if(!st.empty()){
                     top = st.top();
                if(top == '(' && s[i] == ')' || top == '[' && s[i] == ']' || top == '{' && s[i] == '}'){
                    st.pop();
                }else{
                    return false;
                }
            }else{
                    return false;
                }  
                }
           
        }
        if(st.size() == 0){
            return true;
        }
        
        return false;
        
    }
};