class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        
        int ans = 0;
        int n = nums.size();
        
        for(int i =0 ; i<n-1 ; i++){
            if(nums[i] == nums[i+1]){
                ans = nums[i];
                break;
            }
        }
        
        
        return ans;
    }
};