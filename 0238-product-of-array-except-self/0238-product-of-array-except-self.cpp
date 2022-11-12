class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int p = 1 ; 
        int n = nums.size();
        vector<int> ans ;
         int prod ;
        int is0 = 0;
        int isOther = 0 ;
        
        for(int i = 0; i< n ; i++){
            if(nums[i] != 0){
                isOther = 1;
                p = p*nums[i];  
            }else{
                is0++;
            }
          
        }
        if(is0){
             int prod = 0 ;  
        }
     
        if(!isOther){
            p = 0;
        }
        if(is0<=1){
                 for(int i = 0 ;i< n ; i++){
            if(is0){
                 if(nums[i] != 0 ){
                ans.push_back(prod/nums[i]);   
            }
                else{
                    ans.push_back(p);
                }
            }
           
            else{
                ans.push_back(p/nums[i]);
            }
         
        }
        }else{
            for(int i = 0; i<n ; i++){
                ans.push_back(0);
            }
        }
   
        
        
        return ans ;
        
        
        
        
        
        
        
        
    }
};