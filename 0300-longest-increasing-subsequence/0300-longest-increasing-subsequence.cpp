class Solution {
public:
    
    int find(int i , int p , int n , int len , vector<int>& nums , vector<vector<int>> dp){
        if(i==n) return 0 ;       // we don't have any element left, so the len of LIS = 0
        
        if(dp[i][p+1] != -1) return dp[i][p+1];      //this p+1 is for coordinate change, since                                                         our indexing of p starts from -1 to n-1, so                                                       we have shifted it to 0 to n
        // not take
        len = 0 + find(i+1 , p , n , len , nums , dp);
        
        //take
        if(p==-1 || nums[i] > nums[p]){
            len = max(len , 1+find(i+1 ,i , n , len , nums , dp));
        }
        
        return dp[i][p+1] = len;
    }
    
    
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        // vector<vector<int>> dp(n , vector<int>(n+1 , -1));
        // // since memoisation leads to memory limit exceed, so do tabulation
        // return find(0 , -1 , n , -1e8 , nums , dp);
        
        // tabulation 
       
         // vector<vector<int>> dp(n+1 , vector<int>(n+1 , 0));
    
//         for(int i = n-1 ;i>=0 ; i--){
//             for(int p = i-1 ; p>=-1 ; p--){
//                  // not take
//                 int len = 0 + dp[i+1][p+1];

//                 //take
//                 if(p==-1 || nums[i] > nums[p]){
//                     len = max(len , 1+dp[i+1][i+1]);
//                 }

//                 dp[i][p+1] = len;
//             }
//         }
//          return dp[0][-1+1];
        
        
        // using binary search 
        
        vector<int> temp;
        temp.push_back(nums[0]);
        int len = 1;
        
        for(int i = 1 ; i<n ; i++)
        {
            if(nums[i] > temp.back()){
                temp.push_back(nums[i]);
                len++;
            }else{
                vector<int>::iterator idx ;
                idx = lower_bound(temp.begin() , temp.end() , nums[i]);
                temp[idx-temp.begin()] = nums[i];
            }
        }
        
        return len;
        
        
    }
};