class Solution {
public:
    void postorder (TreeNode* root ,vector<int>& A){
    if (root ==NULL)
        return;
        postorder(root->left,A);
        postorder(root->right,A);
        A.push_back(root->val);
        
    }
    vector<int> postorderTraversal(TreeNode* root) {
         vector<int>A;
        postorder(root,A);
        return A;
    }
};
