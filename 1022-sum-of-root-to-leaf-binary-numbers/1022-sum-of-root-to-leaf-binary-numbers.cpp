/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int findValue(vector<int> vect)
    {
        int s = vect.size();
        int ans = 0;
        for(int i = 0 ; i<s ; i++){
            ans = ans + vect[i] * pow(2 , s-i-1);
        }
        cout<<ans<<" ";
        return ans;
    }
    
    void find(TreeNode* root ,vector<int> vect, int &sum )
    {
        if(root == NULL){
            return ;
        }
        
        vect.push_back(root->val);
        
        if(root->left == NULL && root->right == NULL){
            
            sum = sum + findValue(vect);
            // return;
            // v.push_back(vect);
        }

        find(root->left , vect ,sum);
        
        
        
        find(root->right , vect , sum);
        
        vect.pop_back();
     
        
    }
    
    
    
    int sumRootToLeaf(TreeNode* root) {
        vector<int> vect;
        int sum = 0;
        find(root , vect , sum);
        return sum;
        
        
    }
};