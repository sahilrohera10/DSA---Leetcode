class Solution {
public:
    bool check(map<char , int> &m1 , map<char , int> &m2)
{
    if(m1.size() != m2.size()) return false;
    for(auto x : m1){
        if(m2[x.first] != x.second) return false;
    }
    
    return true;
}
    vector<int> findAnagrams(string s, string p) {

        int k = p.size();
	   map<char , int> m1 ;
	   map<char , int> m2 ;
	   
	   for(int i : p){
	       m1[i]++;
	   }
	   
	   int i = 0 ;
	   int j = 0 ;
	   vector<int> ans;
	   int n = s.size();
	   
	   while(j<n)
	   {
	       m2[s[j]]++;
	       
	       if(j-i+1 < k)
	         j++;

	       else if(j-i+1 == k){
	           if(check(m1 ,m2)){
                   ans.push_back(i);
               }
	           
	           m2[s[i]]--;
	           if(m2[s[i]] == 0) m2.erase(s[i]);
	           
	           i++;
	           j++;

	       }
	   }
	   
	   return ans;
    }
};