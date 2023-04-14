class Solution {
public:
    
    //memoisation
    int f(int n , vector<int>& dp)
    {
        if(n<=1) return n;
        
        if(dp[n] != -1) return dp[n]; // checking if the value of the current                                       call is present in the dp vector or not
        
        return dp[n] = f(n-1 , dp) + f(n-2 , dp);  // store the value of the                                                    current function call into                                                    the dp vector and return .
    }
    
    
    
    
    
    
    int fib(int n) {
        // vector<int> dp(n+1 , -1) ;  // step1 - declaring the dp vector
        // return f(n , dp);   // memoisation (sc - O(n) + O(n))
        
        //tabulation (sc - O(n)) more optimised
//         dp[0] = 0 ; 
//         dp[1] = 1 ;
        
//         for(int i = 2 ; i <= n ; i++){
            
//             dp[i] = dp[i-1] + dp[i-2];
//         }
        
//         return dp[n];
        
        //most optimised using variables
        int prev2 = 0 ;
        int prev = 1 ;
        int cur = 0 ;
        if(n==0) return prev2 ;
        if(n == 1) return prev ;
        for(int i = 2 ; i<=n ; i++){
            cur = prev + prev2 ;
            prev2 = prev ;
            prev = cur ;
        }
        
        return prev ;
        
        
    }
};