class Solution {
public:
    
    int find(int n , vector<int> nums , vector<int>& dp)
    {
        if(n==0) return nums[n];
        if(n<0) return 0;
        
        if(dp[n] != -1) return dp[n]; 
        
        int pick = nums[n] + find(n-2 , nums , dp);  //n-2 bcz we cant pick adjacent                                                 element
        int notpick = 0 + find(n-1 , nums , dp);
        
        return dp[n] = max(pick , notpick);
        
    }
    
    
    
    int rob(vector<int>& nums) {
        // basically we have to return the max sum of subsequence which doesn't            include the adjacent elements
        
        // to find subsequences , we should follow pick and not-pick approach
        int n = nums.size();
        vector<int> dp(n+1 , -1);
        return find(n-1 , nums , dp); // so simple recursion is giving TLE , hence we need to optimise it using memoisation
        
        
    
    }
};