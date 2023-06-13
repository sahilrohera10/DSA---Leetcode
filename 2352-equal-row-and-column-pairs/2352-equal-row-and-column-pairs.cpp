class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        
        // int i = 0 ;
        // int j = 0 ;
        bool flag = true;
        int c = 0;
        
        for(int i = 0 ; i<n ;i++){
            for(int j = 0 ; j<n ; j++){
                for(int k = 0 ;k<n ;k++){
                    if(grid[i][k] != grid[k][j]){
                        flag = false;
                        break;
                    }
                }
                
                if(flag) c++;
                flag=true;
            }
        }
        return c;
   
    }
};