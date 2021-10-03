class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)
            return NULL;
        TreeNode* root1=new TreeNode(root->val);
       root1->left=invertTree(root->right);
        root1->right=invertTree(root->left);
        return root1;
        
    }
};
