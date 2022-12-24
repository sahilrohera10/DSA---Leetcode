class Solution {
public:
    
    int sqrDigit(int n){
        int sum = 0 , d = 0;
       
        
        
        while( n != 0){
            d= n%10;
            sum = sum + (d*d);
            n = n/10;
        }
        return sum ;
    }
    
    
    bool isHappy(int n) {
         vector<int> check;
        if(n==1){
            return true;
        }
        if(n<=0){
            return false;
        }
        // if(n/10 == 0){
        //     return false;
        // }
        
        
        while(n!=1){
                for(int i = 0 ;i< check.size() ; i++){
                if(n == check[i]){
                    cout<<n;
                    return false;
                }
            }
            check.push_back(n);

            n = sqrDigit(n);
        
        }
        
        return true;
    }
};