class Solution {
public:
    int reverse(int x) {
        int n = 0; 
        if(x>0) n = x ;
        else n = abs(x);
        
        int d = 0 ;
       long long ans = 0 ;
        
        while(n){
            d = n%10;
            ans = ans*10 + d ;
            n = n/10 ;
        }
        cout<<ans ;
        
        if(x < 0){
            ans = 0 - ans ;
        }
        
        if(ans < -2147483648 || ans > 2147483647){
            return 0 ;
        }
        
        return ans ;
        
        
    }
};