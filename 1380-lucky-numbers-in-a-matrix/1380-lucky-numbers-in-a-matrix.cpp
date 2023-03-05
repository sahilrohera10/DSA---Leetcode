class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int min;
        int max = 0;
        int idx = 0;
        vector<int> ans ;
        for(int i = 0; i< m ;i++){
            min = INT_MAX; 
            for(int j = 0 ;j<n ; j++){
                if(matrix[i][j] <= min){
                    min = matrix[i][j];
                    idx = j;
                }
            }
            
             max = matrix[i][idx];
             int k = 0 ;
             while(k<m){
                 if(matrix[k][idx]>max){
                     max = matrix[k][idx];
                 }
                 k++;
             }
            
            if(max == min){
               ans.push_back(min); 
            }
            
        }
        
        return ans;
    }
};