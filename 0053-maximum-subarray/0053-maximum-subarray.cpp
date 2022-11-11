class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        //subarray is a contiguous part of an array such that the relative position is maintained
        
        
        //approach 1 brute-force (n^2)
//         int n = nums.size();
        
//         int i = 0 , j , max = INT_MIN , sum;
        
//         while(i<n){
//             j = i ;
//             sum = 0;
//             while(j<n){
//                 sum = sum + nums[j];
//                 if(sum>max){
//                     max = sum ;
//                 }
//                 j++;
//             }
//             i++;
//         }
        
//         return max;
        
        
        //approach 2 
        //IMPLEMENTATION OF KADEN'S ALGORITHM --> V.V.V.V.V.V IMP
        
        //INITIALLY  sum = 0  and maxi = arr[0];
        // STEP 1 -> sum = sum + arr[i]   0<=i<n
        // STEP 2 -> maxi - update --> maxi = max(maxi, sum); 
        // STEP 3 -> if(sum<0) sum = 0 ;  
        
        //AT LAST -> RETURN maxi (contains the sum of max subarray)
        
        int sum = 0;
        int maxi = nums[0];
        
        for(int i = 0 ;i < nums.size() ; i++){
            //step1
            sum = sum + nums[i] ;
            
            //step2
            maxi = max(maxi , sum);
            
            //step3
            if(sum < 0) sum = 0;
        }
        
        
        return maxi;
        
        
        
        
    }
};