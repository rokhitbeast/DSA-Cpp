// https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/description/
// Leetcode: Replace Elements with Greatest Element on Right Side


/*
    Iterate from the right to the left,
    We initilize max_right = -1, where max_right represent the max on the right.
    Each round, we set arr[i] = max_right, where max_right is maximum element on the right.
    Also we update max_right = max(max_right, arr[i]).
*/

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);
        int max_right = -1;
        for (int i = n - 1; i >= 0; i--) {
            ans[i] = max_right;
            if (max_right < arr[i]) {
                max_right = arr[i];
            }
        }
        return ans;
    }
};

