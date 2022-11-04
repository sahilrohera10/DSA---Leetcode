class Solution {
public:
    
    bool isPalindrome (string words , int i , int j){
        if(j<i)
            return true;
    
        if(words[i] == words[j]){
            
         return isPalindrome(words , i+1 , j-1);

        }else{
            return false;
        }
   
        
    }
    string firstPalindrome(vector<string>& words) {
       
        bool s ;
        
        for(int k = 0; k <words.size() ;k ++){
          
           s =  isPalindrome(words[k] , 0 , words[k].size()-1);
            
            if(s){
                return words[k];
            }
            
           
        }
        
        return "";
    }
};