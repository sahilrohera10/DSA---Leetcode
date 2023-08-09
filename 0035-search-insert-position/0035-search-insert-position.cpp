class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int s = 0 ;
        int e = n-1 ;
        
        while(e>=s)
        {
            int m = e - (e-s)/2;
            if(nums[m] == target) return m ;
            else if(nums[m] > target) e = m-1;
            else s = m+1;
                 
        }
        
        return e+1 ;
    }
};