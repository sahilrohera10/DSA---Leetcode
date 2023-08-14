class Solution {
public:
    
    bool find(vector<int>& nums , int x , int n , vector<int>& dp){
        if(x == n) return true;
        
        if(x>n) return false;
        
        if(dp[x] != -1) return dp[x];
   
        for(int i = 1 ; i<=nums[x] ;i++){
            if(find(nums , x+i , n , dp) == true) return dp[x] = true;
        }
        
        return dp[x] = false;
        
    }
    
    
    
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n+1 , -1);
        return find(nums , 0 , n-1 , dp);
    }
};