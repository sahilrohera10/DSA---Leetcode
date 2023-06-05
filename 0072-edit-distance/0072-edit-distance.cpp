class Solution {
public:
    
    int find(int i , int j , string w1 , string w2 , vector<vector<int>>& dp)
    {
        //base case
        if(i<0) return j+1;
        if(j<0) return i+1;
        
        
        if(dp[i][j] != -1) return dp[i][j];
        
        //recursive case
        if(w1[i] == w2[j]) return 0 + find(i-1 , j-1, w1,w2, dp);
        
        int insert = 1+find(i,j-1,w1,w2,dp);
        int remove = 1+find(i-1,j,w1,w2,dp);
        int replace = 1+find(i-1,j-1,w1,w2,dp);
        
        return dp[i][j] = min(insert , min(remove,replace));
    }
    
    
    
    int minDistance(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        
        // optimising with memoization
        vector<vector<int>> dp(n , vector<int>(m , -1));
        
        int ans = find(n-1,m-1 , word1, word2, dp);
        
        return ans;
    }
};