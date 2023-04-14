class Solution {
public:
    
    int find(vector<int> nums , int s , int n , vector<int>& dp){
        if(n==s) return nums[s];
        if(n<s) return 0;
        if(dp[n] != -1) return dp[n];
        int pick = nums[n] + find(nums ,s ,n-2 , dp);
        int nonpick = 0 + find(nums , s , n-1 , dp);
        
        return dp[n] = max(pick , nonpick);    
        
    }
    
    
    
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n+1 , -1);
        if(n>1){
        int ans1 = find(nums , 0 , n-2 , dp);
        
            for(int i = 0 ; i<=n ; i++) dp[i] = -1 ;
        int ans2 = find(nums, 1 , n-1 , dp);
        
        return max(ans1 , ans2);
        }else return nums[0];
    }
};