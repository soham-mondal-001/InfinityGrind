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

    ListNode* reverseList(ListNode* i) {
        if(i==NULL||i->next==NULL)
        return i;
        ListNode* tobereturned=reverseList(i->next);
        i->next->next=i;
        i->next=NULL;
        return tobereturned;
    }
};