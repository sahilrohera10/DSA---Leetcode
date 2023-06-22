class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int n = pushed.size();
        int m = popped.size();
        
        int i = 0 ;
        int j = 0 ;
    
        stack<int> s;
        // s.push(pushed[0]);
        while(i<n){
            if(!s.empty() && s.top() != popped[j]){
                s.push(pushed[i]);
                i++;
            }else if(s.empty()) {
                s.push(pushed[i]);
                i++;
            }
            
            else{
                j++;
                s.pop();
             }
        }
        if(i==n){
            while(j<m){
                if(s.top() == popped[j]){
                    s.pop();
                }else return false;
                
                j++;
            }
        }
        return true;
    }
};