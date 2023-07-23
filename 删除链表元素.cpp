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
    ListNode* removeElements(ListNode* head, int val) {
while(head!=NULL&&head->val==val)
{
 ListNode* temp=head;
 head=head->next;
 delete temp;    
}
ListNode* head1=head;
while(head1!=NULL&&head1->next!=NULL)
{
    if(head1->next->val==val)
    {
        ListNode* temp=head1->next;
        head1->next=head1->next->next;
        delete temp;
    }
    else {
        head1=head1->next;
    }
}
return head;

    }
};