class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        int n = score.size();
        int m = score[0].size();
        int max = INT_MIN;
        int j = 0 ;
        int row = 0;
        while(j<n){
            max = 0;
              for(int i = j ; i<n ; i++){
            if(score[i][k] > max){
                max = score[i][k];
                row = i ;
             }
           }
            
            swap(score[row] , score[j]);
            
            j++;
        }
        
      return score;
        
        
        
    }
};