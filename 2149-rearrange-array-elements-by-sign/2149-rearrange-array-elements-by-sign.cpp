class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
         int n = nums.size();
         vector<int> ans(n,0);
        
        int pos = 0 ;
        int neg = 1;
        
        for(int i = 0 ; i< n ; i++){
            if(nums[i]>0)
            {
                ans[pos] = nums[i];
                pos+=2;
            }
            else
            {
                ans[neg] = nums[i];
                neg+=2;
            }
        }
        
        return ans;
       
        
//         int i = 0;
     
//         while(i<n){
//           if(nums[i]>0){
//               positive.push_back(nums[i]);
//           }
//         }
//         i=0;
//         while(i<n){
//           if(nums[i]<0){
//               negative.push_back(nums[i]);
//           }
//         }
        
//         int j = 0;
//         int k = 0;
//         // nums[0] = positive[0];
//         for(int i = 0;i<n;i++){
//             if(i%2==0){
//                 nums[i] = positive[j];
//                 j++;
//             }else{
//                 nums[i] = negative[k];
//                 k++;
//             }
//         }

        
//         return nums;
        
        
        
    }
};