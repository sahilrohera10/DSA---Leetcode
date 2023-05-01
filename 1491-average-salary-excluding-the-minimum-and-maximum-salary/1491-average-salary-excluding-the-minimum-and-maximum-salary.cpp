class Solution {
public:
    double average(vector<int>& salary) {
        int total = salary.size();
        double maxi = INT_MIN ;
        double mini = INT_MAX ;
        
        for(int i = 0 ; i < total ; i++){
            if(salary[i] > maxi) maxi = salary[i];
            if(salary[i] < mini) mini = salary[i];
        }
        // cout<<"max=>"<<maxi<<"mini=>"<<mini;
        
        double sum = 0 ;
        for(int i = 0 ; i < total ; i++){
            sum = sum + salary[i];
        }
        
        double ans = (sum-maxi-mini)/(total-2);
        
        return ans ;
    }
};