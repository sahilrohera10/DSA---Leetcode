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
    vector<double> averageOfLevels(TreeNode* root) {
        
        vector<double> ans ;
        double a = 0 ;
        if(root == NULL) return ans;
        
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {
            int s = q.size();
            
            for(int i = 0; i<s ; i++)
            {
                TreeNode* temp = q.front();
                a = a + temp->val ;
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
                q.pop();
            }
             a = a / s;
            ans.push_back(a);
            a = 0;
        }
        
        return ans;
        
    }
};