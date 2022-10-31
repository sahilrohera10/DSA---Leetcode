class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
        priority_queue<int , vector<int>, greater<int>> minHeap;
        vector<int> ans ;
        map<int , int> m;
        
        for(int i = 0;i<mat.size();i++){
            int count = 0;
            for (int j =0 ;j<mat[0].size();j++){
                if(mat[i][j] == 1)
                    count++;
                 
            }
            minHeap.push(count);
            m[i]=count;
        }
        
        int min;
        for(int i =0 ;i<k;i++){
            min = minHeap.top();
            for(auto x : m){
                if(x.second == min){
                    // cout<<"second: "<<x.second<<" first: "<<x.first<<endl;
                    ans.push_back(x.first);
                    m.erase(x.first);
                    break;
                }
            }
            minHeap.pop();
        }
        
        
        
        return ans;
        
    }
};