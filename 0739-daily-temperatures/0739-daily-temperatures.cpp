class Solution {
public:
    
    
    vector<int> dailyTemperatures(vector<int>& t) {
        // using stack
         stack<int> st ;
        int n = t.size();
         vector<int> ans(n , 0) ;
        
        for(int  i = 0; i<n ; i++){
            if(st.empty()){
                st.push(i);
            }else{
                while(!st.empty() && t[st.top()] < t[i]){
                    ans[st.top()] = i - st.top();
                    st.pop();
                }
                st.push(i);
            }
        }
        return ans;
        
        
        // Using stack - TLE
//         stack<int> st ;
//         vector<int> ans ;
        
//         int n = temperatures.size();
//         int c = 0 ;
//         int j = 0 ;
//         for(int i = 0 ; i < n ; i++){
//             // j = i;
//             if(st.empty()){
//                 st.push(temperatures[i]);
//                 j++;
//             }else if( j<n && temperatures[j] > st.top()){
//                 c++;
//                 st.push(temperatures[i]);
//                 // j=i;
//                 ans.push_back(c);
//                 c = 0;
//                 j = i+1;
//             }else if( j == n ){
//                 c = 0 ;
//                 ans.push_back(c);
//                 st.push(temperatures[i]);
//                 j = i + 1;
//             }
//             else{
//                 c++;
//                 j++;
//                 i--;
//             }
//         }
        
//         ans.push_back(0);
        
//         return ans ;

        
        // TLE
//         vector<int> ans ;
//         int n = temperatures.size();
//         for(int i = 0; i<n ; i++){
//             int count = 0;
//             int flag = 0;
//             for(int j = i+1 ; j<n ; j++){
//                 if(temperatures[j]>temperatures[i]){
//                     count++ ;
//                     flag = 1;
//                     break;
//                 }
//                 count++;
//             }
            
//             if(flag){
//                 ans.push_back(count);
//             }else{
//                 ans.push_back(0);
//             }
            
            
//         }
        
//         return ans ;
    }
};