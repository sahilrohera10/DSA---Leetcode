class Solution {
public:
    
//     int find(int i , int amount , vector<int> coins , vector<vector<int>>& dp)
//     {
//         //base case
//         if(i==0){
//             if(amount%coins[0] == 0) return amount/coins[0];
//             else return 1e9 ;
//         }
        
        
//         //recursive case
//         if(dp[i][amount] != -1) return dp[i][amount];
//         int not_take = 0 + find(i-1 , amount , coins , dp);
//         int take = INT_MAX ;
//         if(amount >= coins[i]) take = 1 + find(i , amount-coins[i] , coins , dp);
        
        
//         return dp[i][amount] = min(not_take , take);
//     }
    
    
    
    int coinChange(vector<int>& coins, int amount) {
         if(amount == 0) return 0 ;
        //tabulation
        int n = coins.size();
        vector<vector<int>> dp(n , vector<int> (amount+1 , 0)); 
        
        for(int t = 0 ; t<=amount ; t++){
            if(t % coins[0] == 0) dp[0][t] = t/coins[0];
            else dp[0][t] = 1e9 ;
        }
        
        for(int i = 1 ; i<n ; i++){
            for(int j = 0 ; j <= amount ; j++){
              int not_take = 0 + dp[i-1][j] ;
              int take = INT_MAX ;
              if(j >= coins[i]) take = 1 + dp[i][j-coins[i]];
                
              dp[i][j] = min(not_take , take);
            }
        }
        int ans = dp[n-1][amount];
        if(ans >= 1e9) return -1;
        return ans ;
        
        
        
      
        
        
        
        
        
        
        //memoisation is giving TLE hence we need to optimise it further using tabulation
        // if(amount == 0) return 0 ;
        // int n = coins.size();
        // vector<vector<int>> dp(n , vector<int> (amount+1 , -1));
        // int ans = find(n-1 , amount , coins , dp);
        // if(ans >= 1e9) return -1;
        // return ans ;
        
        
    }
};