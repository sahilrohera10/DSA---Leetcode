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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*> q;
        
        q.push(root);
        int level = 1 ;
        int minLevel = 0 ;
        int maxi = -1e9 ;
        int sum = 0 ;
        while(!q.empty())
        {
            int s = q.size();
            // sum = 0 ;
            
            for(int i = 0 ; i <s ; i++){
                TreeNode* node = q.front();
                q.pop();
                
                sum = sum + node->val ;
             
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            if(sum > maxi){
                maxi = sum ;
                minLevel = level;
            }
            level ++ ;
            sum = 0 ;
        }
        
        return minLevel;
    }
};