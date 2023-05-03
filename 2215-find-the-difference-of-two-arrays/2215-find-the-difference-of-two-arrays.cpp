class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        map<int , int> mp1 ;
        map<int , int> mp2;
        for(int i = 0 ; i<nums1.size() ;i++){
            mp1[nums1[i]] = 0;
        }
        
        for(int i = 0 ; i<nums2.size() ;i++){
            mp2[nums2[i]] = 0;
        }
        
        for(int i = 0 ; i<nums2.size() ; i++){
            if(mp1[nums2[i]] == 0)
                mp1[nums2[i]] = 1 ;
        
                
        }
          for(int i = 0 ; i<nums1.size() ; i++){
            if(mp2[nums1[i]] == 0) mp2[nums1[i]] = 1 ;
        }
        
        vector<int> vect1 ;
        vector<int> vect2 ;
        
        for(auto x : mp1){
            if(x.second == 0) vect1.push_back(x.first);
        }
        
        for(auto x : mp2){
            if(x.second == 0) vect2.push_back(x.first);
        }
        
        vector<vector<int>> ans ;
        ans.push_back(vect1);
        ans.push_back(vect2);
        
        return ans ;
    }
};