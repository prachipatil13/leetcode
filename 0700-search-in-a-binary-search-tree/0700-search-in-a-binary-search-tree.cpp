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
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root==NULL){
            return NULL;
        }
        
        TreeNode* cur=root;
        while(cur){
          if(cur->val==val){
              return cur;
          }else if( val>cur->val){
              if(cur->right){
                  cur=cur->right;
              }else{
                  return NULL;
              }
          } else{
              if(cur->left){
                   cur=cur->left;
              }else{
                  return NULL;
              }
          } 
        }
        
        return NULL;
    }
};