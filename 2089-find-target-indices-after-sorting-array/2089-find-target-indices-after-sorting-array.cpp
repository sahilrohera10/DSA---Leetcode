class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin() , nums.end());
        vector<int> ans ;
        int i = 0;
        int j = nums.size()-1;
        
        if(nums.size() == 1 ){
           if(nums[0] == target){
               ans.push_back(0);
               goto final ;
           }
            else {
                goto final ;
            }
        }
        
        while(j>=i){
            if(i==j && nums[i] == target){
                ans.push_back(i);
               goto final ;
            }
            if(nums[i] == target){
                ans.push_back(i);
            }
            if(nums[j] == target){
                ans.push_back(j);
            }
            
            i++;
            j--;
        }
        
        final : sort(ans.begin() , ans.end());
              
        
        return ans ;
       
    }
};