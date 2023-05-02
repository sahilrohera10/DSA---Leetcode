class Solution {
public:
 
    int arraySign(vector<int>& nums) {
       int countNeg = 0 ;
        for(int i = 0 ; i<nums.size() ; i++){
           if(nums[i]<0) countNeg++;
            else if(nums[i]==0) return 0;
        }
        
        if(countNeg%2==0) return 1;
        return -1;
        
       
    }
};