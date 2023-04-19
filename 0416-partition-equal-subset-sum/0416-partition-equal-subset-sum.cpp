class Solution {
public:
    
    bool find(int i , int target , vector<int>& nums , vector<vector<int>>&dp)
    {
        if(target == 0) return true ;
        if(i==0) return (nums[0] == target) ;
        
        if(dp[i][target] != -1) return dp[i][target];
        bool not_take = find(i-1 , target , nums , dp);
        bool take = false;
        
        if(target >= nums[i]) {
            take = find(i-1 , target-nums[i] , nums , dp);
        }
        
        return dp[i][target] = (take || not_take) ;

        
    }
    
    
    bool canPartition(vector<int>& nums) {
        int sum = 0 ;
        int n = nums.size();
        for(int i = 0 ; i< n ; i++){
            sum = sum + nums[i];
        }
        
        if(sum % 2) return false;
        
        int target = sum/2;
        
        vector<vector<int>> dp(n , vector<int> (target+1 , -1));

        return find(n-1 , target , nums , dp);
        
    }
};