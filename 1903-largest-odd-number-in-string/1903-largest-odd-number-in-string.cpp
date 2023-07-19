class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();  
        
        while(n!=0)
        {
            if(int(num[n-1] - '0') % 2 == 0)
            {
                num.pop_back();
                n--;
            }
            else{
               break;
             
            }
        }
        

        
        return num;
        
    }
};