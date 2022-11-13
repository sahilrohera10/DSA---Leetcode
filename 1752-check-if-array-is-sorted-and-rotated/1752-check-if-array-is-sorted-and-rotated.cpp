class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
       vector<int> temp(n) ;
        
        for(int i =0 ; i< n; i++){
            temp[i] = nums[i];
        }
        
        sort(temp.begin() , temp.end());
        
        int x = n ;
        int i = 0;
        while(x--){
            for( i = 0; i<n ; i++){
                if(nums[i] != temp[(i+x)%n]) break;
            }
            if(i==n){
                return true;
            }
    
        }
        
        return false;
    }
};