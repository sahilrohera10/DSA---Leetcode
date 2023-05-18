class Solution {
public:
    
    long long int solve(vector<vector<int>>& questions , int n , int i , vector<long long int>& dp){
        if(i>=n){
            return 0;
        }
        if(dp[i] != -1) return dp[i];
                    
        //skip it
        long long int skip = solve(questions , n , i+1 , dp);
         
        //solve it
        // sum = sum + questions[i][0];
        long long int take = questions[i][0] + solve(questions , n , i+questions[i][1]+1, dp);
        
         
        return dp[i] = max(skip , take);
    }
    
    
    
    
    long long mostPoints(vector<vector<int>>& questions) {
        int n = questions.size();

        vector<long long int> dp(n , -1);
        long long int ans = solve(questions , n , 0 , dp);
      
        return ans ;
    }
};