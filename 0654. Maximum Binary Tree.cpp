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
    TreeNode* func(vector<int>&nums, int s, int e){
        if(s > e){
            return NULL;
        }
        int max = INT_MIN;
        int pos;
        for(int i = s; i <= e; i++){
            if(nums[i]>=max){
                max = nums[i];
                pos = i;
            }
        }
        TreeNode* head = new TreeNode(max);
        head->left = func(nums, s, pos-1);
        head->right = func(nums, pos+1, e);
        return head;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return func(nums, 0, nums.size()-1); 
    }
};