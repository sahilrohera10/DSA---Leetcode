class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
//         vector<int> ans;
//         int n = nums.size();
//         int  i =0 ;
//         int c =0 ;
//         int max = 0 ;
//        int tempMax = max;
//         for(int k = 0 ;k<n ;k++){
//             if(nums[k] == 1){
//                 max = 1;
//                 tempMax = max ;
//                 c=1;
//                 break;
//             }
//         }
//         if(c==0){
//             return 0;
//         }
//         while(i<n-1){
//             // cout<<"i=>"<<i<<" ";
//             if(nums[i] == nums[i+1] && nums[i] ==1){
//                 cout<<"i=>"<<nums[i+1]<<" ";
//                 max++;
//                 // if(max > tempMax){
//                 //     tempMax = max;
//                 // }
//                 i++;
//                 continue;
//             }
//             if(nums[i]==0){
//                 // cout<<"in 0";
//                 i++;
//                 continue;
//             }
//             // cout<<max<<" ";
            
//             if(ans.size()==0){
//                 ans.push_back(max);
//                 max=1;
//             }else if(max>=ans[0]){
//                ans.push_back(max);
//                 max=1;
//             }else{
//                 ans.insert(ans.begin(),max);
//                 max=1;
//             }
 
//             // if(max>=tempMax){
//             //         tempMax=max;
//             //         max=1;
//             //         i++;
//             //         continue;
//             //     }
//             i++;
           
//         }
//         int s=ans.size();
//         // cout<<s<<" "<<ans[s-1];
//         return ans[s-1];
        
        int maxi = 0 ; 
        int n = nums.size();
        int c = 0 ;
        
        for(int i = 0 ; i < n ; i++){
            if(nums[i] == 1){
                c++;
            }
            else
            {
                 maxi = max(maxi , c);
                 c = 0 ;
            }
        
        }
        

    
        
        maxi = max(maxi , c);
        
        return maxi ;
        
        
    }
};