class Solution {
public:
    int bulbSwitch(int n) {
//         vector<bool> vect (n , true) ;
        
//         int round = 2 ;
//         while(round <= n){
//             if(round == 2){
//                 for(int i = 1 ; i<n ; i = i+2){
//                     vect[i] = false;
//                 }

//             }
//             else{
//                 for(int j = round-1 ; j<=n ; j = j+round){
//                      vect[j] = !vect[j];
//                 }
             
//             }
            
            
//             round++;
//         }
        
//         int c = 0 ;
//         for(int i = 0 ; i< n ; i++){
//             if(vect[i] == true) c++;
//         }
        
//         return c ;
        
    return sqrt(n);
        
    }
};