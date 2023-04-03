class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //brute force could be (Approach 1) 
        // take an another matrix
        // put 1st row of matrix at the last col of the another matrix 
        // goes on till the last row
        
// optimal approach :
    // since , somehow a col is becoming a row and vice-versa (transpose)
    // and after transpose .. we can see that the rows are in reverse              order , hence reverse each row .
    // so ,
        // step 1 -> transpose the given matrix 
        // step 2 -> reverse each row
        
        int n = matrix.size();
        
        //step 1 -> transpose
        for(int i = 0 ;i<n ; i++){
            for(int j = 0 ;j<i ; j++){
                    swap(matrix[i][j] , matrix[j][i]);
            }
        }
        
        //step 2 -> reversing the rows 
          for(int i = 0 ;i<n ; i++){
              reverse(matrix[i].begin() , matrix[i].end());
        }
        
        
    }
};