class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n = heights.size();
        vector<int> vect(n);
        
        for(int i = 0; i<n ;i++){
            vect[i] = heights[i];
        }
        
        sort(vect.begin() , vect.end());
        
        int i = 0;
        int c = 0;
        while(i<n){
            if(vect[i] != heights[i]){
                c++;
            }
            
            i++;
        }
        
        return c;
    }
};