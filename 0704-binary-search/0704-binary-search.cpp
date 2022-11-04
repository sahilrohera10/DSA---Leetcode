class Solution {
public:
    int binary(vector<int> nums , int t , int s , int e){
        if(s>e){
            return -1;
        }
        
        int m = (e+s)/2;
        if(nums[m]==t){
            return m;
        }
        else if(nums[m]>t){
          return  binary(nums , t , s , m-1);
        }else{
           return binary(nums , t , m+1 , e);
        }
        
        // return -1;
    }
    int search(vector<int>& nums, int target) {
        
        //iterative approach
        
       // int n = nums.size();
       //  int s =0 ;
       //  int e = n-1;
       //  int m = -1 ;
       //  int ans = -1;
       //  while(e>=s){
       //      m = s + (e-s)/2 ;
       //      if(nums[m]==target){
       //          return m;
       //      }else if(nums[m]>target){
       //          e = m-1;
       //          continue;
       //      }else {
       //          s = m+1;
       //          continue;
       //      }
       //  }
       //  return ans ;
        
   
        int n = nums.size();
        int s = 0;
        int e = n-1;
        
        int ans = binary(nums , target , s ,e);
        
        return ans;
         
    }
};