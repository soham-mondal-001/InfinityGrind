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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* i=l1;
        ListNode* j=l2;
        ListNode* last=NULL;
        int carry=0,newcarry=0;
        while(i!=NULL&&j!=NULL)
        {
            newcarry=(i->val+j->val+carry)/10;
            i->val=(i->val+j->val+carry)%10;
            carry=newcarry;
            last=i;
            i=i->next;
            j=j->next;
        }
        while(i!=NULL)
        {
            newcarry=(i->val+carry)/10;
            i->val=(i->val+carry)%10;
            carry=newcarry;
            last=i;
            i=i->next;
        }
        if(j!=NULL)
        last->next=j;
        while(j!=NULL)
        {
            newcarry=(j->val+carry)/10;
            j->val=(j->val+carry)%10;
            carry=newcarry;
            last=j;
            j=j->next;
        }
        if(carry>0)
        {
            ListNode* temp=new ListNode;
            temp->next=NULL;
            last->next=temp;
            temp->val=carry;
        }
        return l1;
    }
};