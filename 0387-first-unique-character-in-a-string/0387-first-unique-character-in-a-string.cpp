class Solution {
public:
    int firstUniqChar(string s) {
        
        unordered_map<char , int> um;
        int size = s.length();
        for(int i = 0 ;i<size ; i++){
            um[s[i]]++;
        }
        
        for(int i = 0 ;i<size ; i++){
            if(um[s[i]] == 1){
                return i;
            }
        }
        
        return -1 ;
        
    }
};