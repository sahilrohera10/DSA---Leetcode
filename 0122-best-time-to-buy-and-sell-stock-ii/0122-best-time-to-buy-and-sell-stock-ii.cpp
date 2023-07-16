class Solution {
public:
    long long find(int i , int buy , int n  , vector<int> prices,vector<vector<int>> &dp){
        //base case
        if(i==n) return 0;
        
        if(dp[i][buy] != -1) return dp[i][buy];
        // recursive 
        long profit = 0;
        if(buy){
            profit = max(-prices[i] + find(i+1,0 ,n , prices , dp), 
                          0 + find(i+1 , 1, n , prices ,dp));
        }
        else {
            profit = max(prices[i] + find(i+1 , 1 , n  , prices , dp),
                          0 + find(i+1 , 0, n  , prices , dp));
        }
        
        return dp[i][buy] = profit;
        
    }
    int maxProfit(vector<int>& prices) {
        
        // recursively 
        
        
        // long profit = 0 ;
        int n = prices.size();
        // return  find(0 , 1 , n , profit , prices);
        
        // DP approach- Memoisation (Memory time exceed)
        
//         vector<vector<int>> dp(n+1 , vector<int>(2,-1));
        
//         return find(0 , 1 , n  , prices , dp);
        
        //tabulation
         vector<vector<long>> dp(n+1 , vector<long>(2,0));
        
        dp[n][0] = 0;
        dp[n][1] = 0;
        
        for(int i = n-1 ; i>=0 ; i--){
            for(int buy = 0 ; buy<=1 ; buy++){
                long profit = 0;
                 if(buy){
                    profit = max(-prices[i] + dp[i+1][0] , 0 + dp[i+1][1]);
                }
                else {
                    profit = max(prices[i] + dp[i+1][1],
                                  0 + dp[i+1][0]);
                }

                 dp[i][buy] = profit;
            }
        }
        
        return dp[0][1];
        
        
        
//             int n = prices.size();
        
//         int b = 0;
//         int s = 0;
//         int profit = 0;
        
//         int i = 1 ;
//         while(i<n){
//           if(prices[i] < prices[b]){
//               b=i;
//               s=i;
//           }
//             int j = b;
//             bool flag = false;
//             while(j<n-1 && prices[j] <= prices[j+1]){
//                 s = j+1;
//                 j++;
//                 flag = true;
//             }
//             profit = profit + prices[s]-prices[b];
//             cout<<profit<<" ";
//             if(flag && j<n-1){
//                 s=j+1;
//                 b = s ;
//                }
//             else if(!flag){
//             b = j+1;
//             s = j+1;
//             }else if(flag && j==n-1) break;
//             i = s;
//             if(s==n-1) break;
//         } 
//         return profit;
    }
};