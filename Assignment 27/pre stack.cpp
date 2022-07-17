class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        
        vector <int>pre;
        if (root==NULL)
            return pre;
        stack <TreeNode*> s;
        s.push(root);
        while(!s.empty()){
            root=s.top();
            s.pop();
            pre.push_back(root->val);
            if(root->right !=NULL){
                s.push(root->right);
            }
            if(root->left != NULL){ 
                s.push(root->left);
            }
        }
        
        return pre;
    }
};
