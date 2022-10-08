ListNode* Solution::sortList(ListNode* A) {
     vector<int>n;
        ListNode*temp=A;
        
        while(temp!=NULL)
        {
            n.push_back(temp->val);
            temp=temp->next;
        }
        sort(n.begin(),n.end());
        ListNode*curr=A;
        
        int i=0;
        while(curr!=NULL)
        {
            curr->val=n[i];
            i++;
            curr=curr->next;
        }
        return A;

    
}
