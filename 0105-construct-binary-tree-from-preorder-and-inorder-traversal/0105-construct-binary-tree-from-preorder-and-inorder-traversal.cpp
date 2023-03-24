// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
    
//     TreeNode* TreeBuild(vector<int>& preorder, int preStart, int preEnd ,  vector<int>& inorder , int inStart , int inEnd , unordered_map<int , int> inMap)
//     {
// //         if(preStart > preEnd || inStart > inEnd){
// //             return NULL;
// //         }
        
// //         TreeNode* root = new TreeNode(preorder[preStart]);
        
// //         int inRoot = inMap[root->val];
// //         int numLeft = inRoot - inStart ;
        
// //         root->left = TreeBuild(preorder , preStart+1 , preStart+numLeft ,inorder , inStart , inRoot-1 , inMap );
        
// //         root->right = TreeBuild(preorder , preStart+numLeft + 1 , preEnd , inorder , inRoot+1 , inEnd , inMap);
        
        
// //         return root;
//         if(preStart>preEnd || inStart>inEnd) {
//              return NULL;
//          }
//          TreeNode* root = new TreeNode(preorder[preStart]);
//          int inVal = inMap[root->val];
//          int leftNumbers = inVal - inStart;
//          root->left = TreeBuild(preorder , preStart+1,preStart+leftNumbers , inorder , inStart , inVal-1 , inMap);
//          root->right = TreeBuild(preorder , preStart+leftNumbers+1 , preEnd , inorder , inVal+1 , inEnd , inMap);
//          return root;
   
//     }
    
    
    
    
//     TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
// //         unordered_map<int , int> inMap;
// //         for(int i = 0;i<inorder.size() ; i++)
// //         {
// //             inMap[inorder[i]] = i;
// //         }
                  
// //           TreeNode* root = TreeBuild(preorder , 0 , preorder.size()-1 , inorder , 0 ,inorder.size()-1 , inMap);
// //                   return root ;
        
//          unordered_map<int , int> inMap;
//         for(int i = 0 ; i<inorder.size() ; i++){
//             inMap[inorder[i]] = i;
//         }
//         TreeNode* root = TreeBuild( preorder , 0  , preorder.size()-1 , inorder , 0 , inorder.size()-1 , inMap );
//         return root;
//     }
// };
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
     TreeNode* build(vector<int>&preorder , int preStart , int preEnd , vector<int>&inorder , int inStart , int inEnd , unordered_map<int , int>  &map){
         if(preStart>preEnd || inStart>inEnd) {
             return NULL;
         }
         TreeNode* root = new TreeNode(preorder[preStart]);
         int inVal = map[root->val];
         int leftNumbers = inVal - inStart;
         root->left = build(preorder , preStart+1,preStart+leftNumbers , inorder , inStart , inVal-1 , map);
         root->right = build(preorder , preStart+leftNumbers+1 , preEnd , inorder , inVal+1 , inEnd , map);
         return root;

     }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int , int> map;
        for(int i = 0 ; i<inorder.size() ; i++){
            map[inorder[i]] = i;
        }
        TreeNode* root = build( preorder , 0  , preorder.size()-1 , inorder , 0 , inorder.size()-1 , map );
        return root;
    }
};