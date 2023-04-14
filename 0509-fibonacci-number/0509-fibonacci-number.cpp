class Solution {
public:
    
    int f(int n , vector<int>& dp)
    {
        if(n<=1) return n;
        
        if(dp[n] != -1) return dp[n]; // checking if the value of the current                                       call is present in the dp vector or not
        
        return dp[n] = f(n-1 , dp) + f(n-2 , dp);  // store the value of the                                                    current function call into                                                    the dp vector and return .
    }
    
    
    
    int fib(int n) {
        vector<int> dp(n+1 , -1) ;  // step1 - declaring the dp vector
        return f(n , dp);
    }
};