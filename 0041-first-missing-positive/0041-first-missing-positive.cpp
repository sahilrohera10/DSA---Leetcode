class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        int n = nums.size();
       sort(nums.begin() , nums.end());

       int i = 1 ;
       int j = 0 ;

       while(j<n){
           if(j>0 && nums[j] == nums[j-1]){
               j++;
               continue;
           }
           if(nums[j] <= 0)
             j++;  

           else{
               if(nums[j] == i){

                   i++;
                   j++;

               }else {

                    return i;
               }

           }
       }

       return i;
    }
};