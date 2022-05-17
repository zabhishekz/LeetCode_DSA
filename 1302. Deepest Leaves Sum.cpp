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
    int height(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int h1 = height(root->left);
        int h2 = height(root->right);
        return max(h1,h2)+1;
    }
    int sum = 0;
    void summa(TreeNode* root, int d, int h) {
        if(root == NULL){
            return;
        }
        if(d == h){
            sum += root->val;
        }
        summa(root->left, d+1, h);
        summa(root->right, d+1, h);
    }
    int deepestLeavesSum(TreeNode* root) {
        int h = height(root);
        summa(root,1,h);
        return sum;
    }
};