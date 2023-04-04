class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0 ;
        int n = chars.size();
        int j = 0 ;
        int ansIdx = 0 ;
        
        while(i<n){
            
            j = i+1 ;
            
            while(j<n && chars[i] == chars[j]){
                j++;
            }
            
            chars[ansIdx++] = chars[i];
            
            
            int count = j - i;
            
            if(count > 1)
            {
               string ch = to_string(count);
                for(char c : ch)
                    chars[ansIdx++] = c ;
            }
            
            i = j ;
        }
        
        return ansIdx ;
    }
};