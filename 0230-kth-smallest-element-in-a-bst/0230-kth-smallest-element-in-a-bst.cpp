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
    
    void smallest(TreeNode* root , int k , int &ans , int &c , bool &is)
    {
        if(root==NULL) return ;
        
        if(is) return;
       else smallest(root->left , k , ans , c , is);
        c++;
        if(c==k) {
            is = true;
            ans = root->val;
            cout<<ans;
            return; 
        }
        
        if(is) return ;
       else smallest(root->right , k ,ans ,c , is);
        
        
        
    }
    
    
    int kthSmallest(TreeNode* root, int k) {
        int ans = 0;
        bool is = false;
        int c = 0;
        smallest(root , k , ans , c , is);
        return ans;
        
    }
};