class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        //new approach
        int mini = prices[0];
        int n = prices.size();
        int cost = 0;
        int profit = 0 ;
        for(int i = 1 ; i<n ;i++){
            cost = prices[i] - mini;
            profit = max(profit , cost);
            mini = min(mini , prices[i]);
        }
        
        return profit;
        
        
        
        
        
        
        
//         int n = prices.size();
        
//         int b = 0;
//         int s = 0;
//         int profit = 0;
        
//         int i = 1 ;
//         while(i<n){
//             if(prices[i] < prices[b]){
//                 b = i ;
//                 s = i;
//             }
//             if(prices[i] > prices[s]){
//                 s = i ;
//             }
            
//             int a = prices[s] - prices[b];
//             profit = max(profit , a);
            
//             i++;
//         }
        
//         return profit;
        
        
    }
};