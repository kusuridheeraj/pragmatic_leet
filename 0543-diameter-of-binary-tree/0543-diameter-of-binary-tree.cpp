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
int solution = 0;

private:
    int diameter(TreeNode* root){
        if(root == nullptr){
            return 0;
        }
        int left = diameter(root->left);
        int right = diameter(root->right);

        solution = max(solution, (left+right));

        return 1 + max(left,right);
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        diameter(root);
        return solution;
    }
};