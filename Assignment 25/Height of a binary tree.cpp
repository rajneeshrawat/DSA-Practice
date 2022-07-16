int height(Node* root) {
        if (!root)  return 0;  
    
        queue<Node*>q;
        q.push(root);
        int level =0;  
        while(!q.empty()){
            int size=q.size();
            while (size--){
                Node* temp = q.front();
                //cout<< temp-> data<<" ";
                 
                if (temp->left) {
                    q.push(temp->left);
                }
                if (temp -> right){
                    q.push(temp->right);
                }
                q.pop();
            }
            level ++;
      
        }
    return level -1;
}
