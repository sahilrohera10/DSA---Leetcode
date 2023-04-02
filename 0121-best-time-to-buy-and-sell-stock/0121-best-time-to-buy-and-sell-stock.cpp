class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minIdx = 0 ;
        int maxIdx = 0 ;
        int max = INT_MIN ;
        int min = INT_MAX ;
        int profit = 0;
        
        for(int i = 0;i<n ; i++)
        {
            if(prices[i] > max) {
                max = prices[i];
                maxIdx = i ;
            }               
            if(prices[i] < min){
                min = prices[i];
                minIdx = i ;
            }
            
            if(maxIdx >= minIdx) {
                if(max-min > profit){
                    profit = max-min;
                }
            }else{
                max = min ;
                maxIdx = minIdx ;
            }
            
        }
                    
        
        return profit;
    }
};