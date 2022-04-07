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
    void rightView(TreeNode* root, int level, int & maxlevel){
        if(root == NULL){
            return;
        }
        if(maxlevel<level){
            res.push_back(root->val);
            maxlevel = level;
        }
        rightView(root->right, level+1, maxlevel);
        rightView(root->left, level+1, maxlevel);
    }
    vector<int> rightSideView(TreeNode* root) {
        int maxlevel = -1;
        rightView(root, 0, maxlevel);
        return res;
    }
};