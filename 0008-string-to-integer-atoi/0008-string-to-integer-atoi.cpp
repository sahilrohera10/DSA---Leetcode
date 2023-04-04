class Solution {
public:
    int myAtoi(string s) {
        string strNum = "";
        char sign ;
        double ans = 0 ;
        int i = 0 ;
        while(s[i] == ' ' || isalpha(s[i]))
            {
              if(isalpha(s[i])) return 0;
            i++;
            }
        
        if(s[i] == '+' || s[i] == '-'){ sign = s[i] ; i++;}
        
        
        while(i < s.size() && s[i] >= '0' && s[i] <= '9'){
            cout<<s[i]<<" ";
            ans = ans*10 + s[i]-'0';
            // strNum = strNum + s[i];
            i++;
        }
        
        
        if(ans > 2147483647 ){
            if(sign == '-') ans = 0 - 2147483648 ;
            else ans = 2147483647 ;
        }else{
             if(sign == '-') ans = 0 - ans ;
            else ans = ans ;
        }
        
        
//         if(sign == '-'){
//             if(stoi(strNum) > 2147483648){
//                 ans = 0 - 2147483648;
//             }else{
//                 ans = 0 - stoi(strNum);
//                 return ans ;
//             }
            
                       
//             }
//         else if(sign == '+' && stoi(strNum) > 2147483648) {
//             ans = 2147483648 ;
//             return ans ;
           
             
//           }
//         ans = stoi(strNum);

            return ans ;

        }
};