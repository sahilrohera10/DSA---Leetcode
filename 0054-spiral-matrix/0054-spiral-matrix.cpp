class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int col = matrix[0].size();
        vector<int> vect;
        
        int c = 0 ;
        int total = r*col;
        
        int startRow = 0 ;
        int startCol = 0 ;
        int endRow = r-1;
        int endCol = col-1;
        
        while(c<total){
            
            //print starting row
            for(int i = startCol ; c<total && i<=endCol ; i++){
                vect.push_back(matrix[startRow][i]);
                c++;
            }
            startRow++;
            
            //print ending Col
            for(int i = startRow ; c<total && i<=endRow ; i++){
                vect.push_back(matrix[i][endCol]);
                c++;
            }
            endCol--;
            
            //print ending row
            for(int i = endCol ; c<total && i>=startCol ; i--){
                vect.push_back(matrix[endRow][i]);
                c++;
            }
            endRow--;
            
            //printing starting Col
            for(int i = endRow ; c<total && i>=startRow ; i--){
                vect.push_back(matrix[i][startCol]);
                c++;
            }
            startCol++;
            
            
            
        }
        
        
        
//         while(c>0 || r>0){
            
//             while(j<c){
//                 vect.push_back(matrix[i][j]);
//                 j++;
//             }
//             j--;
//             i++;
            
//             while(i<r){
//                 vect.push_back(matrix[i][j]);
//                 i++;
//             }
//             i--;
//             j--;
//             while(j>=0){
//                 vect.push_back(matrix[i][j]);
//                 j--;
//             }
//             j++;
//             i--;
//             while(i>0){
//                 vect.push_back(matrix[i][j]);
//                 i--;
//             }
//             i++;
            
//             c = c - 2;
//             r = r - 2;
 
            
//         }
        
        return vect;
    }
};