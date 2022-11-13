class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int ans = 0 ;
        
        if(n==1){
            return nums[0];
        }
        for(int i =0 ; i< n ; i+=2){
            if(nums[i] != nums[i+1]){
                ans = nums[i];
                break;
            }
        }
        
        return ans;
    }
};