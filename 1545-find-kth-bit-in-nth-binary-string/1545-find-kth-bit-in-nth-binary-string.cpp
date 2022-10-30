class Solution {
public:
    char findKthBit(int n, int k) {
        
        string str = "0" ;
        string temp ;
        while(n--){
            temp = str ;
            reverse(temp.begin() , temp.end());
            
            //for inverting the corresponding bits
            for(char &c : temp){
                if(c == '0'){
                    c = '1';
                }
                else{
                    c = '0';
                }
            }
            
            str = str + "1" + temp;
        }
        return str[k-1];
        
    }
};