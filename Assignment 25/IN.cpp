class Solution {
public:
     void inorder (TreeNode* root ,vector<int>& A){
    if (root ==NULL)
        return;
       inorder(root->left,A);
        A.push_back(root->val);
        inorder(root->right,A);
     }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>A;
        inorder(root,A);
        return A;
        
    }
};
