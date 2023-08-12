class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        int n = nums.size();
      int i = 0 ;
        while(i<n){
            if(nums[i] > 0 && nums[i] != i+1 && nums[i] < n && nums[nums[i]-1] != nums[i]){
                swap(nums[i] , nums[nums[i]-1]);
            }else i++;
        }
        
        for(int i = 1 ; i<=n ;i++){
            if(nums[i-1] != i) return i;
        }
        
        return n+1;
    }
};


















////////////// Brute Force /////////////

// class Solution {
// public:
//     int firstMissingPositive(vector<int>& nums) {
        
//         int n = nums.size();(
     

//        int i = 1 ;
//        int j = 0 ;

//        while(j<n){
//            if(j>0 && nums[j] == nums[j-1]){
//                j++;
//                continue;
//            }
//            if(nums[j] <= 0)
//              j++;  

//            else{
//                if(nums[j] == i){

//                    i++;
//                    j++;

//                }else {

//                     return i;
//                }

//            }
//        }

//        return i;
//     }
// };