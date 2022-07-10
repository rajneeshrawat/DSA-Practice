class Solution {
public:
    
    void preorder (TreeNode* root,vector<int>& A){
        if (root == NULL)
            return;
        A.push_back(root->val);
        preorder(root->left,A);
        preorder(root-> right,A);
        
        
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>A;
        preorder(root,A);
        return A;
        
        
    }
};
