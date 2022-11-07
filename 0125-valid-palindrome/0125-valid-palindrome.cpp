class Solution {
public:
    
    bool isPalindrome(string ans , int i , int j){
        
        //Base Case
        if(j <= i){
            return true;
        }
        
        // cout<<ans[j];
        
        
        if(ans[i] != ans[j]){
                   // cout<<ans[i]<<" "<<ans[j]<<" ";

            return false;
        }
        
        //Recursive Case
        
        return isPalindrome(ans , i+1 , j-1);
        
        
        
        
    }
    
    
    bool isPalindrome(string s) {
        
        //Step 1 convert this given string to a single string
        string ans = "" ;
        int k = 0;
        
        int n = s.length();
        transform(s.begin(), s.end(), s.begin(), ::tolower);

        for(int i = 0;i <= n;i++){
            
            
            if(isspace(s[i])){
                continue;
        }
            else if(isalnum(s[i])){
                                ans.push_back(s[i]);

            }
//                else if(s[i] == '!' || s[i] == '@'|| s[i] == '#' ||s[i] == '$'|| s[i] == '%'|| s[i] == '^'
//               || s[i] == '&' || s[i] == '*' || s[i] == ':' || s[i] == ';' || s[i] == ',' || s[i] == '.' || s[i] == '_'|| s[i] == '/'|| s[i] == '-' || s[i] == '|' || s[i] == '\\' || s[i] == '\'' || s[i] == '[' || s[i] == '\"' || s[i] == ']' || s[i] == '{' || s[i] == '}' || s[i] == ')'|| s[i] == '(' || s[i] == '?'  || s[i] == '`' || s[i] == '>' || s[i] == '<' ){
                
//                 continue;
//             }
            
           
        }
        
        
        
        
        
  int size = ans.size();
        int j = size-1;
        for(int i = 0; i<(size)/2 ; i++){
            if(ans.at(i) != ans.at(j)){
                return false;
            }
            
            j--;
        }
        
        return true;
        
        // cout<<"size=>" << size <<endl;
        // cout<<ans<<" ";
        
        // cout<<ans.at(20)<<" ";
        
        // return isPalindrome(ans , 0 , size-1 );
        // return true;
        
    }
};