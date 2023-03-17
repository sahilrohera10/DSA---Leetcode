class Solution {
public:
    
    void merge(vector<int>& nums , int low , int mid , int high){
        vector<int> temp ;
        int left = low;
        int right = mid+1;
        while(left <= mid && right <= high){
            if(nums[left] <= nums[right])
            {
                temp.push_back(nums[left]);
                left++;
            }else
            {
                temp.push_back(nums[right]);
                right++;
            }
        }
        
        while(left<=mid){
            temp.push_back(nums[left]);
            left++;
        }
        
        while(right<=high){
            temp.push_back(nums[right]);
            right++;
        }
        
        for(int i = low ; i<=high ; i++){
            nums[i] = temp[i-low];
        }
        
        
        
    }
    
    void mergeSort(vector<int>& nums , int low ,int high){
        
        //base case
        if(low == high){
            return ;
        }
        
        //recursive case
        int mid = (low+high)/2;
        
        //merge left subArray
        mergeSort(nums , low , mid);
        
        //merge right subArray
        mergeSort(nums , mid+1 , high);
        
        //merge both sorted array
        merge(nums , low , mid , high);
    }

    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        mergeSort(nums , 0 , n-1);
        
        return nums;
    }
};