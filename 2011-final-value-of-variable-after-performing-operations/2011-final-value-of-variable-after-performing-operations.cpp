class Solution {
public:
    int find(int x , string s){
        if(s=="X++"){
            x++;}
        else if(s=="X--"){
            x--;}
        else if(s=="++X"){
            x++;}
        else if(s=="--X"){

            x--;}

        return x;
    }
    int finalValueAfterOperations(vector<string>& operations) {
        int n = operations.size();
        int x = 0 ;
        for(int i = 0 ;i<n;i++){
            x = find(x,operations[i]);
        }
        
        return x;
    }
};