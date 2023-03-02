class Solution {
public:
    
   void bubbleSort (vector<pair <int , int> > &vect , int m){
        
    int i, j;
    for (i = 0; i < m - 1; i++)
 
        for (j = 0; j < m - i - 1; j++)
            if (vect[j].first > vect[j + 1].first)
                swap(vect[j], vect[j + 1]);

    }    
    int power(int n){
        int count = 0 ;
        while(n!=1){
            if(n%2 == 0){
                n = n/2;
                count ++ ;
            }
            else{
                n = (3*n) + 1 ;
                count++;
            }
        }
        
        return count ;
    }
    
    
    int getKth(int lo, int hi, int k) {
        
        
        vector<pair<int , int>> vect ;
        vector<int> ans ;
        
        
        
        for (int i = lo ; i<=hi ; i++){
            vect.push_back(make_pair(power(i) , i));
        }
        int m = vect.size();
        
        bubbleSort(vect , m);
        
        for(int i = 0;i<m ;i++){
            ans.push_back(vect[i].second);
        }
        
        return ans[k-1] ;
        
    }
};