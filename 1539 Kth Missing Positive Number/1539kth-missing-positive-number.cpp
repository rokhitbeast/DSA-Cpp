class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        int l=0,h=n-1;
        int ans=n;
        while (l <= h) {
            int mid = l + (h - l) / 2;

            int missing = arr[mid] - (mid + 1);

            if (missing < k){
                l = mid + 1;
            }
            else{
                ans=mid;
                h = mid - 1;
            }
        }

    return ans+k;
    }
};