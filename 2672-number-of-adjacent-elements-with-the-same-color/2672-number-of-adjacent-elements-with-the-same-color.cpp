class Solution {
public:
    int find(vector<int>& nums , int n , int i , int val , int &c){
       if(i==0){
           if(  nums[i] == nums[i+1] && nums[i]!=0) c--;
           nums[i] = val ;
           if(nums[i] == nums[i+1] && nums[i]!=0) c++;
       }else if(i==n-1){
           if(nums[i] == nums[i-1] && nums[i]!=0) c--;
           nums[i] = val ;
           if(nums[i] == nums[i-1] && nums[i]!=0) c++;
       }else{
           if(nums[i] == nums[i-1] && nums[i] != 0) c--;
           if(nums[i] == nums[i+1] && nums[i] != 0) c--;
           nums[i] = val ;
           
           if(nums[i] == nums[i-1] && nums[i] != 0) c++;
           if(nums[i] == nums[i+1] && nums[i] != 0) c++;
       }
        return c ;
    }

    vector<int> colorTheArray(int n, vector<vector<int>>& queries) {
        
        
        vector<int> nums(n , 0);
        vector<int> ans;
        
        int a = queries.size();

        int c = 0;
        for(int i = 0 ;i<a ; i++){
 if(n==1){
     ans.push_back(0);
 } else 
     
    {       c = find(nums , n ,queries[i][0] , queries[i][1], c );
            
            ans.push_back(c); 
}
           
        }
        
        return ans;
    }
};