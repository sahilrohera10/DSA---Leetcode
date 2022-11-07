class Solution {
public:
    
    void reverse(vector<char>& s , int i , int j ){
        
        //Base Case
        if(i >= j){
            return;
        }
        
        swap(s[i] , s[j]);
        
        reverse(s , i+1 , j-1);
        
        
    }
    
    
    void reverseString(vector<char>& s) {
        
        int n = s.size();
        
        reverse(s , 0 , n-1);
        

        
    }
};