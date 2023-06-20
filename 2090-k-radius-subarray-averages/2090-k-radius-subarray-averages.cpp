class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
      
        int n = nums.size();
  
          vector<int> ans(n) ;
        long long sum = 0;
        int a = 0 ;
        int b = 2*k;
        int avg = 0 ;
        if(n<=2*k){
            
            for(int i = 0 ; i<n ; i++){
              
                ans[i]=-1;
            }
            return ans;
        }else{
        
            for(int i = 0 ;i<=2*k ;i++){
                if(i<k) ans[i] = -1;
                sum = sum + nums[i];
            }
             avg = sum/(2*k+1);
            // cout<<avg;
            for(int j = k ; j<n-k ;j++){
                ans[j] = avg;
               
                if(a+1<n && b+1<n) {
                    if(a!=b)
                    sum = sum - nums[a] + nums[b+1];
                else sum = sum - nums[a] + nums[a+1];
                    }
                avg = sum/(2*k+1);
                a++;
                b++;
            }
             for(int i = n-k ;i<n ;i++){
              ans[i] = -1;     
            }
            
        }
        
        return ans;
    }
};