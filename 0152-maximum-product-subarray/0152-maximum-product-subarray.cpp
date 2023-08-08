class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int pref = 1 , suff = 1;
        
        int maxp = -1e8 , maxs = -1e8;
        
        for(int i = 0 ;i<n ; i++){
           
            
                pref = pref*nums[i];
                
                maxp = max(maxp , pref);
                if(pref == 0) pref = 1;
               
                suff = suff*nums[n-i-1];
                
                maxs = max(maxs , suff);
                if(suff==0) suff = 1;
            
        }
        
        return max(maxp , maxs);
        
    }
};