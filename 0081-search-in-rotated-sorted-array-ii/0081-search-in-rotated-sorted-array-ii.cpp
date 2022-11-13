class Solution {
public:
    
        int binarySearch(vector<int>& nums, int target , int  s , int e){
        
         int n = nums.size();
       
        int m ;
        bool ans = false;
        while(e>=s){
            m = (s+e)/2;
            
            if(nums[m] == target){
                ans = true ;
                break ;
            }else if(nums[m]>target){
                e = m-1;
            }else{
                s = m +1;
            }
        }
        return ans;
        
        
    }
    
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int pivot = 0;
        
       
        
        for(int i = 0; i< n-1 ;i++){
            if(nums[i]<=nums[i+1]){
                continue;
            }
            pivot = i ;
            break;
        }
        
        bool a ;
        a = binarySearch(nums , target , 0 , pivot);
        
        if(!a){
            a = binarySearch(nums , target , pivot+1 , n-1);
        }
        
        return a;
    }
};