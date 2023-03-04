class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        vector<vector<int>> vect;
        
        int n = mat.size();
        
        vector<int> temp ;
        for(int i = 0 ;i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                temp.push_back(0);
            }
            vect.push_back(temp);
            temp.clear();
        }
        
        int i = 0 ;
        int j = 0 ;
        int sum = 0 ;
        while(i != n && j != n){
            sum = sum + mat[i][j];
            vect[i][j] = 1;
            i++;
            j++;
        }
        
        i = 0 ;
        j = n-1;
        
        while(i != n && j>=0){
            if(vect[i][j] == 0){
              sum = sum + mat[i][j]; 
            }   
            i++;
            j--;
        }
        
        return sum ;
        
        
    }
};