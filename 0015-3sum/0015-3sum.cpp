class Solution {
public:
    

    
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp ;
        set<vector<int>> ans ;
        sort(nums.begin() , nums.end());
        vector<vector<int>> finalAns  ;
        
        int i = 0 , j = i+1 , k = n-1;
        
        sort(nums.begin() , nums.end());
        
        while(i<n){
            j = i+1;
            k = n-1;
            while(k>j){
                if(nums[i]+nums[j]+nums[k] == 0)
                {
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                    ans.insert(temp);
                    temp.clear();
                    j++;
                    k--;
                }
                else if(nums[i]+nums[j]+nums[k] > 0){
                    k--;
                }else{
                    j++;
                }
            }
            i++;
        }
        
    for(auto x : ans){
        finalAns.push_back(x);
    }

        return finalAns ;
    }
};