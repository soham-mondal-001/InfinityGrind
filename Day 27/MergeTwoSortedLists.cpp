/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL)
        return list2;
        ListNode* i=list1;
        ListNode* j=list2;
        ListNode* nxt=NULL;
        ListNode* prev=NULL;
        while(i!=NULL&&j!=NULL)
        {
            if(i->val<=j->val)
            {
                prev=i;
                i=i->next;
            }
            else
            {
                if(prev!=NULL)
                prev->next=j;
                else
                list1=j;
                nxt=j->next;
                j->next=i;
                prev=j;
                j=nxt;
            }
        }
        if(j!=NULL&&prev!=NULL)
        prev->next=j;
        return list1;
    }
};