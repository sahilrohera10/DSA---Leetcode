class Solution {
public:
    
    int solve(int n , vector<int>& dp){
        
        // base case
        if(n <= 1){
            return n;
        }
        
        if(dp[n] != -1){
            return dp[n];
        }
        
        //recursive case
        dp[n] = solve(n-1 , dp) + solve(n-2 , dp);
        
        return dp[n];
        
    }
    int fib(int n) {
        
        
        //PURELY RECURSION
        
//         //base case
//         if(n==0 || n==1){
//             return n;
//         }
        
//         //recursive case
//         return fib(n-1) + fib(n-2);
        
        
        
        
        //DP APPROACH : (TOP - DOWN)
        
   vector<int> dp(n+1,-1) ;
      
        
       return solve(n , dp);
        
        
    }
};