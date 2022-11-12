class Solution {
public:
    int countPrimes(int n) {
        
        //APPROACH 1 -> n^2 (giving TLE)
        
//         int count =0, j;
//         for(int i=2;i<n;i++){
//             for( j=2;j<=sqrt(i);j++){
//                 if(i%j == 0){
//                     break;
//                 }
//             }
//             if(j>sqrt(i)){
//                 count++;
//             }
//         }

//         return count;
        
        
        //APPROACH 2 (SIEVE OF ERATOSTHENES ALGORITHM)
        //STEP 1
            //MARK EVERY NO. BETWEEN 0 TO N AS PRIME NO.
        //STEP 2
            //STARTING FROM 2, IF A NO. IS PRIME , THEN MARK OTHER NOS. WHICH COMES TO ITS TABLE AS NON-PRIME
        //STEP 3
            // REST ARE THE NO. OF PRIME NUMBERS
        
        
        //IMPLEMENTATION
        
        vector<bool> prime(n+1 , true);
        int c = 0 ;
        
        prime[0] = prime[1] = false;
        
        for(int i = 2 ; i< n ; i++){
            if(prime[i]){
                c++;
                for(int j = 2*i ; j< n ; j = j +i){
                    prime[j] = false;
                }
            }
        }
        
        return c;
        
        
        
        
        
        
        
        
    }
};