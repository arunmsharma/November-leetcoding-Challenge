//Day 9
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
    void dfs(TreeNode *root,int maxx,int minx,int &ans){
        if(root==NULL){
            return;
        }
        ans = max({ans,abs(root->val-maxx),abs(root->val-minx)});
        maxx = max(maxx,root->val);
        minx = min(minx,root->val);
        dfs(root->left,maxx,minx,ans);
        dfs(root->right,maxx,minx,ans);
    }
public:
    int maxAncestorDiff(TreeNode* root) {
        int ans = 0;
        dfs(root,root->val,root->val,ans);
        return ans;
    }
};
