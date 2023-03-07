class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // vector<int> vect;
        int m = matrix.size();
        int n = matrix[0].size();
        
//         for(int i = 0 ;i<m ; i++){
//             for(int j = 0 ; j < n ; j++){
//                 vect.push_back(matrix[i][j]);
//             }}
        
//         int size = vect.size();
//         int s = 0 ;
//         int e = size-1;
//         int mid = 0;
//         while(e>=s){
//             mid = (e+s)/2;
//             if(vect[mid] == target){
//                 return true;
//             }else if(vect[mid] > target){
//                 e = mid-1;
//             }
//             else{
//                 s = mid + 1;
//             }
//         }
        
//         return false;
        
              for(int i = 0 ;i<m ; i++){
            for(int j = 0 ; j < n ; j++){
               if (matrix[i][j] == target){
                   return true;
               }
            }}
        return false;
    }
};