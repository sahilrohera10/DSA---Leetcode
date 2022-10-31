class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        priority_queue<int> pq;
        
        int n = nums.size();
        
        for(int i = 0; i<n ;i++){
            pq.push(nums[i]);
        }
        
        int max1 = pq.top();
        pq.pop();
        int max2 = pq.top();
        
        int ans = (max1-1)*(max2-1);
        
        return ans;
        
    }
};