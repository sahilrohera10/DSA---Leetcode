class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
      //[100,4,200,1,3,2]
        
        // sort(nums.begin() , nums.end());
        
          //[1,2,3,4,100,200]
        
        int c = 1 ;
        int maxi = 0 ;
                int n = nums.size();
  if(n==0){
            return 0;
        }
        
        
        map<int , int> m;
        for(int i = 0; i< n ;i++ ){
            m[nums[i]]++;
        }
        
        vector<int> ans;
        
        for(auto x : m){
            ans.push_back(x.first);
        }
        
        int s = ans.size();
      
        for(int i = 1 ; i < s ; i++)
        {
            if(ans[i] == ans[i-1]+1){
                c++;
                continue;
            }else{
                maxi = max(maxi , c);
                c = 1 ;
            }
        }
        maxi = max(maxi , c);
        
        return maxi ;
    }
};