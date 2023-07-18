class Solution {
public:

    int getMaximumGenerated(int n) {
        vector<int> dp(n+1 , 0);
        if(n==0) return dp[0];
        dp[1] = 1;

        for(int i=1 ; i<=n/2 ;i++){
           if(2<= 2*i && 2*i <=n) dp[i*2] = dp[i] ;
           if(2<= 2*i+1 && 2*i+1 <= n) dp[i*2 + 1] = dp[i] + dp[i+1];

        }
        sort(dp.begin() , dp.end());
        
        return dp[n];
    }
};