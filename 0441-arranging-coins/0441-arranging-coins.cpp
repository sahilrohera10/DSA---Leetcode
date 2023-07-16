class Solution {
public:
    int arrangeCoins(int n) {
        int c = 0 ;
        int i = 1 ;
        while(n>0){
            
            n = n-i;
            if(n>=0) c++;
            i++;
        }
        
        return c;
    }
};