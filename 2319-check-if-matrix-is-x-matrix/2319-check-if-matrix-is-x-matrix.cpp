class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        int s = 0;
        
       int i = 0 , j = 0;
        while(i<n && j<n){
            if(grid[i][j] == 0){
                return false;
            }
            s = s + grid[i][j];
            i++;
            j++;
        }
        
        i = 0 ; j = n-1 ;
        while(i<n && j>=0){
            if(grid[i][j] == 0){
                return false;
            }
            s = s + grid[i][j];
            i++;
            j--;
        }
        if(n%2 != 0){
            s = s - grid[n/2][n/2];
        }
       for(int i = 0 ;i < n ; i++){
           for(int j = 0; j< n ; j++){
               s = s - grid[i][j];
           }
       } 
        
        if(s == 0){
            return true;
        }
        
        return false;
        
        
    }
};