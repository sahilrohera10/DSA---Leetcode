class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int t = 0 ;
        int sum = 0;
        
        for(int i = 0 ;i< n ; i++){
            sum = sum+nums[i];
            if(nums[i] == 2) t++;
        }
        
        int o = sum-t*2;
        int z = n-o-t;
        
        for(int i = 0 ;i<n ;i++){
            if(i<z){
                nums[i] = 0 ;
            }else if(i<z+o){
                nums[i] = 1;
            }else if(i<z+o+t) nums[i] = 2 ;
        }
    }
};