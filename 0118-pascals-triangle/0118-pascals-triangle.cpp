class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
      vector<vector<int>> ans ;
        vector<int> row ;
        
       int coef = 1;
    for(int i = 0; i < numRows; i++)
    {
          vector<int> row ;
        // for(int space = 1; space <= numRows-i; space++)
        //     cout <<"  ";
        for(int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef*(i-j+1)/j;
            
            row.push_back(coef);
        }
        ans.push_back(row);
    }
        
        
        return ans;
        
    }
};