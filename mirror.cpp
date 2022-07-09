class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        else{
            //invertTree(root->left);
            //invertTree(root->right);
            struct TreeNode* temp;
            temp = root->left;
            root->left=root->right;
            root->right=temp;
            invertTree(root->left);
            invertTree(root->right);
            
            
        }
        return root;
    }
};
