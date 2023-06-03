class Solution {
public:
    string removeTrailingZeros(string num) {
        int c = 0 ;
        int n = num.size();
        
        int i = n-1 ;
        
        while(num[i] == '0'){
            c++;
            i--;
        }
        string ans = "";
        
        for(int i = 0 ;i<n-c;i++){
            ans += num[i];
        }
        
        return ans;
    }
};