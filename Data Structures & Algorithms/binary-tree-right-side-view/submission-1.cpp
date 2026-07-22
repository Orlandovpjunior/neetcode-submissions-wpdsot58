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
    vector<int>rightSideView(TreeNode* root) {

        std::queue<TreeNode*> fila;
        std::vector<std::vector<int>> list_aux;
        std::vector<int> result;

        if (root){
            fila.push(root);
        }

        int level = 0;
        while(fila.size() > 0){
            int length = fila.size();
            std::vector<int> local;
            for(int i = 0; i < length; i++){
                TreeNode* curr = fila.front();
                fila.pop();
                local.push_back(curr->val);
                if(curr->left){
                    fila.push(curr->left);
                }
                if(curr->right){
                    fila.push(curr->right);
                }
            }
            list_aux.push_back(local);
        }

        for(int i = 0; i < list_aux.size(); i++){
            int length = list_aux.at(i).size();
            if(length > 0){
                result.push_back( list_aux.at(i).at(length - 1));
            } 
        }
        return result;
    }
};