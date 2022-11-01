class Solution {
public:
    
    int reverseDigit(int n){
        int num = 0;
        while(n!=0){
          int d = n%10;   
            num = num*10 + d;
            n = n/10;        
        }    
        return num;
    }
    
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();
        int rev = 0;
         unordered_map<int, int> ans;
        int c = 0;

        
        for(int i = 0;i<n ; i++){
            rev = reverseDigit(nums[i]);
            nums.push_back(rev);
        }
        
        n = nums.size();
        
          for (int i = 0; i < n; i++)     
            ans[nums[i]]++;

        
        for(auto x : ans){
            c++;
        }
        
        return c;
        
        
    }
};