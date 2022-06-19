class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
   ListNode* temp;
        ListNode* node =head; 
        if(head==NULL)
            return head;
        while(head!=NULL && head->next!=NULL){        
            temp=head->next;
            if(head->val == temp->val){
                head->next = temp->next;
            }
            else{
                head = head->next;
            }
            
        }
        return node;
        
    }
