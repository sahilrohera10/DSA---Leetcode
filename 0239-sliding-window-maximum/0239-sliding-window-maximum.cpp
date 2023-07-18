class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int i = 0 ;
        int j = 0 ;
        int n = nums.size();
        int maxi = -1e8;
        deque<int> dq;
        vector<int> ans ;
        
        while(j<n){
           if(dq.size() != 0 && nums[j] > dq.back()){
               while(dq.size() != 0 && dq.back()<nums[j]) 
               dq.pop_back();
            }
           dq.push_back(nums[j]);

            if(j-i+1 < k) {
                j++;
            } else if(j-i+1 == k){
                ans.push_back(dq.front());

                if(nums[i] == dq.front()) dq.pop_front();
                i++;
                j++;
            }
        }
        
        return ans;
    }
};