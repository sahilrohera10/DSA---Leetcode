class Solution {
public:
    
    vector<int> vec(vector<int>& g , int num) {
        vector<int> temp ;
        int n = g.size();
        int i = 0 ;
        int f = num ;
        while(f--){
            while(i<n){
                if(g[i] == num){
                    temp.push_back(i);
                    g[i]=0;
                    i++;
                    break ;
                }
                i++;
            }
         
        }
        
        return temp;
    }
    
    
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector <vector<int>> ans ;
        map <int , int> mp ;
        int n = groupSizes.size();
        
        //finding frequency of each unique element using map
        
        for(int i = 0 ;i<n ;i++){
            mp[groupSizes[i]]++;
        }
        vector<int> temp ;
        for(auto x : mp){
            // if(x.second <6){
            //     temp = vec(groupSizes , x.first , x.second);
            // ans.push_back(temp);
            // }
            // else {
                int b = x.second/x.first ;
                while(b--){
                temp = vec(groupSizes , x.first);
            ans.push_back(temp);

                }
            // }
            
        }
        
        return ans ;
        
    }
};