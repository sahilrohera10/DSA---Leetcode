class Solution {
public:
    
    
    int solve(int n , vector<int>& dp){
        if(n == 0){
            return 1;
        }
        if(n < 0){
            return 0;
        }
        
        if(dp[n] != -1){
            return dp[n];
        }
        
        dp[n] = solve(n-1 , dp) + solve(n-2 , dp);
        
        return dp[n] ;
    }
    
    //GIVING TLE BCZ THIS QUESTION IS OF DP WE DO THIS LATTER
    int climbStairs(int n) {
        
        //DP BASED
        vector<int> dp(n+1 , -1) ;
        // for(int i = 0; i<=n ; i++){
        //     dp.push_back(-1);
        // }
        
        return solve(n , dp);
        
        
        
        //RECURSION BASED
//         //if the starting stair is at lets suppose <0 return 0;
//         //if the starting stair is at lets suppose == 0 return 1; means thier is only one way to             reach that only stair
        
//         //base case 
//         if(n==0){
//             return 1;
//         }
//         if(n<0){
//             return 0;
//         }
        
        
//         // we take this prblm not from starting to top , rather we take this from top to bottom
       
//         //recursive case
        
//         //since we have to return the no. of cases then we consider that the man has come from the n-1th stair or from the n-2th stair
        
//         return climbStairs(n-1) + climbStairs(n-2);

    }
};