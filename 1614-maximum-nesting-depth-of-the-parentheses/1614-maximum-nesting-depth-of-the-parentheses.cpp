class Solution {
public:
    int maxDepth(string s) {
        stack<int> st;
        
        int l = 0; 
        int r = 0 ;
        int n = s.size();
        int max = INT_MIN;
        for(int i = 0 ;i < n ; i++){
            if(s[i] == '('){
                l++;
                if((l-r) > max){
                    max = l - r ;
                }
            }else if(s[i] == ')'){
                r++;
                if((l-r) > max){
                    max = l - r ;
                }
            }else {
                if((l-r) > max){
                    max = l - r ;
                }
            }
        }
        return max ;

    }
};