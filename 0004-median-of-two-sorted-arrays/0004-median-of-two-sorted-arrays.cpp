class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // shall we first merge two sorted arrays into a new array
        // then find the median of a sorted array
        
        vector<double> temp ;
        int i = 0 ;
        int j = 0 ;
        
        int n = nums1.size();
        int m = nums2.size();
        
        while(i<n && j<m){
            if(nums1[i] < nums2[j]){
                temp.push_back(nums1[i]);
                i++;
            }else {
                temp.push_back(nums2[j]);
                j++;
            }
        }
        
        while(i<n){
            temp.push_back(nums1[i]);
            i++;
        }
        while(j<m){
            temp.push_back(nums2[j]);
            j++;
        }
        
        double ans = 0 ;
        if(temp.size() > 1){
        if(temp.size()%2 != 0){
            int a = temp.size()/2;
            ans = temp[a];
        }else{
            int b = temp.size()/2 ;
            int c = temp.size()/2 -1 ;
            ans = (temp[b] + temp[c])/2 ;
         }
        }else if(temp.size() == 1){
            ans = temp[0];
        }else{
            ans = 0 ;
        }
        
        return ans ;
        
        
    }
};