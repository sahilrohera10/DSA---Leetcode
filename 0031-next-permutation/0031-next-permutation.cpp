class Solution {
public:

    
    void nextPermutation(vector<int>& nums) {
        
        next_permutation(nums.begin() , nums.end());
        
//         int n = nums.size();
        
//         int maxIdx = 0 ;
//         int max = INT_MIN;
        
//         for(int i = 0 ; i < n ; i++){
//             if(nums[i]>max) {
//                 max = nums[i];
//                 maxIdx = i ;
//             }
//         }
        
//         if(maxIdx == 0) swap(nums[0] , nums[n-1]);
//         else if(maxIdx > 0 && maxIdx < n-1){
            
//         }
//         else swap(nums[maxIdx] , nums[maxIdx-1]);
        
    }
};