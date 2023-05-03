class Solution {
public:
    static  bool comparator(vector<int> a, vector<int> b) {
    return a[1] > b[1];
}
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin() , boxTypes.end() , comparator);
        int n = boxTypes.size();
        int m = boxTypes[0].size();
        int boxes = 0 ;
        int ans = 0 ;
        for(int i = 0 ; i<n ; i++){
           if(truckSize - boxTypes[i][0] >= 0){
               boxes = boxes + boxTypes[i][0];
               ans = ans + boxTypes[i][0] * boxTypes[i][1];
               truckSize = truckSize - boxTypes[i][0];
           }else{
               boxes = boxes + truckSize;
               ans = ans + truckSize * boxTypes[i][1];
               break;
           }
          
        }
        
        
        return ans ;
    }
};