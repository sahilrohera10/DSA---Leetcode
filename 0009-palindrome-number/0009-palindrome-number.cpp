class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        
        int n = x ;
        long long num = 0 ;
        
        while(n){
            int d = n%10;
            num = num*10 + d ;
            n = n/10;
        }
        
        if(num == x) return true;
        
        return false;
    }
};