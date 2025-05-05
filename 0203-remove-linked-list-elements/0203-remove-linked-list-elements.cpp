
class Solution {
public:
    ListNode* removeElements(ListNode* head, int data) {
         ListNode* dummy = new ListNode();
    dummy->next = head;

    ListNode* prev = dummy;
    ListNode* curr = head;

    while (curr) {
        if (curr->val == data) {
            prev->next = curr->next;
            delete curr; // optional
            curr = prev->next;
        } else {
            prev = curr;
            curr = curr->next;
        }
    }

    return dummy->next;
    }
};