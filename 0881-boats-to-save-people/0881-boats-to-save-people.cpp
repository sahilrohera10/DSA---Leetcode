class Solution {
public:
    

    
    
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        int c = 0 ;
        sort(people.begin() , people.end());
        
       int i = 0;
       int j = n-1 ;
        while(j>=i){
            if(i==j){
               c++; 
                i++;
                j--;
            } 
           else if(people[i] + people[j] <= limit){
                c++;
                i++;
                j--;
            }
            else if(people[j] <= limit){
                c++;
                j--;
            }
        }
        
    return c ;
    }
};