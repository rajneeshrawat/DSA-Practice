class Solution {
public:
    ListNode* detectCycle(ListNode *head)
    {
            ListNode *a = head;
            ListNode *b = head;
        
            while (b && b->next)
            {
                a = a->next;
                b = b->next->next;
                if (a == b)
                {
                    a = head;
                    while (a != b)
                    {
                        a = a->next;
                        b = b->next;
                    }
                    return a;
                }
            }
            return NULL;
        }
};
