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
    string intToString(int n){
        string res = "";
        int N;
        if(n>=0){
            N= n;
        }
        else{
            N = n*(-1);
        }
        while(N > 0){
            int dig = N%10;
            N = N/10;
            char c = '0'+dig;
            res = res + c;
        }
        if(n<0){
            res += "-";
        }
        reverse(res.begin(),res.end());
        return res;
    }
    vector<string> sol;
    void bt(TreeNode* root, string temp=""){
        if(root->left == NULL and root->right == NULL){
                temp += intToString(root->val);
                sol.push_back(temp);
                return;
        }
        int t = root->val;
        temp += intToString(t);
        temp += "->";
        if(root->left){
            bt(root->left, temp);
        }
        if(root->right){
            bt(root->right, temp);
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        bt(root);
        return sol;
    }
};