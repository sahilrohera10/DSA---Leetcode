class Solution {
public:
    
    int find(int i , int buy , int cap , vector<int> prices , int n ,vector<vector<vector<int>>>&dp )
    {
        if(i == n) return 0 ;
        if(cap == 0) return 0 ;
        
        if(dp[i][buy][cap] != -1) return dp[i][buy][cap];
        long profit = 0 ;
        if(buy)
        {
            profit = max(-prices[i] + find(i+1 , 0 , cap , prices , n , dp) , 
                          0 + find(i+1 , 1 , cap , prices , n ,dp));
        }
        else {
            profit = max(prices[i] + find(i+1 , 1 , cap-1 , prices , n , dp),
                          0 + find(i+1 , 0 , cap , prices , n , dp));
        }
        
        return dp[i][buy][cap] = profit;
        
    }

    
    int maxProfit(vector<int>& prices) {
        
        // the purely recursive code will give TLE, so now go to memoisation
        int n = prices.size();
        // vector<vector<vector<int>>> dp(n+1 , vector<vector<int>>(2 , vector<int>(3 , -1)));
        // return find(0 , 1 , 2 , prices , n , dp);    // starting from 0th idx , having permission                                                       to buy, with capacity of 2
        
        //memoisation giving TLE, so now go to tabulation
        
         vector<vector<vector<int>>> dp(n+1 , vector<vector<int>>(2 , vector<int>(3 , 0)));
        
        for(int i=0 ; i<=n ; i++)
        {
            for(int buy = 0 ;buy<=1 ;buy++){
                dp[i][buy][0] = 0;
            }
        }
        for(int buy = 0 ;buy<=1 ;buy++){
            for(int cap = 0 ;cap<=2 ;cap++){
                dp[n][buy][cap] = 0;
            }
        }
        
        for(int i = n-1 ; i>=0 ; i--){
            for(int buy = 0 ; buy<=1 ; buy++){
                for(int cap = 1; cap <=2 ;cap++){
                      long profit = 0 ;
                        if(buy)
                        {
                            profit = max(-prices[i] + dp[i+1][0][cap], 
                                          0 + dp[i+1][1][cap]);
                        }
                        else {
                            profit = max(prices[i] + dp[i+1][1][cap-1],
                                          0 + dp[i+1][0][cap]);
                        }

                         dp[i][buy][cap] = profit;
                }
            }
        }
        
        
         return dp[0][1][2]; 
    }
};








