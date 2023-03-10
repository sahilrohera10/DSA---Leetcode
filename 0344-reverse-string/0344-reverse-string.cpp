class Solution {
public:
    
//     void reverse(vector<char>& s , int i , int j ){
        
//         //Base Case
//         if(i >= j){
//             return;
//         }
        
//         swap(s[i] , s[j]);
        
//         reverse(s , i+1 , j-1);
        
        
//     }
    
    
    void reverseString(vector<char>& s) {
        
        int n = s.size();
        
        //using recursion and swap
        // reverse(s , 0 , n-1);
        
        // Now using stack
        stack<char> st ;
        for(int i = 0 ; i< n ; i++){
            st.push(s[i]);
        }
        int i = 0;
        
        while(!st.empty()){
            s[i] = st.top();
            st.pop();
            i++;
        }
        
        
        

        
    }
};