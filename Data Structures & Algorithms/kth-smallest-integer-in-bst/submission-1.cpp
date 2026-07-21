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
    int kthSmallest(TreeNode* root, int k) {
        
        if(k == 1){
            TreeNode* aux = minValue(root);
            return aux->val;
        }else{
            
            int valor = 0;
            for(int i = 0; i < k; i++){
                TreeNode* aux_min = minValue(root);
                valor = aux_min->val;
                root = remove(root, valor);
            }

            return valor;
        }

    }

    TreeNode* minValue(TreeNode* root){
        TreeNode* curr = root;

        while(curr && curr->left){
            curr = curr->left;
        }
        return curr;
    }

    TreeNode* remove(TreeNode* root, int value){
        if (!root){
            return nullptr;
        }

        if(root->val > value){
            root->left = remove(root->left, value);
        }else if(root->val < value){
            root->right = remove(root->right, value);
        }else{
            if(!root->right){
                return root->left;
            }else if(!root->left){
                return root->right;
            }
            TreeNode* minN = minValue(root->right);
            root->val = minN->val;
            root->right = remove(root->right,minN->val);
        }

        return root;
    }
};