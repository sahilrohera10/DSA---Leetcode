class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        map<int , int> m;
        int n = candyType.size();
        
        for(int i = 0 ;i<n ; i++){
            m[candyType[i]]++;
        }
        
        int c = 0 ;
        
        for(auto x : m){
            c++;
            if(c == n/2) break;
        }
          return c ;  
    }
};