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
    bool hasPathSum(TreeNode* root, int targetSum) {
        int curr_sum = 0;
        return hasPathSumAux(root,targetSum,curr_sum);
    }

    bool hasPathSumAux(TreeNode* root, int targetSum, int curr_sum){
        if(!root){
            return false;
        }

        curr_sum += root->val;

        if(!root->left && !root->right && curr_sum == targetSum){
            return true;
        }
        if(hasPathSumAux(root->left,targetSum, curr_sum)){
            return true;
        }
        if(hasPathSumAux(root->right,targetSum, curr_sum)){
            return true;
        }

        curr_sum -= root->val;
        return false;
    }
};