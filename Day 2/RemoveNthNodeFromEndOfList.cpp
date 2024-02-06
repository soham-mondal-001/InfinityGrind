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
private:
    ListNode* solve(ListNode* head,int& count,int n)
    {
        if(head==NULL)
        {
            count=1;
            return head;
        }
        ListNode* newhead=solve(head->next,count,n);
        if(n==count)
        {
            count++;
            return newhead;
        }
        else
        {
            head->next=newhead;
            count++;
            return head;
        }
    }
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0;
        return solve(head,count,n);
    }
};