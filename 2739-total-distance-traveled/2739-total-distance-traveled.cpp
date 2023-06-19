class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        
        int c = 0 ;
        int ans = 0 ;
        
        while(mainTank--){
            c++;
            if(c==5 && additionalTank>=1){
                mainTank++;
                additionalTank--;
                c=0;
            }
            
            ans = ans + 10;
            
        }
        
        return ans;
    }
};