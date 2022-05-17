/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(original == NULL){
            return NULL;
        }
        if(original == target){
            TreeNode* temp = cloned;
            return temp;
        }
        TreeNode* temp1 = getTargetCopy(original->left, cloned->left, target);
        TreeNode* temp2 = getTargetCopy(original->right, cloned->right, target);
        if(temp1 != NULL){
            return temp1;
        }
        else{
            return temp2;
        }
    }
};