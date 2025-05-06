class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;

        // Step 1: Find the length and tail of the list
        ListNode* tail = head;
        int len = 1;
        while (tail->next) {
            tail = tail->next;
            len++;
        }

        // Step 2: Adjust k to prevent unnecessary rotations
        k = k % len;
        if (k == 0) return head;

        // Step 3: Make it a circular list
        tail->next = head;

        // Step 4: Find the new tail (len - k steps ahead)
        int stepsToNewTail = len - k;
        ListNode* newTail = head;
        for (int i = 1; i < stepsToNewTail; i++) {
            newTail = newTail->next;
        }

        // Step 5: Set new head and break the circle
        ListNode* newHead = newTail->next;
        newTail->next = nullptr;

        return newHead;
    }
};
