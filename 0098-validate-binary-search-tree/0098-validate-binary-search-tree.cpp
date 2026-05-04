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

private:
    bool isbalanced(TreeNode* root, long lower, long upper){
        if(!root)return true;

        if(root->val <= lower || root->val >= upper){
            return false;
        }

        return isbalanced(root->left, lower, root->val) && isbalanced(root->right, root->val, upper );
    }
public:
    bool isValidBST(TreeNode* root) {
        return isbalanced(root, LONG_MIN, LONG_MAX);
    }
};