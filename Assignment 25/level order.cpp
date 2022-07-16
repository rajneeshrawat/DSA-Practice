void levelOrder(Node * root) {
        if (root== NULL)
        return ;
        
        queue<Node*> q;
        q.push(root);
        q.push(NULL);
        
        while (!q.empty()){
            Node* n=q.front();
            q.pop();
            
            if(n!=NULL){
                cout<< n-> data<< " ";
                if(n->left)
                    q.push(n->left);
                if(n-> right )
                q.push(n-> right);    
            }
        
        else if(!q.empty()){
            q.push(NULL);
        }
