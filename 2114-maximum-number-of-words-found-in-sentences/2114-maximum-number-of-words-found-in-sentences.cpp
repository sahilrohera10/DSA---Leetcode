class Solution {
public:
    
    int countWords(string s)
    {
        int c =0 ;
        int i = 0;
        int size = s.size();
        while(i<size)
        {
            if(i==size-1) c++;
            if(s[i]==' ') c++;
            
            i++;
        }
        return c;
    }
    
    
    int mostWordsFound(vector<string>& sentences) {
        int n = sentences.size();
        
        int i = 0 ;
        int maxi = INT_MIN;
        while(i<n){
            int c = countWords(sentences[i]);
            maxi = max(c,maxi);
            
            i++;
        }
        
        return maxi ;
    }
};