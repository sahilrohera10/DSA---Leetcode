class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        vector <int> leftSum ;
        vector <int> rightSum ;
        vector <int> answer;
        
        int n = nums.size();
        int lSum = 0 ;
        int rSum = 0;
        leftSum.push_back(lSum);
        
        for (int i = 0 ; i<n ; i++){
            rSum = rSum+nums[i];
        }
        cout<<rSum ;
        
        for (int i = 0;i<n-1 ; i++){
            lSum = lSum + nums[i];
            leftSum.push_back(lSum);

        }
        
        // cout<<leftSum[n-1];
         for (int i = 0;i<n ; i++){
            rSum = rSum - nums[i];
                         rightSum.push_back(rSum);

        }
        rightSum.push_back(0);
        int a ;
        for(int i = 0 ;i<n ;i++){
            a = abs((leftSum[i] - rightSum[i]));
            answer.push_back(a);
        }
        
        return answer;
        
        
    }
};