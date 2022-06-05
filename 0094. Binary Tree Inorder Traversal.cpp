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
    vector<int> res;
    void retInorder(TreeNode* root) {
        if(root == NULL){
            return;
        }
        retInorder(root->left);
        res.push_back(root->val);
        retInorder(root->right);
    } 
    
    vector<int> inorderTraversal(TreeNode* root) {
        retInorder(root);
        return res;
    }
};