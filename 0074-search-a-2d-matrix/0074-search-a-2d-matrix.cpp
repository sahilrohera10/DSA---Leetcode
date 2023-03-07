class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        //BEST APPROACH : Binary search on Matrix
        
        int m = matrix.size();
        int n = matrix[0].size();
        int s = 0 ;
        int e = m*n  -1;
        int mid = 0 , element = 0 ;
        while(e>=s){
            mid = (s + e)/2;
        
            element = matrix[mid/n][mid%n];
            
            if(element == target){
                return true;
            }else if(element > target){
                e = mid-1;
            }else{
                s = mid + 1;
            }
        }
        
        return false;
        
        //1st Approach
//         vector<int> vect;
//         int m = matrix.size();
//         int n = matrix[0].size();
        
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
        
        
        //2nd Approach
        
        //       for(int i = 0 ;i<m ; i++){
        //     for(int j = 0 ; j < n ; j++){
        //        if (matrix[i][j] == target){
        //            return true;
        //        }
        //     }}
        // return false;
    }
};