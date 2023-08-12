class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        // cyclic sort 
        
        vector<int> ans;
        
        int n = nums.size();
        
        int i = 0 ;
        while(i<n){
            if(nums[i] == i+1){
                i++;
            }else {
                if(nums[nums[i]-1] != nums[i]){
                    swap(nums[i] , nums[nums[i]-1]);
                }else i++;
            }
        }
        
        
        for(int i = 1 ;i<=n ;i++){
            
            if(nums[i-1] != i) ans.push_back(i);
        }
        
        return ans;
        
        
    }
};