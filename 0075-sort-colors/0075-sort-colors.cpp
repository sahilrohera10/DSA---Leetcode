class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0 = 0 ;
        int count1 = 0;
        int n = nums.size();
        
        
        for(int  i = 0 ;i<n ; i++){
            if(nums[i] == 0){
                count0++;
            }
        }
        
        cout<<"0=>"<<count0<<endl;
        
        for(int  i = 0 ;i<n ; i++){
            if(nums[i] == 1){
                count1++;
            }
        }
        
         cout<<"1=>"<<count1<<endl;
        
        for(int i = 0 ;i<count0 ; i++){
            nums.at(i) = 0;
        }
        
            
        for(int i = count0 ;i<count1+count0 ; i++){
            nums.at(i) = 1;
        }
        
            
        for(int i = count0+count1 ;i<n ; i++){
            nums.at(i) = 2;
        }
        
        
        
    }
};