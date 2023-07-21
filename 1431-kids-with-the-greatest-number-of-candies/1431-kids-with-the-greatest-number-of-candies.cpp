class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi = -1e8;
        
        int n = candies.size();
        for(auto x : candies){
            maxi = max(maxi , x);
        }
        vector<bool> ans;
        for(int i = 0 ;i< n ;i++){
            if(candies[i] + extraCandies >= maxi) ans.push_back(true);
            else ans.push_back(false);
        }
        
        return ans;
    }
};