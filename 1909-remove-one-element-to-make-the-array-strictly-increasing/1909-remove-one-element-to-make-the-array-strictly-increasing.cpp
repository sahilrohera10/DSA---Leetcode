class Solution {
public:
   bool check(vector<int> nums)
{
       int n = nums.size();
   for(int i = 1 ;i < n ; i ++) {
        if(nums[i-1]<nums[i]){
            continue;
        }
        
       return false;
    }
       
       return true;
}

bool canBeIncreasing(vector<int>& nums)
    
{
    int n = nums.size();
    int curr , prev ;
    int i;
    for( i = 1 ;i < n ; i ++) {
        if(nums[i-1]<nums[i]){
            continue;
        }
        curr = i ;
        prev = i-1;
        break;
        
    }
    if(i==n){
        return true;
    }
    int no = nums[curr];
    nums.erase(nums.begin() + curr );
    
    if(check(nums)){
        return true;
    }else{
      
    nums.insert(nums.begin()+curr , no);
    
    nums.erase(nums.begin() + prev);  
        
        if(check(nums)){
            return true;
        }
    }
    
    return false;
    
    
    
    
    
    
    
//         int n = nums.size();
//         int c = 0;
//         bool ans ;
//         int idx;
//         for(int i = 0; i <n-1 ; i++){
//             if(nums[i] < nums[i+1]){
//                 continue;
//             }        
//             c++;
//             idx = i;
//         }    
    
//     if(c==0){
//         return true;
//     }

//  if(c==1){
//      // cout<<nums[nums.begin()+idx];
//    nums.erase(nums.begin()+idx);
//    ans =  finalCheck(nums);

//    return ans;

//  }

//         else{
//             return false;
//         }
    }
};