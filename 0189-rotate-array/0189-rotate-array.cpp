class Solution {
public:

    void rotate(vector<int>& nums, int k) {
        
        
        //APPROACH 1
        //Time Limit Exceed
//         int s;
//         int temp ;

//         while(k--){
//             s = nums.size();
//             temp = nums[s-1];
//             nums.pop_back();
//             nums.insert(nums.begin() , temp);
//         }

        int n = nums.size();
        vector<int> temp;
        
        if(k==0 || k==n){
            return;
        }
        
        if(k>n){
            k = k%n;
        }
        
        for(int i = n-k ; i< n ;i++){
            temp.push_back(nums[i]);
        }
     
          for(int i = 0 ; i < n-k ;i++){
            temp.push_back(nums[i]);
        }
        
           for(int i = 0 ; i < n ;i++){
            nums[i] = temp[i];
        }
        
    }
};