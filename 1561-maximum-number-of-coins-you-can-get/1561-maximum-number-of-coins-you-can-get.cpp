class Solution {
public:
    int maxCoins(vector<int>& piles) {
        // piles = [2,4,1,2,7,8]
        
        // make a map, map (index , pile);
        // we sort it piles = [1,2,2,4,7,8] ;
        
        // map<int , int> mp ;
        int n = piles.size();
//         for(int i =0 ; i<n ;i++){
//             mp[i] = piles[i];
//         }
        
        sort(piles.begin() , piles.end());
        
        int i = n-2;
        int c = 0 ;
        int j = 0 ;
        while(j<n/3){
            c = c + piles[i];
            i = i-2 ;
            j++;
        }
        
     return c ;
    }
};