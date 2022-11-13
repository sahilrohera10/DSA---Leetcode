class Solution {
public:
 

    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int , int> ans ;
        int n = nums.size();
        
        vector<int> a ;
        
        for(int i = 0 ; i<n ; i++){
            ans[nums[i]]++;
        }
        int max , idx;
     
        while(k--){
            max = 0;
            idx = 0;
           for(auto x : ans){
               if(x.second>max){
                   max = x.second;
                   idx = x.first;
               }
            }
            
            a.push_back(idx);
            ans.erase(idx);
          
        }
       
        return a;
        
    }
};