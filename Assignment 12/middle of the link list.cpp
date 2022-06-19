class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
      ListNode *startnode =  head;
    
        ListNode *endnode =  head;
        
        while (endnode!= NULL){
        if(endnode->next!=NULL){

                startnode=startnode->next;
                endnode = endnode->next->next;
            }
        
          else{
                break;
            }  
    }
    
      return startnode ;
    }
};
