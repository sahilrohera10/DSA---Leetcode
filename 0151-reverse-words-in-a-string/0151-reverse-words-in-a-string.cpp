class Solution {
public:
    
    // A quick way to split strings separated via spaces.
    void simple_tokenizer(string s , vector<string> &temp)
    {
        stringstream ss(s);
        string word;
        while (ss >> word) {
            temp.push_back(word);
        }
    }

    
    string reverseWords(string s) {
        vector<string> temp;
        string ans = "";
        simple_tokenizer(s , temp);
        
        reverse(temp.begin() , temp.end());
        
        int n = temp.size();
        for(int i = 0 ; i< n ;i++){
            if(i==0){
                ans = ans + temp[i];
            }else{
                ans = ans + " " + temp[i];
            }
        }
        
        return ans ;
        
    }
};