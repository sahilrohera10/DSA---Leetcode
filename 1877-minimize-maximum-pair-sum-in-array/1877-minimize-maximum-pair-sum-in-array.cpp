class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int n  = nums.size();
        int i = 0;
        int j = n-1 ;
        int max = 0 ;
        int sum ;
        while(i<j){
            sum = nums[i] + nums[j];
            if(sum>max){
                max = sum ;
            }
            
            i++;
            j--;
        }
        
        return max;
    }
};