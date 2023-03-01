class Solution {
public:
    
    int SumUp (int n){
        int s = 0;
        
        while(n>0){
            s = s + n%10;
            n = n/10;
        }
        
        return s ;
    }
    
    int differenceOfSum(vector<int>& nums) {
        int n = nums.size() ;
        int elementSum = 0 ;
        int digitSum = 0 ;

        for(int i = 0; i< n ;i++){
            elementSum = elementSum + nums[i];
            digitSum = digitSum + SumUp(nums[i]);
        }
        cout<<elementSum << " " <<digitSum ;
        return abs(elementSum - digitSum);
        
    }
};