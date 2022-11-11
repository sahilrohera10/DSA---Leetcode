class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int n = nums.size();
        int max = INT_MIN;
        int ans ;
        
        if(n==1){
            return 0;
        }
        
        for(int i = 0; i <n ; i++){
                            if(i==0){
                                if(nums[i]>nums[i+1]){
                                  
                                    if(nums[i]>max)
                                      {  max = nums[i]; 
                                    ans = i ;}
                                }
                            }
         
            
                            else if(i==n-1){
                                  if(nums[i]>nums[i-1]){
                                      
                                    if(nums[i]>max)
                                       { max = nums[i]; 
                                      ans = i ;}
                                }
                            }
                            else{
                                   if(nums[i]>nums[i+1] && nums[i]>nums[i-1]){
                                      if(nums[i]>max)
                                        {  max = nums[i];
                                       ans = i ;}
                                     }

                            }
    
         
        }
        
        return ans; 
    }
};