class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        
        // Traverse the array from the last digit to the first
        for (int i = n - 1; i >= 0; i--) {
            // If the digit is less than 9, just add 1 and return
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            // If digit is 9, it becomes 0 and we carry over
            digits[i] = 0;
        }

        // If we came out of the loop, it means all were 9s
        // So we need to add a 1 at the beginning
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
