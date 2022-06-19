class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode* temp=head;
        int n=0;
        while(temp!=NULL)
        {
            n=(n*2)+(temp->val);
            temp=temp->next;
        }
        return n;
    }
};
