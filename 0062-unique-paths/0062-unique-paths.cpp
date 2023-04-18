class Solution {
public:
    int find(int i , int j , vector<vector<int>> & dp ) // bottom to up
    {
        //base case
        if(i == 0 && j == 0) return 1 ;
        if(i<0 || j<0) return 0 ;
        
        if(dp[i][j] != -1) return dp[i][j]; 
            
        int up = find(i-1 , j , dp);
        int left = find(i , j-1 , dp);
        
        return dp[i][j] = up + left ;
    }
    
//     int find2(int i , int j , int m , int n)
//     {
//         if(i == m && j == n) return 1 ;
//         if(i>m || j>n) return 0 ;
        
//         int right = find2(i , j+1 , m , n);
//         int down = find2(i+1 , j , m , n);
        
//         return right + down ;
//     }
    
    
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp( m , vector<int> (n , -1)) ;
       return find( m-1 , n-1 , dp ) ;    //bottom to up
        // now to optimise this will use memoisation
    
       // return find2(0 , 0 ,m-1 , n-1) ; //up to down
    }
};