//Day 8
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
    int sum=0;
   int dfs(TreeNode *root){
       if(root==NULL){
           return 0;
       }
       int ls = dfs(root->left);
       int rs = dfs(root->right);
       sum += abs(ls-rs);
       return ls+rs+root->val;
   }
public:
    int findTilt(TreeNode* root) {
        dfs(root);
        return sum;
        // return root->val;
    }
};
