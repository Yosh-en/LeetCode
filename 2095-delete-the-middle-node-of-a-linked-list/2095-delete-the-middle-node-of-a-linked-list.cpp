class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        // Base case: if only one node
        if (!head || !head->next) return nullptr;

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = nullptr;

        // Move fast 2 steps and slow 1 step
        while (fast && fast->next) {
            fast = fast->next->next;
            prev = slow;
            slow = slow->next;
        }

        // Delete the middle node
        prev->next = slow->next;
        delete slow; // optional: frees memory

        return head;
    }
};
