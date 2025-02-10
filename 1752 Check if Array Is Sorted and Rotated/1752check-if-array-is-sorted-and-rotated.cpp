class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0; // Count of decreases

        for (int i = 1; i < n; i++) {
            if (nums[i - 1] > nums[i]) {
                count++;
            }
        }

        // Also check the last and first element (for rotated case)
        if (nums[n - 1] > nums[0]) {
            count++;
        }

        // If there is at most one decrease, it's a rotated sorted array
        return count <= 1;
    }
};
