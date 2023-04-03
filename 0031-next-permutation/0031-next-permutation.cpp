class Solution {
public:

    
    void nextPermutation(vector<int>& nums) {
        //using inbuilt function (STL)
        
        // next_permutation(nums.begin() , nums.end());
        
        
        
        
        //using 2 pointers 
        
        int i=nums.size()-1,j=nums.size()-1;
        
        while(i && nums[i-1]>=nums[i]) i--;
        
        if(!i) return reverse(nums.begin(),nums.end());
        
        while(nums[i-1]>=nums[j]) j--;
        
        swap(nums[i-1],nums[j]);
        
        return reverse(nums.begin()+i,nums.end());
        
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