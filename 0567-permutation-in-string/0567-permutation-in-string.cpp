class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        map<char , int> mp1;
        map<char , int> mp2;
        
        int n = s1.size();
         int m = s2.size();
        if(n>m) return false;
        for(int i = 0 ;i<n ; i++){
            mp1[s1[i]]++;
        }
        
         for(int i = 0 ;i<n ; i++){
             mp2[s2[i]]++;
         }
        
        int i = 0 ;
        int j = n;
       
        bool flag = false;;
        while(j<=m){
            for(auto x : mp1){ 
               
                if(mp2[x.first]>0 && mp2[x.first] == x.second){
                   
                    flag = true;
                }else {
                    flag = false;
                    break;
                }
            }
            if(flag) return true;
            
           mp2[s2[i]]--;
       
           mp2[s2[j]]++;
          
            i++;
            j++;
            
            
        }
        return false;
    }
};