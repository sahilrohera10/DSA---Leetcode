class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int , int>> vect ;
        
        int n = nums.size();
        
        for(int i = 0 ; i <n ; i++){
            vect.push_back(make_pair(nums[i] , i));
        }
        
        sort(vect.begin() , vect.end());
        vector<int> ans ;
        int i = 0 , j = n-1 ;
        while(i<j)
        {
            if(vect[i].first + vect[j].first == target){
                ans.push_back(vect[i].second);
                ans.push_back(vect[j].second);
                break;
            }else if(vect[i].first + vect[j].first > target) j--;
            else i++;
            
        }
        
        return ans ;
    }
};