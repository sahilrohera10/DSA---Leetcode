class Solution {
public:
    
    bool isPossible(vector<int>& weights, int n , int days , int mid)
    {
        int dayNo = 1;
        int wSum = 0;
        
        for(int i = 0 ;i< n ; i++){
            if(wSum + weights[i] <= mid)
            {
                wSum += weights[i];
            }
            else
            {
                dayNo++;
                if(dayNo > days || weights[i] > mid)
                {
                    return false;
                }
                wSum = weights[i];
            }
        }
        
        return true;
    }
    
    
    
    int shipWithinDays(vector<int>& weights, int days) {
        
        int s = 0;
        int n = weights.size();
        
        int sum = 0 ;
        
        for(int i = 0 ; i< n ; i++){
            sum += weights[i];
        }
        
        int e = sum ;
        int ans = -1;
        int mid = s+ (e-s)/2 ;
        
        while(s<=e){
            if(isPossible(weights , n , days , mid))
            {
                ans = mid ; 
                e = mid-1;
            }
            else 
            {
                s = mid + 1;
            }
            
           mid = s + (e-s)/2 ; 
        }
        
        
        return ans;
        
    }
};