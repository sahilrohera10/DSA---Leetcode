class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        map<int , int> mp;
        
        int n = nums.size();
        
        for(auto x : nums)
        {
            mp[x*x]++;
        }
        int i = 0 ;
        for(auto x : mp)
        {
            int j = 0 ;
            while(j<x.second){
                nums[i] = x.first;
                i++;
                j++;
            }
        }
        
        return nums;
    }
};