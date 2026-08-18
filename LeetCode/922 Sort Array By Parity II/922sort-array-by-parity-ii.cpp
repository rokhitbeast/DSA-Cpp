class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr(n);
        int a = 0, b = 1;
        for (int i = 0; i < n; i++) {
            if (nums[i] % 2 == 0) {
                arr[a] = nums[i];
                a += 2;
            } else {
                arr[b] = nums[i];
                b += 2;
            }
        }
        return arr;
    }
};