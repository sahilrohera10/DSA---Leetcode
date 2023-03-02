class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        // this prblm can be done using 2 approches 
        // 1st can be using hash map : finding the frequency of each element 
        // 2nd can be , sort the given array then find out whether ith and i+1 th element is same or not .
        
        // approch 1 : using hash map
        
//         map <int , int> mp;
//         vector<int> ans ;
//         int n = nums.size();
//         for(int i = 0;i<n ;i++){
//             mp[nums[i]]++;
//         }
        
//         for(auto x : mp){
//             if(x.second ==2 ){
//                 ans.push_back(x.first);
//             }
//         }
        
//         return ans ;
        
        //approch 2 : sorting the vector
        
        sort(nums.begin() , nums.end());
        
        vector<int> ans ;
        int n = nums.size();
        
        for(int i = 0 ; i< n-1 ; i++){
            if(nums[i] == nums[i+1]){
                ans.push_back(nums[i]);
            }
        }
        
        return ans ;
        
        
    }
};