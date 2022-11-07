class Solution {
public:
    
    void solve (vector<string>& ans , int n ){
        if(n==0){
            return ;
        }
        
        if(n%3 == 0){
            ans.at(n-1) = "Fizz" ;
            // ans.insert(ans.begin() + n-1 ,"Fizz");
            // cout<<ans[2]<<" ";
        }else if(n%5 == 0){
            ans.at(n-1) = "Buzz" ;
            // ans.insert(ans.begin() + n-1 ,"Buzz");
        }
        
        if(n%15 == 0){
            ans.at(n-1) = "FizzBuzz";
        }
        
        solve(ans , n-1 );
        
        if(n%3 != 0 && n%5 != 0 ){
            string s = to_string(n);
            ans.at(n-1) = s;
        }

        
    }
    
    
    vector<string> fizzBuzz(int n) {
        vector<string> ans(n , "-1") ;
        
        // vector<string> map ;
        // for(int i = 0;i < n ;i++){
        //     map.push_back(i);
        // }
        
        solve(ans , n );
        
        return ans;
    }
};