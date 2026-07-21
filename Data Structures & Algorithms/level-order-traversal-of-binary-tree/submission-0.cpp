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
    vector<vector<int>> levelOrder(TreeNode* root) {

        std::queue<TreeNode*> fila; 
    
        if (root){
            fila.push(root);
        }

        int level = 0;
        std::vector<std::vector<int>> global_matriz;
        while(fila.size() > 0){
            int length = fila.size();
            std::vector<int> local_matriz;
            for(int i = 0; i < length; i++){
                TreeNode* curr = fila.front();
                fila.pop();
                local_matriz.push_back(curr->val);

                if (curr->left){
                    fila.push(curr->left);
                }

                if (curr->right){
                    fila.push(curr->right);
                }
            }
            global_matriz.push_back(local_matriz);
            level++;
        }

        return global_matriz;
        
    }
};
