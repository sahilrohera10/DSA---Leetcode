class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> p;
        int n = boxes.size();
        for(int i = 0 ;i<n ;i++){
            if(boxes[i] == '1') p.push_back(i);
        }
        
        vector<int> ans ;
        for(int i = 0 ; i< n ; i++){
            int c = 0 ;
          
                for(int j = 0 ;j<p.size() ; j++){
                    c = c +  abs(p[j]-i);
                }
                ans.push_back(c);
            
        }
        
        return ans;
    }
};