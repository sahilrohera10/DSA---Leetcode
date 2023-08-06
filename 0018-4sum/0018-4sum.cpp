class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin() , nums.end());
        set<vector<int>>tempans;
        for(int i = 0 ;i<n ; i++)
        {
            for(int j = i+1 ; j<n ; j++){
                int k = j+1 ;
                int l = n-1;
                while(l>k){
                    vector<int> temp;
                    if(((long long)nums[i] + (long long)nums[j] + (long long)nums[k] + (long long)nums[l]) == target){
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[k]);
                        temp.push_back(nums[l]);
                        tempans.insert(temp);
                        l--;
                        k++;
                    }else if(((long long)nums[i] + (long long)nums[j] + (long long)nums[k] + (long long)nums[l]) > target) l--;
                    else k++;
                }
            }
        }
        
        for(auto x : tempans){
            ans.push_back(x);
        }
        
        return ans;
    }
};