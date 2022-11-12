class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        
        //FINDING NO. OF UNIQUE NON-ZERO NUMBERS FROM NUMS
        int c = 0 ; 
           unordered_map<int, int> ans; 
        int n = nums.size();
             for (int i = 0; i < n; i++)     
            ans[nums[i]]++;
        
        for(auto x : ans){
            if(x.first>0){
                c++;
            }
        }
        
        return c ;

        
//         int op = 0 ;
//         int n = nums.size();
//           int min=0 ;
        
//         int sum = 0;
//         for(int i = 0 ;i<n; i++){
//             sum = sum + nums[i];
//         }
//         if(sum==0){
//             return op;
//         }
        
        
//         while(true){
//         priority_queue<int , vector<int>, greater<int>> minHeap ;

//         for(int i = 0 ;i < n ; i++){
//             minHeap.push(nums[i]);
//         }
        
      
        
//         while(min==0){
//             min = minHeap.top();
//             if(min==0){
//                 minHeap.pop();  
//             }
//         }
            
            
//         // cout<<"min: "<<min<<endl;
//         for(int i = 0; i<n ;i++){
//             if(nums[i]!=0){
//                 nums[i] = nums[i]-min ;
//             }
//         }
//             cout<<nums[1]<<" " ;
//             op++;
//             // cout<<"op: "<<op<<endl;
//             sum=0;
            
//         for(int i = 0 ;i<n; i++){
//             sum = sum + nums[i];
//         }
//             // cout<<"sum: "<<sum;
            
            
//             if(sum==0)return op;
            
//             // while(!minHeap.empty()){
//             //     cout<<"hi"<<" ";
//             //     minHeap.pop();
//             // }
//          }
        
//         return op;
        
        
    }
};