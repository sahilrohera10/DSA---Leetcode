class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        
        vector<int> ans ;
        int n = queries.size() ;
        vector<int>::iterator it;
        vector<int> p ;
            for(int i =1 ;i <=m ; i++){
                p.push_back(i);
            }
       int j ;
        for(int i = 0;i<n ; i++){
            for(j = 0; j<m ;j++){
                if(queries[i] == p[j]){
                    ans.push_back(j);
                    break;
                }
            }
            it = p.begin()+j;
            p.erase(it);
            p.insert(p.begin(), queries[i]);      
        }
        
        return ans ;
        
    }
};