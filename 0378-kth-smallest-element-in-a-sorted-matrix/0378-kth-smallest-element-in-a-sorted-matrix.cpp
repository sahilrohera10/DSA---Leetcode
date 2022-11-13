class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int row = matrix.size();
        int col = matrix[0].size();
        int a = 0 , ans = 0 ;
        map<int , int> m ;
          vector<int> finalAns;
        for(int i = 0 ;i< row ; i++){
            for(int j = 0 ;j<col ; j++){
                finalAns.push_back(matrix[i][j]);
            }
        }
        
        sort(finalAns.begin() , finalAns.end());
      
        // for(auto x : m)
        // {
        //     finalAns.push_back(x.first);
        //     // cout<<"x=> "<<x.first<<" ";
        // }
        // for(int i = 0 ;i<finalAns.size() ; i++){
        //     cout<<finalAns[i]<<" ";
        // }
        return finalAns[k-1];
    }
};