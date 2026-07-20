class Solution {
public:
    void traverse(TreeNode* root, vector<int>& nums) {
        if (!root) return;
        traverse(root->left, nums);
        nums.push_back(root->val);
        traverse(root->right, nums);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        std::vector<int> nums;

        if (!root){
            return nums;
        }

        traverse(root->left, nums);
        nums.push_back(root->val);
        traverse(root->right, nums);

        return nums;
    }
};