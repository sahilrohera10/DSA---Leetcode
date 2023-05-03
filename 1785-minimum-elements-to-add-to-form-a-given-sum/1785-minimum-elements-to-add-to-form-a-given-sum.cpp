class Solution {
public:
    int minElements(vector<int>& nums, int limit, int goal) {
        long long sum = 0 ;
        for(int i = 0 ; i<nums.size() ; i++){
            sum = sum + nums[i];
        }
        
        long long diff = goal - sum ;
        
        diff = abs(diff);
        
        int n = diff/limit ;
        if(diff%limit > 0) n = n+1;
        
        return n ;
    }
};