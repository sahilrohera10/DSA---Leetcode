class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0 ;
        int n = nums.size();
        int sum2 = 0 ;
        for(int i = 0 ;i<=n ; i++){
            sum = sum + i ;
            if(i!=n) sum2 = sum2 + nums[i];
        }

        
        return sum-sum2;
    }
};