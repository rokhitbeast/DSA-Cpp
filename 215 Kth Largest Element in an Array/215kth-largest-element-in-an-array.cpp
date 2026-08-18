class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // Min-heap to store the k largest elements
        priority_queue<int, vector<int>, greater<int>> minHeap;

        // Process each number in the array
        for (int num : nums) {
            minHeap.push(num);  // Add the current number to the heap
            if (minHeap.size() > k) {
                minHeap.pop();  // Remove the smallest element if the heap exceeds size k
            }
        }

        // The root of the heap is the k-th largest element
        return minHeap.top();
    }
};

