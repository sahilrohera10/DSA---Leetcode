class Solution {
public:
    int partitionString(string s) {
        int c = 0 ;
        
        int n = s.size();
        string ans = "" ;
        bool flag ;
   
        for(int i = 0 ; i< n ;i++){
            flag = true;
           
            for(int j = 0 ; j < ans.size() ; j++){
                if(s[i] == ans[j]){
                    flag = false;
                    c++;
                    ans = "" ;
                    i--;
                    break;
                }
            }
            if(flag){
                ans = ans + s[i];
            }
        }
        return c+1 ;
    }
};