class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        
        for(int x : stones){
            pq.push(x);
        }
        
        while(pq.size()>1)
        {
            int m = pq.top();
            pq.pop();
            int n = pq.top();
            pq.pop();
            
            if(m != n) pq.push(m-n);
            
        }
        
        if(pq.size() == 1) return pq.top();
        
        return 0;
        
        
    }
};