class Solution {
public:
    int binarySearch(vector<int>& nums, int target , int  s , int e){
        
         int n = nums.size();
        // int s = 0; 
        // int e = n-1;
        int m , ans = -1;
        while(e>=s){
            m = (s+e)/2;
            
            if(nums[m] == target){
                ans = m ;
                break ;
            }else if(nums[m]>target){
                e = m-1;
            }else{
                s = m +1;
            }
        }
        return ans;
        
        
        
        
    }
    
    
    int search(vector<int>& nums, int target) {
        
        //FIRST WE NEED TO FIND THE PIVOT INDEX AND MAKE A COPY OF THE NUMS IN WHICH THE ELEMENTS ARE   STORED IN A SORTED MANNAR
        
        int n = nums.size();
        int pivot = 0;
        
       
        
        for(int i = 0; i< n-1 ;i++){
            if(nums[i]<nums[i+1]){
                continue;
            }
            pivot = i ;
            break;
        }
        
        int a ;
        a = binarySearch(nums , target , 0 , pivot);
        
        if(a==-1){
            a = binarySearch(nums , target , pivot+1 , n-1);
        }
        
        return a;
        
        // return pivot ;
          
        
        //APPLY BINARY SEARCH AFTER SORTING THE ARRAY
       

    }
};