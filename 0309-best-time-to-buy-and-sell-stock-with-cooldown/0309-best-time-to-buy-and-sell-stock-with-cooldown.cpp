class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
          //tabulation - same code as of buy&sell stock II, with one condition that , we can not buy just after the sell, so we jump to i+2 directly to next buy instead of i+1
        
        int n = prices.size();
         vector<vector<long>> dp(n+2 , vector<long>(2,0));

        for(int i = n-1 ; i>=0 ; i--){
            for(int buy = 0 ; buy<=1 ; buy++){
                long profit = 0;
                 if(buy){
                    profit = max(-prices[i] + dp[i+1][0] , 0 + dp[i+1][1]);
                }
                else {
                    profit = max(prices[i] + dp[i+2][1],          // here is the only change
                                  0 + dp[i+1][0]);
                }

                 dp[i][buy] = profit;
            }
        }
        
        return dp[0][1];
    }
};