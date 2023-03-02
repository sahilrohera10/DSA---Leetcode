class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        vector<int> vect(n , 0) ;
        
        int i = 0 ;
        int j = n-1 ;
        int k = 0;
        while(k<n){
            if(nums[k]%2 != 0){
                vect[j] = nums[k] ;
                j--;
            }else{
                vect[i] = nums[k] ;
                i++;
            }
            
            k++;
        }
        
        return vect;
        
    }
};