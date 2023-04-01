class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<vector<int>> ans ;
        vector<int> temp ;
        
        sort(intervals.begin() , intervals.end());
        
        // return intervals ;
        
        for(int i = 0 ; i < n ; i++){
            if(i==n-1){
                ans.push_back(intervals[i]);
            }
            else if(intervals[i][1] >= intervals[i+1][0]){
                temp.push_back(intervals[i][0]);
                if(intervals[i][1] > intervals[i+1][1])
                    temp.push_back(intervals[i][1]);
                else temp.push_back(intervals[i+1][1]);
                // ans.push_back(temp);
                intervals[i+1] = temp ;
                temp.clear();
                // i++;
            }
            else{
                ans.push_back(intervals[i]);
            }
        }
        
        return ans ;
    }
};