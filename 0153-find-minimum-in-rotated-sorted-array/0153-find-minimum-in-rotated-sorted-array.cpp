class Solution {
public:
    int findMin(vector<int>& nums) {
        // sort(nums.begin() , nums.end());
        int pivot = 0 ;
        int n = nums.size();
        
        for(int i = 0 ;i< n-1 ; i++){
            if(nums[i]>nums[i+1])
            {
                pivot = i+1;
                break;
            }
        }
        
        
        return nums[pivot];
    }
};