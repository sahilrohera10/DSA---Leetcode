class Solution {
public:
    int kthGrammar(int n, int k) {
        
        // base case
        if(n==1){
            return 0;
        }
        
        
        //recursive case 
        
        if(k%2==0){
            if(kthGrammar(n-1 , k/2)==0){
                return 1;
            }
            return 0;       
        }
        else{
            if(kthGrammar(n-1 , (k+1)/2) == 0){
                return 0;
            }
            return 1;
        }
        
    }
};