class Solution {
public:
     void find(vector<int>& candidates, int i , int target ,  vector<vector<int>>& ans , vector<int> temp)
     {
         if(i==candidates.size()){
             if(target == 0){
                 ans.push_back(temp);
             }
             return ;
         }
         
         

         // pick
         if(candidates[i] <= target){
             temp.push_back(candidates[i]);    
             find(candidates , i , target-candidates[i] , ans , temp);
             temp.pop_back();
         }
           // dont pick
         find(candidates , i+1 , target , ans , temp);
         
          
     }
    
    
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        vector<vector<int>> ans ;
        find(candidates , 0 , target , ans , temp);
        
        return ans;
    }
};