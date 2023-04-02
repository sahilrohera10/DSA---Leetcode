class Solution {
public:
    
   static int comp(string a , string b)
    {
        string str1 = a+b ;
        string str2 = b+a;
        
        return str1>str2 ;
    }
    
    
    string largestNumber(vector<int>& nums) {
        vector<string> str ;
        int n = nums.size();
        string elem ;
        string ans ; 
        
        for(int i = 0 ; i< n ;i++){
            elem = to_string(nums[i]);
            str.push_back(elem);
        }
        
        sort(str.begin() , str.end() , comp);
        
        if(str[0] == "0") return "0" ;
        
        for(string x : str){
            ans += x ;
        }
        // for(int i=0;i<ans.size();i++){ //this conditon is for  testCase [0,0] 
        //     if(ans[i]!='0') return ans;
        // }
        // return "0";
  
        
        return ans ;
        
    }
};