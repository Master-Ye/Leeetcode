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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
ListNode* dummpy=new ListNode(0);
dummpy->next = head;
ListNode* left = dummpy;
ListNode* right = dummpy;
for(int i=0;i<n+1;i++){
    right = right->next;
}
while(right != NULL)
{
left = left -> next;
right = right -> next;
}
ListNode* temp=left->next;
left->next=left->next->next;
delete temp;
return dummpy->next;
    }
};