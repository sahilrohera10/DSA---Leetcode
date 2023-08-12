class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        // implementing it using cyclic sort 
        int n = nums.size() ;
        
        int i = 0 ;
        while(i<n){
            if(nums[i] == i+1){
                i++;
            }else{
                if(nums[nums[i]-1] != nums[i]){
                    swap(nums[i] , nums[nums[i]-1]);
                }else i++;
            }
        }
        
        vector<int> ans ;
        
        for(int i = 0 ;i<n; i++){
            if(nums[i] != i+1){
                ans.push_back(nums[i]);
                ans.push_back(i+1);
                break;
            }

        }
        
        return ans;
    }
};