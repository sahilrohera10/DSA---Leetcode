class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int min = INT_MAX ;
        int max = INT_MIN ;
        int minIdx = 0 ;
        int maxIdx = 0 ;
        int n = nums.size();
        for(int i = 0 ;i <n ; i++){
            if(nums[i] > max){
                max = nums[i];
                maxIdx = i ;
            }
            if(nums[i] < min) {
                min = nums[i];
                minIdx = i ;
            }
        }
        
        int count = 0 ;
        int mid = n/2 ;
        
        //dono mid se chote h 
        if(minIdx <= mid && maxIdx <= mid){
          if(minIdx > maxIdx) count =  minIdx +1;
            else count =  maxIdx +1;
            
            return count ;
        }
        
        //dono mid se bde h 
         if(minIdx >= mid && maxIdx >= mid){
              if(minIdx > maxIdx) count =  n-maxIdx;
                else count =  n-minIdx;
             
             return count;
        }
        
        
         //dono mid ke alg alg taraf h 
        int c1 = 0 , c2 = 0 , c3 = 0;
       
        if(minIdx >= mid && maxIdx <= mid){
            if(minIdx == maxIdx) count = 1;
            else 
               { c1 = maxIdx + 1 + n-minIdx ;
                c2 = n-maxIdx;
                c3 = minIdx + 1 ;
              if(c1<c2 && c1<c3) return c1 ;
              if(c2<c1 && c2<c3) return c2 ;
              if(c3<c2 && c3<c1) return c3 ;
                }
        }
        
        if(minIdx <= mid && maxIdx >= mid){
            cout<<"hello";
            if(minIdx == maxIdx) count = 1;
            else 
                 { c1 = minIdx + 1 + n-maxIdx ;
                     c2 = n-minIdx;
                     c3 = maxIdx + 1 ;
                      if(c1<=c2 && c1<=c3) return c1 ;
                      if(c2<=c2 && c2<=c3) return c2 ;
                      if(c3<=c2 && c3<=c1) return c3 ;
                }
        }
        
        
        
        
        return count;
      
        
    }
};