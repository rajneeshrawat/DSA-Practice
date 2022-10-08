class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>v;
        for(int i=0;i<lists.size();i++)
        {
            while(lists[i]!=NULL)
            {
                v.push_back(lists[i]->val);
                lists[i] = lists[i]->next;
            }
        }
        ListNode* ans=NULL;
        ListNode* tail;
        if(v.empty()!=true)
        {
            sort(v.begin(),v.end());
            ans = new ListNode(v[0]);
            tail = ans;
        }
        for(int i=1;i<v.size();i++)
        {
            ListNode* a= new ListNode(v[i]);
            tail->next = a;
            tail = a;
        }
        return ans;
    }
};
