class Solution {
public:
    
    bool search(string str , vector<char> row ){
        int s = str.size();
        int n = row.size();
        int j = 0 ;
        int a;
        bool ans = true;
        for(int i = 0 ; i<s ; i++){
            a = 0;
            for(j = 0 ;j<n ; j++){
                // cout<<str.at(i)<<" "<<row[j];
                if(str.at(i) == row[j])
                {
                    a= 1;
                    break;      
                }
            }
            if(!a){
                ans = false;
                break;
            }    
        }
        
        return ans ;
    }
    
    
    
    
    vector<string> findWords(vector<string>& words) {
        
        int n = words.size();
        vector<string> ans;
        
        vector<char> row1 = {'q', 'Q','w','W','e','E','r','R','t','T','y','Y','u','U', 'i','I','o','O','p','P'};
        
        vector<char> row2 = {'a', 'A','s','S','d','D','f','F','g','G','h','H','j','J', 'k','K','l','L'};
        
        vector<char> row3 = {'z', 'Z','x','X','c','C','v','V','b','B','n','N','m','M'};
        
        for(int i = 0 ;i < n ; i++)
        {
            for(int j = 0 ; j<words[i].size() ; j++){
              if(search(words[i] , row1)){
                  ans.push_back(words[i]);
                  break;
              }else if(search(words[i] , row2)){
                  ans.push_back(words[i]);
                  break;
              }else if(search(words[i] , row3)){
                  ans.push_back(words[i]);
                  break;
              }
            }
        }
        
        return ans ;
        
    }
};