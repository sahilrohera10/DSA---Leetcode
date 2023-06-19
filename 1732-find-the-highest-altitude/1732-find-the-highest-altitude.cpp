class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int a = 0;
        int maxi = -1e8;
        for(int i = 0 ;i<n; i++)
        {
            int d = a + gain[i];
            maxi = max(maxi , d);
            a = d;
        }
        
        return max(maxi,0);
    }
};