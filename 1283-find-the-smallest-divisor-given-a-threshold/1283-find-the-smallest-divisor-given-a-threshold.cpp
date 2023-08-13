class Solution {
public:
    
    int findmax(vector<int> nums){
        int maxi = 0 ;
        for(auto x : nums){
            maxi = max(maxi , x);
        }
        
        return maxi;
    }
    
    int findsum(int mid , vector<int> nums){
        int sum = 0 ;
        for(auto x : nums){
            sum = sum + ceil((double)x / (double)mid);
        }
        
        return sum;
    }
    
    int smallestDivisor(vector<int>& nums, int threshold) {
        
        int s = 1 ;
        int e = findmax(nums);
        
        
        
        while(e>=s){
            int mid = (s+e)/2;
            
            int sum = findsum(mid , nums);
            if(sum <= threshold) e = mid-1;
            else
                s = mid+1;
            
        }
        
        return s;
    }
};