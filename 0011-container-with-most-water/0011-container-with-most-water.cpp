class Solution {
public:
    int maxArea(vector<int>& height) {
        
     int maxArea = INT_MIN;
        int n = height.size();
        int s = 1;
        int e = n;
        int area = 0 ;
        
        while(s<e){
           area = (e-s) * min(height[s-1],height[e-1]);
            maxArea = max(maxArea , area);
           if(height[s-1]<height[e-1]){
               s++;
               continue;
           }
            
               e--; 
           
        }
       
        return maxArea;
    }
};