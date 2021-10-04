
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

       ListNode *start = new ListNode();
        start->next = head;
        ListNode *f = start;
        ListNode *s = start;

        for(int i=1; i<=n; i++)
            f = f->next;

        while(f->next != NULL)
        {
            f = f->next;
            s = s->next;
        }
        s->next = s->next->next;

        return start->next;
    }
};
