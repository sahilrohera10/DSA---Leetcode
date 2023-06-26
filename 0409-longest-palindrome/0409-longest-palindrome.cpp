class Solution {
public:
    int longestPalindrome(string s) {
        map<char , int> mp ;
        int n = s.size();
        
        for(int i = 0 ;i<n ; i++){
            mp[s[i]]++;
        }
        int c = 0 ;
        bool flag = false;
        for(auto x : mp){

            if(x.second%2==0){
                c = c+x.second;
            }else{
                if(!flag){
                    c = c+x.second;
                    flag = true;
                }else{
                    c = c + x.second-1;
                }
            }
        }
        return c ;
    }
};