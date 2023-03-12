class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int k = floor(n/3);
        vector<int> ans;
        
        map<int , int> m ;
        for(int i = 0 ;i<n ; i++){
            m[nums[i]]++;
        }
        
        for(auto x : m){
            if(x.second > k){
                ans.push_back(x.first);
            }
        }
        
        return ans;
        
        
        
        
//         sort(nums.begin() , nums.end());
//         int c = 0;
//         int a =0;
//         for(int i = 0 ;i<n ; i++){
//             if(nums[i] == nums[i+1]){
//                 c++;
//                 a = nums[i];
//                 continue;
//             }
//             if(c>=k){
//                 ans.push_back(a);
//                 c = 0;
//                 a = 0;
//             }else{
//                 c = 0;
//                 a = 0;
//             }
//         }
        
//         return ans;
    }
};