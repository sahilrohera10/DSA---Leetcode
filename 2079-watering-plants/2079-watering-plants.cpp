class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int n = plants.size();
      int ans = 0 ;
        int left = capacity;
        
         int i = 0;
         while(i<n){
             left = left - plants[i];
             ans++;
             
             
             if(i==n-1){
                 break;
             }else if(left-plants[i+1]>=0){
                i++;
                 continue;
             }
             
                 left = capacity;
             ans = ans+(i+1)*2;
                 i++;
            
         }
        
        return ans;
        
        
    }
};