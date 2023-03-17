class Solution {
public:
    
         void find(vector<int>& candidates, int i , int target ,  vector<vector<int>>& ans , vector<int> temp)
     {
             if(target == 0){
                 ans.push_back(temp);
                 return ;
             }
             
       
// we will pick the elements while iterating on the array .... we r using this way as there are very conditions on picking up the array that .... no duplicated and all.
             
             
         for(int idx = i ; idx<candidates.size() ; idx++){
           
             if(idx>i && candidates[idx] == candidates[idx-1]) continue;
             if(candidates[idx] > target) break;
             temp.push_back(candidates[idx]);    
             find(candidates , idx+1 , target-candidates[idx] , ans , temp);
             temp.pop_back();         
         }
   
     }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> temp;
        vector<vector<int>> ans ;
        sort(candidates.begin() , candidates.end());
        find(candidates , 0 , target , ans , temp);
   
        
        return ans;
    }
};