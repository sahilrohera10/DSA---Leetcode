class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
//        int n =nums.size();
//         vector<int> ans ;
//         if(n==0){
//             ans.push_back(-1);
//             ans.push_back(-1);
//             return ans;
//         }
         
//         int e = n-1;
//         int s = 0 ;
//          while(e>=s){
//              int m = (s+e)/2;
//         if(nums[m]==target){
//             int i = m-1 ;
//             int j = m+1;
//             int temp ;
//             int temp2 ;
//             if(nums[i] == nums[m]){
//                    while(nums[i] == nums[m]){
//                  i--;
//                temp = i;
//             }
//             if(temp ==i){
//                  ans.push_back(temp+1);
//              }
//             else if(i == m-1){
//                  ans.push_back(m);
//             }
//             }
         
//          else if(nums[m] == nums[j])   {
//              while(nums[m] == nums[j]){
//                  j++;
//                temp2 = j;
//             }
//             if(temp == j){
//                  ans.push_back(temp2-1);
//              }else if(j==m+1){
//                 ans.push_back(m);
//             }
//          }
            
               
//         }
             
            
//             else if(nums[m]>target){
                
//                 e = m-1;
//                 m = (s+e)/2;
//                  int i = m-1 ;
//             int j = m+1;
//             int temp ;
//             int temp2 ;
//             if(nums[i] == nums[m]){
//                    while(nums[i] == nums[m]){
//                  i--;
//                temp = i;
//             }
//             if(temp ==i){
//                  ans.push_back(temp+1);
//              }
//             else if(i == m-1){
//                  ans.push_back(m);
//             }
//             }
         
//          else if(nums[m] == nums[j])   {
//              while(nums[m] == nums[j]){
//                  j++;
//                temp2 = j;
//             }
//             if(temp == j){
//                  ans.push_back(temp2-1);
//              }else if(j==m+1){
//                 ans.push_back(m);
//             }
//          }
            
        
//       }
             
//              else{
//                  s = m+ 1;
//                  m = (s+e)/2;
//                   int i = m-1 ;
//             int j = m+1;
//             int temp ;
//             int temp2 ;
//             if(nums[i] == nums[m]){
//                    while(nums[i] == nums[m]){
//                  i--;
//                temp = i;
//             }
//             if(temp ==i){
//                  ans.push_back(temp+1);
//              }
//             else if(i == m-1){
//                  ans.push_back(m);
//             }
//             }
         
//          else if(nums[m] == nums[j])   {
//              while(nums[m] == nums[j]){
//                  j++;
//                temp2 = j;
//             }
//             if(temp == j){
//                  ans.push_back(temp2-1);
//              }else if(j==m+1){
//                 ans.push_back(m);
//             }
//          }
            
                 
                 
//             }
   
//     }
//         if(ans.size()==0){
//             ans.push_back(-1);
//              ans.push_back(-1);
//         }
        
//         return ans;
        
        int n = nums.size();
        vector<int> ans ;
        int start = -1 , end = -1;
        int  i = 0;
        
        for(int k = 0 ; k < n ; k ++){
            if(nums[k] != target){
               continue;
            }else{
                start = k;
                break;
            }
        }
        
          for(int k = n-1 ; k >=0 ; k --){
            if(nums[k] != target){
               continue;
            }else{
                end = k;
                break;
            }
        }
        

        
        ans.push_back(start);
        ans.push_back(end);
        
        return ans;
        
    }
        
};