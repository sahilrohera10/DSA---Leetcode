class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        vector<vector<int>> ans;
        int n = grid.size();
        
        int m = n-2;
        
        vector<int> v;
        
   
        int max;
        
        for(int i = 0; i<m ; i++){
            for(int j = 0 ; j<m ; j++){
                max = 0;
                for(int k = i ; k<i+3 ; k++){
                    for(int l = j ; l<j+3 ; l++){
                        if(grid[k][l] > max){
                            max = grid[k][l];
                        }
                    }
                }
                // cout<<"max => " << max << " ";
                v.push_back(max);
            }
        }

        int a = 0 ;
        vector<int> temp ;
      for(int i = 0;i<m ; i++){
          for(int j = 0 ; j<m ; j++){
              temp.push_back(v[a]);
              a++;
          }
          ans.push_back(temp);
          temp.clear();
      } 
        
        return ans ;
      
    }
};