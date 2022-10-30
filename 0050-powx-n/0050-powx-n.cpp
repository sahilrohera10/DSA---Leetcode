class Solution {
    
    
    double my_util(double x , long n ){
        
        // base case
        
        if( n == 0 ){  // agar n ki value 0 hi enter hoye user se 
            return 1.0;
        }
        if( n ==1 ){  
            return x;
        }
        
        //recursive case
        
        
        if(n<0){    // agar n ki value -ve  enter hoye user se
            return my_util (1/x , -n) ; 
        }
        
        if(n % 2){
        return x * my_util(x*x , n/2 );}
        
        return my_util(x*x , n/2);
        
        
    }
    
    
    
public:
    double myPow (double x , int n) {
        return my_util(x , n );
        
        
    }
};