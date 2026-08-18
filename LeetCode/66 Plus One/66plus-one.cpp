class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        vector<int> ans = digits;

        // Case 1: last digit is not 9
        if (digits[n-1] != 9) {
            ans[n-1] += 1;
            return ans;
        }
        else {
            // Case 2: handle carry
            for (int i = n-1; i >= 0; i--) {
                if (ans[i] < 9) {
                    ans[i] += 1;
                    return ans;  // done, return immediately
                }
                ans[i] = 0;  // if it was 9, make it 0 and carry on
            }
        }

        // Case 3: all digits were 9
        ans.insert(ans.begin(), 1);
        return ans;
    }
};
